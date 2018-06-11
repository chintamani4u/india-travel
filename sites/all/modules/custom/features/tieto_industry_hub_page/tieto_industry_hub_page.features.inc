<?php
/**
 * @file
 * tieto_industry_hub_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_industry_hub_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function tieto_industry_hub_page_node_info() {
  $items = array(
    'industry_hub_page' => array(
      'name' => t('Industry hub page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
