<?php
/**
 * @file
 * tieto_addresses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_addresses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_addresses_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_addresses_node_info() {
  $items = array(
    'tieto_addresses' => array(
      'name' => t('Address'),
      'base' => 'node_content',
      'description' => t('Address pages + all updates are centrally handled by Addresses content owner. The page is shown in the addresses section with a map. One page = one address.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
    'tieto_map' => array(
      'name' => t('Tieto Map'),
      'base' => 'node_content',
      'description' => t('Add page for country map frontpages'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
