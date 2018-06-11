<?php

/**
 * @file
 * Common functions.
 */

function add_children_to_new_link($newParentMlid, $children, $menuName = 'main-menu') {
  $weight = 1;
  $childLinkPaths = array_map(function ($item) {
    return get_link_normal_path($item);
  }, $children);

  $children = db_query("SELECT mlid FROM menu_links WHERE menu_name=:menu_name AND link_path in (:paths);",
    [
      ':paths' => $childLinkPaths,
      ':menu_name' => $menuName,
    ]);

  foreach ($children as $child) {
    change_menu_link_parent($child->mlid, $newParentMlid, $weight);
    ++$weight;
  }
}

function create_new_link($menuLink, $parentMlid, $menuName = 'main-menu', $additionalData = []) {
  // Create new.
  $newMenuLink = $menuLink;
  $newMenuLink['plid'] = $parentMlid;
  $newMenuLink['link_title'] = trim(str_replace('(backup)', '', $menuLink['link_title']));
  $newMenuLink['weight'] = 0;
  $newMenuLink['hidden'] = 0;
  $newMenuLink['menu_name'] = $menuName;

  // Hack for the 2nd gen refactors.
  if (!empty($additionalData)) {
    $newMenuLink['link_path'] = $additionalData['link_path'];
    $newMenuLink['link_title'] = $additionalData['link_title'];
    $newMenuLink['weight'] = $additionalData['weight'];
  }

  unset($newMenuLink['mlid']);

  $createdMlid = menu_link_save($newMenuLink);

  if (FALSE === $createdMlid) {
    echo('The menu link could not be created: ' . $newMenuLink['title'] . "\n");
    return NULL;
  }

  return $createdMlid;
}

function create_backup_link($mlid, $menuName = 'main-menu') {
  // Rename and hide.
  $menuLink = menu_link_load($mlid);
  if ($menuLink) {
    $menuLink['link_title'] .= ' (backup)';
    $menuLink['hidden'] = 1;
    $menuLink['menu_name'] = $menuName;

    if (FALSE === menu_link_save($menuLink)) {
      echo('The menu link could not be saved: ' . $menuLink['title'] . "\n");
      return NULL;
    }
  }
  return $menuLink;
}

function change_menu_link_parent($mlid, $parent, $weight) {
  if ($menuLink = menu_link_load($mlid)) {
    $menuLink['plid'] = $parent;
    $menuLink['weight'] = $weight;
    $menuLink['hidden'] = 0;

    if (FALSE === menu_link_save($menuLink)) {
      echo('The menu link could not be saved: ' . $menuLink['title'] . "\n");
    }
  }
}

function get_link_by_name($linkName, $menuName = 'main-menu') {
  return db_query('
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name=:menu_name AND link_title like :link_title
  ',
    [
      ':link_title' => $linkName,
      ':menu_name' => $menuName,
    ])->fetchAssoc()['mlid'];
}

function get_new_link_by_name($linkName, $parentMlid, $menuName = 'main-menu') {
  return db_query('
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name=:menu_name AND link_title like :link_title AND plid=:plid
  ',
    [
      ':link_title' => $linkName,
      ':menu_name' => $menuName,
      ':plid' => $parentMlid,
    ])->fetchAssoc()['mlid'];
}

function get_new_link($linkPath, $parentMlid, $menuName = 'main-menu') {
  return db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name=:menu_name AND link_path=:link_path AND plid=:plid AND link_title not like '%(backup)'
  ",
    [
      ':link_path' => $linkPath,
      ':plid' => $parentMlid,
      ':menu_name' => $menuName,
    ])->fetchAssoc()['mlid'];
}

function get_backup_link($linkPath, $menuName = 'main-menu') {
  return db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name=:menu_name AND link_path=:link_path AND link_title like '%(backup)'
  ",
    [
      ':link_path' => $linkPath,
      ':menu_name' => $menuName,
    ])->fetchAssoc()['mlid'];
}

function disable_key_topics_social_icons_block() {
  db_update('block')
    ->fields([
      'status' => 0,
    ])
    ->condition('theme', 'tietocom')
    ->condition('module', 'tieto_key_topics')
    ->condition('delta', 'key_topics_social_icons')
    ->execute();
}

function fix_country_switcher_menu() {
  $mlid = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name='menu-tieto-worldwide' AND link_title in ('Tieto websites:', 'Tieto websites')
  ")->fetchAssoc()['mlid'];

  if (empty($mlid)) {
    echo 'Link does not exist, hopefully because it is already renamed: Title: Tieto websites' . "\n";
    return;
  }

  $menu = menu_link_load($mlid);
  $menu['link_title'] = 'Local sites';

  $savedMlid = menu_link_save($menu);

  if (FALSE === $savedMlid) {
    echo 'Link could not be saved. Mlid: ' . $mlid . ' Title: Tieto websites' . "\n";
    return;
  }

  $locationsMlid = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name='menu-tieto-worldwide' AND link_title='Looking for Tieto office locations?'
  ")->fetchAssoc()['mlid'];

  if (empty($locationsMlid)) {
    echo 'Link does not exist, hopefully because it is already renamed: Title: Looking for Tieto office locations?' . "\n";
    return;
  }

  unset($menu);
  $menu = menu_link_load($locationsMlid);
  $menu['plid'] = $savedMlid;
  $menu['weight'] = 100;

  $locSavedMlid = menu_link_save($menu);

  if (FALSE === $locSavedMlid) {
    echo 'Link could not be saved. Mlid: ' . $locationsMlid . ' Title: Looking for Tieto office locations?' . "\n";
    return;
  }

}

function clear_megamenu($menuName = 'main-menu') {
  $mlids = db_query('
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name=:menu_name
    ', [
      ':menu_name' => $menuName,
    ])->fetchCol();

  $links = variable_get('tieto_megamenus_enabled_links', array());

  // Go through menu links. If the link is enabled as a megamenu,
  // disable it from there.
  foreach ($mlids as $mlid) {
    if (array_key_exists($mlid, $links)) {
      unset($links[$mlid]);
    }
  }

  variable_set('tieto_megamenus_enabled_links', $links);
}

function clear_megamenu_of_other_items($megamenuMlid, $menuName = 'main-menu') {
  $mlids = db_query('
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name=:menu_name
    ', [
    ':menu_name' => $menuName,
  ])->fetchCol();

  $links = variable_get('tieto_megamenus_enabled_links', array());

  // Go through menu links. If the link is enabled as a megamenu,
  // disable it from there.
  foreach ($mlids as $mlid) {
    if (array_key_exists($mlid, $links) && $mlid != $megamenuMlid) {
      unset($links[$mlid]);
    }
  }

  variable_set('tieto_megamenus_enabled_links', $links);
}

/**
 * Set off-canvas menu as enabled for the main-menu.
 */
function enable_offcanvas_for_menu($menuName = 'main-menu') {
  $menus = variable_get(TIETO_OFFCANVAS_MENU_ENABLED_MENUS_VARIABLE, array());
  $menus[$menuName] = 1;
  variable_set(TIETO_OFFCANVAS_MENU_ENABLED_MENUS_VARIABLE, $menus);
}

function enable_megamenu_for_menu($menuName = 'main-menu') {
  $menus = variable_get('tieto_megamenus_enabled_menus', array());
  $menus[$menuName] = 1;
  variable_set('tieto_megamenus_enabled_menus', $menus);
}

function disable_menus(array $menus, $menuName = 'main-menu') {
  foreach ($menus as $title => $data) {
    $mlid = db_query('
    SELECT mlid 
    FROM menu_links 
    WHERE 
      menu_name=:menu_name 
      AND link_title=:link_title
      AND plid=:plid
    ',
      [
        ':link_title' => $title,
        ':plid' => 0,
        ':menu_name' => $menuName,
      ])->fetchAssoc()['mlid'];

    if (empty($mlid)) {
      echo 'Link does not exist. Mlid: ' . $mlid . ' Title: ' . $title . "\n";
      continue;
    }

    $menu = menu_link_load($mlid);
    $menu['weight'] = $data['weight'];
    $menu['hidden'] = $data['hidden'];

    $savedMlid = menu_link_save($menu);

    if (FALSE === $savedMlid) {
      echo 'Link could not be saved. Mlid: ' . $mlid . ' Title: ' . $title . "\n";
      continue;
    }
  }
}

function fix_customer_area_menu_link_capitalization() {
  $mlid = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name='menu-customer-area' AND link_title = 'customer area'
  ")->fetchAssoc()['mlid'];

  if (empty($mlid)) {
    echo 'Menu link with title "customer area" not found. It probably has been renamed already.' . "\n";
    return;
  }

  $menu = menu_link_load($mlid);
  $menu['link_title'] = 'Customer area';

  $savedMlid = menu_link_save($menu);

  if (FALSE === $savedMlid) {
    echo 'Link could not be saved. Mlid: ' . $mlid . ' Title: Customer area' . "\n";
    return;
  }
}

function create_megamenu(array $menuLink, $menuName) {
  $mlid = db_query('
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name=:menu_name AND link_title=:link_title LIMIT 1;
  ', [
    ':menu_name' => $menuName,
    ':link_title' => $menuLink['link_title'],
  ])->fetchAssoc()['mlid'];

  // Check for the link, don't create if already there.
  if (!empty($mlid)) {
    echo('The menu "' . $menuLink['link_title'] . '" is already there with mlid ' . $mlid . '.' . "\n");
    return $mlid;
  }

  $createdMlid = menu_link_save($menuLink);

  if (FALSE === $createdMlid) {
    echo('The menu link could not be created: ' . $menuLink['link_title'] . "\n");
    return NULL;
  }

  return $createdMlid;
}

/**
 * Helper function so I don't have to fully refactor the international stuff.
 *
 * @param $path
 * @param null $langCode
 * @return bool|mixed
 */
function get_link_normal_path($path, $langCode = NULL) {
  // Get the core normal path.
  $normalPath = drupal_get_normal_path($path, $langCode);

  // If no langcode has been supplied, return with the standard return value.
  if ($langCode === NULL) {
    return $normalPath;
  }

  // If the langcode was not null, but the normal_path is the same,
  // as the given one (meaning it was not found), try to fall back to NULL as
  // the langcode.
  if ($normalPath === $path) {
    $normalPath = drupal_get_normal_path($path);
  }

  return $normalPath;
}

/**
 * Update or create top-level menu items.
 *
 * @param array $newLinks
 *   Array of arrays of new links in a specific format.
 *   [
 *    'weight' => (int),
 *    'link_title' => (string),
 *    'existing_title' => FALSE|(string)
 *    'off_canvas' => (bool),
 *    'link_path' => (string),
 *    'external' => (bool),
 *   ].
 * @param string $menuName
 *   Machine name of the menu, e.g menu-finland.
 * @param string|int $megamenuMlid
 *   MLID of the megamenu, so it doesn't get hidden.
 */
function alter_or_create_top_level_menu_links(array $newLinks, $menuName, $megamenuMlid) {
  $existingLinks = db_query('
    SELECT mlid, link_title, link_path, hidden
    FROM menu_links
    WHERE
      menu_name=:menu_name
      AND plid=0
  ', [
    ':menu_name' => $menuName,
  ])->fetchAllAssoc('mlid');

  if (isset($existingLinks[$megamenuMlid])) {
    unset($existingLinks[$megamenuMlid]);
  }

  $offCanvasLinks = variable_get(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, []);

  // Iterate through the new links.
  foreach ($newLinks as $newLink) {
    // If a new link is an existing one, then get the existing one.
    $existingMlid = search_existing_links($existingLinks, $newLink);

    // If it's an existing link, remove it from the array.
    // The remaining items in $existingLinks will be hidden later.
    if (NULL !== $existingMlid) {
      unset($existingLinks[$existingMlid]);
    }

    // If it's a new link, set the $newLink values as the menu values,
    // unset unneeded data.
    if ($existingMlid === NULL) {
      $menu = $newLink;
      unset($menu['existing_title'], $menu['off_canvas']);
    }
    // Else, if it exists already, load that and update the values.
    // @note: This overwrites stuff, we don't create backups.
    // Deal with it.
    else {
      $menu = menu_link_load($existingMlid);
      $menu['link_title'] = $newLink['link_title'];
      $menu['weight'] = $newLink['weight'];
      $menu['external'] = $newLink['external'];
    }

    $menu['link_path'] = ($newLink['external'] === FALSE) ? get_link_normal_path($newLink['link_path'], $newLink['lang_code']) : $newLink['link_path'];

    $savedMlid = menu_link_save($menu);
    if (FALSE === $savedMlid) {
      echo 'The menu with title ' . $menu['link_title'] . ' could not be saved.' . "\n";
      continue;
    }

    if ($newLink['off_canvas'] === TRUE) {
      $offCanvasLinks[$savedMlid] = [
        'mlid' => $savedMlid,
        'expand' => 0,
      ];
    }
  }

  // Hide remaining top-level links and put them to the end of the list.
  foreach ($existingLinks as $existingLink) {
    $menu = menu_link_load($existingLink->mlid);

    if ($menu === FALSE) {
      echo 'The menu ' . $existingLink->link_title . ' could not be loaded.' . "\n";
      continue;
    }

    $menu['hidden'] = TRUE;
    $menu['weight'] = 100;

    $savedMlid = menu_link_save($menu);

    if (FALSE === $savedMlid) {
      echo 'The menu with title ' . $menu['link_title'] . ' could not be saved.' . "\n";
    }
  }

  // Don't trust in the hook_menu_link_update() being called.
  variable_set(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, $offCanvasLinks);

}

/**
 * Search a set of links for the existence of a link.
 *
 * Only looks at enabled links, matches titles only.
 *
 * @param \stdClass[] $existingLinks
 *   Array of objects. Objects have to contain the link_title and hidden
 *   properties.
 * @param array $newLink
 *   Link as an array with the 'existing_title' key.
 *
 * @return null|int
 *   The mlid of the link or NULL.
 */
function search_existing_links(array $existingLinks, array $newLink) {
  foreach ($existingLinks as $existingLink) {
    if ((bool) $existingLink->hidden) {
      continue;
    }

    // If existing_title is FALSE, matching won't be possible,
    // so set it to FALSE. Note: It should be false either way,
    // it might be easier to read it like this.
    $existingTitleMatch = $newLink['existing_title'] === FALSE ? FALSE : $existingLink->link_title === $newLink['existing_title'];
    $titleMatch = $existingLink->link_title === $newLink['link_title'];

    if ($existingTitleMatch || $titleMatch) {
      return $existingLink->mlid;
    }
  }

  return NULL;
}

/**
 * @param array[] $megamenuLinks
 *   See fi_megamenu_links() for the required structure.
 * @param string $menuName
 *   Menu name.
 * @param string|int $megamenuMlid
 *   Megamenu mlid.
 */
function move_or_create_menus_for_megamenu($megamenuLinks, $menuName, $megamenuMlid) {
  foreach ($megamenuLinks as $megamenuLink) {
    $backupMenuTitle = $megamenuLink['link_title'] . ' (backup)';

    $megamenuLink['link_path'] = get_link_normal_path($megamenuLink['link_path'], $megamenuLink['lang_code']);

    // Try to get the backup.
    $backupMlid = get_link_by_name($backupMenuTitle, $menuName);
    if (count($backupMlid) > 0) {
      echo('Backup is already there. (' . $megamenuLink['link_title'] . ')' . "\n");
      continue;
    }

    // Get the new link.
    $newMlid = get_new_link_by_name($megamenuLink['link_title'], $megamenuMlid, $menuName);
    if (count($newMlid) > 0) {
      echo('New link is already there. (' . $megamenuLink['link_title'] . ')' . "\n");
      continue;
    }
    // If new link does not exist, we didn't yet do the refactor.
    // This means, that $parentLink should exist at the root (plid = 0).
    $newMlid = get_new_link_by_name($megamenuLink['link_title'], 0, $menuName);

    if (empty($newMlid)) {
      // If there's no plid=0 link to be found, create one.
      $newLink = $megamenuLink;
      unset($newLink['children'], $newLink['existing_title'], $newLink['lang_code']);

      $newMlid = menu_link_save($newLink);

      if (FALSE === $newMlid) {
        echo 'Menu link "' . $newLink['link_title'] . '" could not be saved.' . "\n";
      }
    }

    // At this point, there is no backup, but no new link either.
    // So we create a backup from the "new".
    $backupMenu = create_backup_link($newMlid, $menuName);
    if (NULL === $backupMenu) {
      echo('Error while creating the backup.' . "\n");
      continue;
    }

    $newMenuMlid = create_new_link($backupMenu, $megamenuMlid, $menuName, $megamenuLink);
    if (NULL === $newMenuMlid) {
      echo('Error while creating the new link.' . "\n");
      continue;
    }

    create_or_add_children_to_megamenu_link($newMenuMlid, $megamenuLink['children'], $menuName);
  }
}

function create_or_add_children_to_megamenu_link($parentMlid, $children, $menuName) {
  foreach ($children as &$child) {
    $child['link_path'] = get_link_normal_path($child['link_path'], $child['lang_code']);
  }
  unset($child);


  $childLinkPaths = array_map(function ($item) {
    return $item['link_path'];
  }, $children);

  $loadedChildren = db_query('SELECT mlid, link_path FROM menu_links WHERE menu_name=:menu_name AND link_path in (:paths);',
    [
      ':paths' => $childLinkPaths,
      ':menu_name' => $menuName,
    ])->fetchAllAssoc('link_path');

  $loadedChildrenCount = count($loadedChildren);

  if (count($children) !== $loadedChildrenCount) {
    echo 'Child count and loaded child count not the same. ' . count($children) . ' vs ' . $loadedChildrenCount . "\n";
  }

  $weight = 0;
  foreach ($children as $child) {
    ++$weight;
    $loadedChild = NULL;
    // $loadedChildren is keyed by link_paths.
    if (isset($loadedChildren[$child['link_path']])) {
      $loadedChild = $loadedChildren[$child['link_path']];
    }

    // Create.
    if (NULL === $loadedChild) {
      $childMenu = [
        'plid' => $parentMlid,
        'weight' => $weight,
        'link_path' => $child['link_path'],
        'link_title' => $child['link_title'],
        'hidden' => 0,
        'menu-name' => $menuName,
      ];

      $childMenuMlid = menu_link_save($childMenu);

      if ($childMenuMlid === FALSE) {
        echo 'Child menu could not be saved. Title: ' . $childMenu['link_title'] . "\n";
        continue;
      }
    }
    // Alter.
    else {
      change_menu_link_parent($loadedChild->mlid, $parentMlid, $weight);
    }
  }
}

function refactor_menu($menuName) {
  enable_offcanvas_for_menu($menuName);
  enable_megamenu_for_menu($menuName);

  /** @var \MenuMapInterface $menuMap */
  $menuMap = get_menu_map_instance($menuName);

  if (NULL === $menuMap) {
    echo 'Map for the menu ' . $menuName . ' could not be found.' . "\n";
    return;
  }

  $megamenuMlid = create_megamenu($menuMap->getMegamenuParentData(), $menuName);
  clear_megamenu_of_other_items($megamenuMlid, $menuName);

  if (NULL === $megamenuMlid || 0 === $megamenuMlid || FALSE === $megamenuMlid) {
    echo 'New megamenu could not be found, mlid is empty. Menu name: ' . $menuName . "\n";
    return;
  }

  alter_or_create_top_level_menu_links($menuMap->getTopLevelMenuLinks(), $menuName, $megamenuMlid);
  move_or_create_menus_for_megamenu($menuMap->getMegamenuLinks(), $menuName, $megamenuMlid);

//  do_additional_fixes($menuMap->getAdditionalFixes(), $menuName, $megamenuMlid);
  unset($menuMap);
}

/**
 * Execute additional fixes, etc.
 *
 * @todo
 *
 * @param array $links
 *   The links to be modified.
 * @param string $menuName
 *   The menu name of the links.
 * @param string|int $megamenuMlid
 *   The megamenu MLID.
 */
function do_additional_fixes($links, $menuName, $megamenuMlid) {

}

/**
 * A list of menu names supported by the script.
 *
 * Supported means they have a full map with every link present.
 *
 * @return array
 *   The menu names.
 */
function get_menu_names() {
  return [
    'main-menu',
    'menu-finland',
    'menu-norway',
    'menu-russia',
    'menu-sweden',
    'menu-latvia',
    'menu-lithuania',
    'menu-estonia',
    'menu-austria',
    'menu-metherlands',
    'menu-germany',
    'menu-czech',
    'menu-china',
  ];
}

/**
 * Returns the required map object.
 *
 * @return \MenuMapInterface|null
 *   The object or NULL.
 */
function get_menu_map_instance($menuName) {
  switch ($menuName) {
    case 'main-menu':
      return new EnMap();

    case 'menu-finland':
      return new FiMap();

    case 'menu-norway':
      return new NoMap();

    case 'menu-russia':
      return new RuMap();

    case 'menu-sweden':
      return new SeMap();

    case 'menu-latvia':
      return new LvMap();

    case 'menu-lithuania':
      return new LtMap();

    case 'menu-estonia':
      return new EeMap();

    case 'menu-austria':
      return new AtMap();

    case 'menu-metherlands':
      return new NlMap();

    case 'menu-germany':
      return new DeMap();

    case 'menu-czech':
      return new CzMap();

    case 'menu-china':
      return new CnMap();

    default:
      echo 'Invalid menu name' . $menuName . ".\n";
      return NULL;
  }
}
