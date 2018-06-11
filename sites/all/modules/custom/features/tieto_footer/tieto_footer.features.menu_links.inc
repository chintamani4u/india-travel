<?php
/**
 * @file
 * tieto_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tieto_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-tieto-footer_addresses:addresses
  $menu_links['menu-tieto-footer_addresses:addresses'] = array(
    'menu_name' => 'menu-tieto-footer',
    'link_path' => 'addresses',
    'router_path' => 'addresses',
    'link_title' => 'Addresses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tieto-footer_addresses:addresses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Addresses');


  return $menu_links;
}
