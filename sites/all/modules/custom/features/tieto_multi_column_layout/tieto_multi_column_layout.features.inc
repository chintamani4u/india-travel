<?php
/**
 * @file
 * tieto_multi_column_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_multi_column_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tieto_multi_column_layout_node_info() {
  $items = array(
    'multi_column_content' => array(
      'name' => t('Key topics: Multi column content'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
