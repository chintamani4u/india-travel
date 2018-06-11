<?php

/**
 * @file
 * International menu bootstrap.
 */

include_once __DIR__ . '/international-maps.inc';
include_once __DIR__ . '/international-functions.inc';

function international_menu() {
  $megamenuMlid = international_create_or_get_what_we_do_menu_link();

  if (NULL === $megamenuMlid || 0 === $megamenuMlid) {
    echo('What we do could not be found, mlid is empty.');
    return;
  }

  clear_megamenu_of_other_items($megamenuMlid);
  international_process_new_menu($megamenuMlid, 'industries', international_get_map_for_existing()['industries']);
  international_process_new_menu($megamenuMlid, 'services', international_get_map_for_existing()['services']);
  international_create_focus_areas($megamenuMlid);

  enable_offcanvas_for_menu();
  international_add_menus_to_off_canvas(international_get_offcanvas_menu_map());

  international_rename_newsroom();

  international_create_additional_menus(international_get_additional_menu_map());

  disable_menus(international_get_disable_menu_map());

  international_fix_menu_links(international_get_menu_link_weights());
  international_fix_focus_areas_submenu_items(international_get_focus_areas_submenu_link_map());
  international_fix_what_we_do_items(international_get_what_we_do_item_map(), $megamenuMlid);
}
