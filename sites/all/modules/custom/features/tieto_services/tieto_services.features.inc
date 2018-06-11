<?php
/**
 * @file
 * tieto_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_services_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tieto_services_node_info() {
  $items = array(
    'tieto_service_group_page' => array(
      'name' => t('Service/product group page'),
      'base' => 'node_content',
      'description' => t('Choose this when you offer readers a view to a single product or service content under service/product group level (shown in the left navigation, the last level).'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
    'tieto_service_page' => array(
      'name' => t('Service/product page'),
      'base' => 'node_content',
      'description' => t('Choose this when you offer readers a view to service or product group content under segment level (shown in the left navigation).'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
