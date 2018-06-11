<?php
/**
 * @file
 * tieto_customer_area.features.uuid_menu_links.inc
 */

/**
 * Implements hook_uuid_menu_default_menu_links().
 */
function tieto_customer_area_uuid_menu_default_menu_links() {
  $uuid_menu_links = array();

  // Exported menu link: menu-customer-area:node/e55b2024-cf0d-4a05-b8eb-3088005ae1ab
  $uuid_menu_links['menu-customer-area:node/e55b2024-cf0d-4a05-b8eb-3088005ae1ab'] = array(
    'router_path' => 'node/%',
    'link_title' => 'customer area',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'uuid_link_path' => 'node/e55b2024-cf0d-4a05-b8eb-3088005ae1ab',
    'uuid_menu_name' => 'menu-customer-area',
    'uuid_parent_path' => NULL,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('customer area');


  return $uuid_menu_links;
}
