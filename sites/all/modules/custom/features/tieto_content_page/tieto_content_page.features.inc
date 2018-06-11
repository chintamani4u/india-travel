<?php
/**
 * @file
 * tieto_content_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_content_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_content_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_content_page_node_info() {
  $items = array(
    'tieto_content_page' => array(
      'name' => t('Basic content page'),
      'base' => 'node_content',
      'description' => t('Use for all content / create a content page, (excluding...xxx)'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
