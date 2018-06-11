<?php

/**
 * @file
 * Provide localizations maps and functions.
 */

/**
 * @deprecated
 */
function create_menu_localizations() {
  if (!module_exists('i18n_menu')) {
    echo 'The i18n_menu module is not enabled. Please, enable it so localizations can be created.' . "\n";
    return;
  }

  echo 'The i18n_menu module is enabled, loading localizations.' . "\n";

  $lang_default = language_default('language');
  $language_list = language_list();
  // No need to translate the original..
  unset($language_list[$lang_default]);
  $language_list = array_keys($language_list);

  foreach (get_localization_map() as $menuData) {
    $mlid = get_link_by_name($menuData['link_title'], $menuData['menu_name']);

    if (count($mlid) === 0) {
      echo 'The menu link ' . $menuData['link_title'] . ' could not be loaded.' . "\n";
      continue;
    }

    $menu = menu_link_load($mlid);
    if ((int) $menu['i18n_tsid'] === 0) {
      echo 'The menu link tsid is default (0), creating translation set.' . "\n";
      $menu_translation_set = i18n_translation_set_create('menu_link');

      save_translation_set_for_menu($menuData['menu_name'], $menuData['link_title'], $menu_translation_set->tsid);

      $menu['i18n_tsid'] = $menu_translation_set->tsid;
    }
    else {
      echo 'The menu tsid is ' . $menu['i18n_tsid'] . ' for the menu ' . $menuData['link_title'] . "\n";
    }

    $menu['customized'] = 1;
    $menu['language'] = $lang_default;
    $mlid = menu_link_save($menu);

    if (FALSE === $mlid) {
      echo 'The menu link ' . $menuData['link_title'] . ' could not be re-saved.' . "\n";
    }

    unset($menu);
    $menu = menu_load($menuData['menu_name']);

    if (FALSE === $menu) {
      echo 'The menu ' . $menuData['menu_name'] . ' could not be loaded.' . "\n";
      continue;
    }

    $menu['language'] = $lang_default;
    // 5: Translate and Localize. Menu items with language will
    // allow translations. Menu items without language will be localized.
    $menu['i18n_mode'] = 5;

    menu_save($menu);

    // NOTE: The code below creates new menu translations, HOWEVER
    // all these menus will be displayed,
    // NOT just the actual localized version.
//    $existing_translations = db_query('
//      SELECT language
//      FROM menu_links
//      WHERE menu_name=:menu_name AND i18n_tsid=:tsid;
//    ', [
//      ':menu_name' => $menu['menu_name'],
//      ':tsid' => $menu['i18n_tsid'],
//    ])->fetchAllAssoc('language');
//
//    $existing_translations = array_keys($existing_translations);
//
//    echo 'Translations exist for the following language codes: ' . "\n";
//    echo "\t" . implode(', ', $existing_translations) . "\n\n";
//
//    $curr_language_list = array_diff($language_list, $existing_translations);
//
//    echo 'Trying to translate ' . $menuData['link_title'] . "\n";
//    foreach ($curr_language_list as $lang_code) {
//      echo "\t" . $lang_code;
//
//      $localization = $menuData['localization_list'][$lang_code];
//      if (NULL === $localization) {
//        echo ' || Localization not found in the script.' . "\n";
//        continue;
//      }
//
//      echo "\n";
//
//      $translated_menu = $menu;
//      unset($translated_menu['mlid']);
//      $translated_menu['enabled'] = TRUE;
//      $translated_menu['link_title'] = $localization;
//      $translated_menu['language'] = $lang_code;
//
//      save_translation_set_for_menu($translated_menu['menu_name'], $translated_menu['link_title'], $translated_menu['i18n_tsid']);
//
//      $translated_mlid = menu_link_save($translated_menu);
//
//      if (FALSE === $translated_mlid) {
//        echo 'The menu ' . $translated_menu['link_title'] . ' could not be saved.' . "\n";
//        continue;
//      }
//    }
  }
}

/**
 * Helper function, as menu_link_save ignores i18n_tsid.
 *
 * @param $menu_name
 * @param $menu_link_title
 * @param $tsid
 */
function save_translation_set_for_menu($menu_name, $menu_link_title, $tsid) {
  // The menu_link_save doesn't save translation sets..
  db_update('menu_links')
    ->fields(
      [
        'i18n_tsid' => $tsid,
      ])
    ->condition('menu_name', $menu_name)
    ->condition('link_title', $menu_link_title)
    ->execute();
}

function get_localization_map() {
  return [
    [
      'menu_name' => 'menu-tieto-worldwide',
      'link_title' => 'Local sites',
      'localization_list' => [
        'en' => 'Local sites',
        'fi' => 'Maasivut',
        'de-at' => 'Lokale Seiten',
        // The zh-hans is cn in the spreadsheet.
        'zh-hans' => '当地地址',
        'de' => 'Lokale Seiten',
        'lv' => 'Reģionālās mājas lapas',
        'lt' => 'Lietuvos svetainė',
        'ru' => 'Региональные сайты',
        'nl' => 'Lokale sites',
        // The nn is no in the spreadsheet.
        'nn' => 'Lokale sider',
        // The sv is se in the spreadsheet.
        // 'sv' => '',
        // The et is ee in the spreadsheet.
        'et' => 'Kohalikud lehed',
        // The cs is cz in the spreadsheet.
        'cs' => 'Lokální stránka',
//        'de-DE' => '',
//        'da' => '',
//      'en-in' => '',
//        'fil' => '',
//        'pl' => '',
      ],
    ],
    [
      'menu_name' => 'menu-customer-area',
      'link_title' => 'Customer area',
      'localization_list' => [
        'en' => 'Customer area',
        'nn' => 'Kundeområde',
      ],
    ],
  ];
}
