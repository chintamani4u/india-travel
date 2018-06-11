<?php
/**
 * @file
 * tieto_customer_area.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tieto_customer_area_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-customer-area.
  $menus['menu-customer-area'] = array(
    'menu_name' => 'menu-customer-area',
    'title' => 'Customer portal',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Customer portal');

  return $menus;
}
