<?php

/**
 * @file
 * The rest of the functions.
 */

function international_fix_what_we_do_items(array $menus, $parentMlid) {
  foreach ($menus as $item) {
    if ($item['link_path'] === FALSE) {
      $itemMlid = get_link_by_name($item['link_title']);
    }
    else {
      $itemMlid = get_new_link(get_link_normal_path($item['link_path']), $parentMlid);
    }

    if (empty($itemMlid)) {
      echo 'Link does not exist. Path: ' . $item['link_path'] . "\n";
      continue;
    }

    $menu = menu_link_load($itemMlid);

    $menu['weight'] = $item['weight'];

    $savedMlid = menu_link_save($menu);

    if (FALSE === $savedMlid) {
      echo 'Link could not be saved. Mlid: ' . $itemMlid . ' Title: ' . $menu['link_title'] . "\n";
      continue;
    }
  }
}

function international_fix_focus_areas_submenu_items(array $menus) {
  $parentTitle = 'Focus Areas';
  $parentMlid = get_link_by_name($parentTitle);

  if (empty($parentMlid)) {
    echo 'Link does not exist. Title: ' . $parentTitle . "\n";
    return;
  }

  foreach ($menus as $item) {
    $link = ($item['external'] === FALSE) ? get_link_normal_path($item['link_path']) : $item['link_path'];
    $itemMlid = get_new_link($link, $parentMlid);

    if (empty($itemMlid)) {
      echo 'Link does not exist. Path: ' . $item['link_path'] . "\n";
      continue;
    }

    $menu = menu_link_load($itemMlid);

    $menu['weight'] = $item['weight'];
    if ($item['title'] !== FALSE) {
      $menu['link_title'] = $item['title'];
    }

    $savedMlid = menu_link_save($menu);

    if (FALSE === $savedMlid) {
      echo 'Link could not be saved. Mlid: ' . $itemMlid . ' Title: ' . $menu['link_title'] . "\n";
      continue;
    }
  }
}

function international_fix_menu_links(array $links) {
  $offcanvasLinks = variable_get(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, array());
  $megamenuLinks = variable_get('tieto_megamenus_enabled_links', array());

  foreach ($links as $title => $data) {
    $mlid = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE 
      menu_name='main-menu' 
      AND link_title=:link_title
      AND plid=:plid
    ",
      [
        ':link_title' => $title,
        ':plid' => 0,
      ])->fetchAssoc()['mlid'];

    if (empty($mlid)) {
      echo 'Link does not exist. Mlid: ' . $mlid . ' Title: ' . $title . "\n";
      continue;
    }

    $menu = menu_link_load($mlid);
    $menu['weight'] = $data['weight'];
    $menu['tieto_offcanvas_link'] = $data['off_canvas'];
    $menu['tieto_megamenu_link'] = $data['megamenu'];
    $menu['tieto_megamenu_link_expanded'] = $data['megamenu'];

    $savedMlid = menu_link_save($menu);

    if (FALSE === $savedMlid) {
      echo 'Link could not be saved. Mlid: ' . $mlid . ' Title: ' . $title . "\n";
      continue;
    }

    if ($data['off_canvas'] === TRUE) {
      $offcanvasLinks[$savedMlid] = [
        'mlid' => $savedMlid,
        'expand' => FALSE,
      ];
    }

    if ($data['tieto_megamenu_link'] === TRUE) {
      $megamenuLinks[$savedMlid] = [
        'mlid' => $savedMlid,
        'expand' => FALSE,
      ];
    }
  }

  variable_set(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, $offcanvasLinks);
  variable_set('tieto_megamenus_enabled_links', $megamenuLinks);
}

function international_create_additional_menus(array $menus) {
  $offcanvasLinks = variable_get(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, array());

  // Go through new menus, try to save them.
  foreach ($menus as $menu) {
    // Try to load it, we don't want to create more, than one link.
    $link = $menu['external'] === FALSE ? get_link_normal_path($menu['link']) : $menu['link'];
    $loaded = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE 
      menu_name='main-menu' 
      AND link_path=:link_path
      AND link_title=:link_title
      AND plid=:plid
    ",
      [
        ':link_path' => $link,
        ':link_title' => $menu['title'],
        ':plid' => 0,
      ])->fetchAssoc()['mlid'];

    if (!empty($loaded)) {
      echo 'Link already exists. Mlid: ' . $loaded . ' Title: ' . $menu['title'] . "\n";
      continue;
    }

    $actualMenu = [
      'menu_name' => 'main-menu',
      'link_title' => $menu['title'],
      'plid' => 0,
      'link_path' => $link,
      'external' => $menu['external'],
    ];

    $mlid = menu_link_save($actualMenu);

    if ($mlid === FALSE) {
      echo 'Saving the menu link failed. Title: ' . $actualMenu['link_title'] . "\n";
      continue;
    }

    if ($menu['off_canvas'] === TRUE) {
      $offcanvasLinks[$mlid] = [
        'mlid' => $mlid,
        'expand' => FALSE,
      ];
    }
  }

  variable_set(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, $offcanvasLinks);
}

function international_rename_newsroom() {
  $path = get_link_normal_path('newsroom');

  // Load MLID.
  $mlid = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name='main-menu' AND link_path=:link_path
    ",
    [
      ':link_path' => $path,
    ])->fetchAssoc()['mlid'];

  $menu = menu_link_load($mlid);
  $menu['link_title'] = 'News';
  $menu['title'] = 'News';

  $savedMenu = menu_link_save($menu);

  if (FALSE === $savedMenu) {
    echo('The menu link could not be created: ' . $menu['title'] . "\n");
  }
}

function international_add_menus_to_off_canvas(array $menus) {
  $offcanvasLinks = variable_get(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, array());
  foreach ($menus as $menu) {
    // Get normal path from URL fragment.
    $linkPath = get_link_normal_path($menu);

    // Load MLID.
    $mlid = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name='main-menu' AND link_path=:link_path AND link_title not like '%(backup)'
    ",
      [
        ':link_path' => $linkPath,
      ])->fetchAssoc()['mlid'];

    if ($mlid) {
      $offcanvasLinks[$mlid] = [
        'mlid' => $mlid,
        'expand' => FALSE,
      ];
    }
    else {
      echo('Could not load link with name ' . $menu . "\n");
    }
  }
  variable_set(TIETO_OFFCANVAS_MENU_ENABLED_LINKS_VARIABLE, $offcanvasLinks);
}

function international_process_new_menu($megamenuMlid, $parentLink, $childLinks) {
  $linkPath = get_link_normal_path($parentLink);

  // Try to get the backup.
  $backup = get_backup_link($linkPath);
  if (count($backup) > 0) {
    echo('Backup is already there. (' . $parentLink . ')' . "\n");
    return $backup;
  }

  // Get the new link.
  $new = get_new_link($linkPath, $megamenuMlid);
  if (count($new) > 0) {
    echo('New link is already there. (' . $parentLink . ')' . "\n");
    return $new;
  }
  // If new link does not exist, we didn't yet do the refactor.
  // This means, that $parentLink should exist at the root (plid = 0).
  $new = get_new_link($linkPath, 0);

  // At this point, there is no backup, but no new link either.
  // So we create a backup from the "new".
  $backupMenu = create_backup_link($new);
  if (NULL === $backupMenu) {
    echo('Error while creating the backup.' . "\n");
    return NULL;
  }

  $newMenu = create_new_link($backupMenu, $megamenuMlid);
  if (NULL === $newMenu) {
    echo('Error while creating the backup.' . "\n");
    return NULL;
  }

  add_children_to_new_link($newMenu, $childLinks);

  return $newMenu;
}

function international_create_focus_areas($megamenuMlid) {
  $linkDefinition = [
    'menu_name' => 'main-menu',
    'link_title' => 'Focus Areas',
    'link_path' => '<front>',
  ];

  $exists = db_query("
    SELECT mlid 
    FROM menu_links 
    WHERE menu_name='main-menu' AND link_path=:link_path AND link_title=:link_title
  ",
    [
      ':link_path' => $linkDefinition['link_path'],
      ':link_title' => $linkDefinition['link_title'],
    ])->fetchAssoc()['mlid'];

  if ($exists) {
    echo('Focus areas already exists.' . "\n");
    return $exists;
  }

  $menuLinkMlid = create_new_link($linkDefinition, $megamenuMlid);

  if (NULL === $menuLinkMlid) {
    echo('Error while creating the focus areas menu link.' . "\n");
    return NULL;
  }

  add_children_to_new_link($menuLinkMlid, international_get_focus_areas_map()['internal']);

  foreach (international_get_focus_areas_map()['external'] as $name => $externalLink) {
    // @todo: try to load before trying to save.
    $linkDefinition = [
      'link_title' => $name,
      'link_path' => $externalLink,
      'external' => 1,
      'plid' => $menuLinkMlid,
    ];

    $createdMlid = menu_link_save($linkDefinition);
    if (FALSE === $createdMlid) {
      echo('Creating the child link ' . $name . ' failed.' . "\n");
    }
  }

  return $menuLinkMlid;
}

/**
 * Function to create the 'What we do' menu link.
 *
 * @return \DatabaseStatementInterface|int|mixed
 *   The mlid of the menu link.
 */
function international_create_or_get_what_we_do_menu_link() {
  $mlids = db_query("SELECT mlid FROM menu_links WHERE menu_name='main-menu' AND link_title='What we do' LIMIT 1;")->fetchAssoc();

  // Check for the link, don't create if already there.
  if (!empty($mlids)) {
    echo('The menu "What we do" is already there with mlid ' . $mlids['mlid'] . '.' . "\n");
    return $mlids['mlid'];
  }

  // New menu should come after 'About us', so get the weight of that.
  $weight = 0;
  $item = db_query("SELECT weight FROM menu_links WHERE menu_name='main-menu' AND link_title='About us' LIMIT 1;")->fetchAssoc();
  if (isset($item['weight'])) {
    // Set the weight to be heavier, than 'About us'.
    $weight = (int) $item['weight'] + 1;
  }

  $link = [
    'plid' => 0,
    'tieto_megamenu_link' => TRUE,
    'tieto_megamenu_link_expanded' => TRUE,
    'link_title' => 'What we do',
    'link_path' => '<front>',
    'menu_name' => 'main-menu',
    'weight' => $weight,
    'hidden' => 0,
  ];

  $createdMlid = menu_link_save($link);

  if (FALSE === $createdMlid) {
    echo('The menu link could not be created: ' . $link['title'] . "\n");
  }

  return $createdMlid;
}
