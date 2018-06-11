<?php

/**
 * @file
 * Script for changing the menu links.
 *
 * @see: TIET-42
 */

include_once __DIR__ . '/refactor-helper/autoload.php';

/*
 * Use in devel as:
 *
    include_once DRUPAL_ROOT . '/tools/menu-links-refactor.php';
    refactor();
 */

/**
 * Main function to do the refactor with.
 */
function refactor() {
  // If not installed and enabled..
  if (!module_exists('tieto_offcanvas_menu')) {
    echo('Off-canvas module was not enabled for some reason. Aborting.' . "\n");
    return;
  }

  echo('Off-canvas module already enabled.' . "\n");

//  international_menu();

  foreach (get_menu_names() as $menuName) {
//    // The international_menu() does this, even though it's not as pretty.
//    if ($menuName === 'main-menu') {
//      continue;
//    }

    refactor_menu($menuName);
  }

  // Global stuff.
  fix_country_switcher_menu();
  disable_key_topics_social_icons_block();
  fix_customer_area_menu_link_capitalization();

  foreach (get_menu_names() as $menu) {
    menu_cache_clear($menu);
  }
}
