<?php
/**
 * @file
 * tieto_full_content_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_full_content_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function tieto_full_content_page_node_info() {
  $items = array(
    'tieto_full_content_page' => array(
      'name' => t('Tieto full content page'),
      'base' => 'node_content',
      'description' => t('This page only has one big field which will be use full for html content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
