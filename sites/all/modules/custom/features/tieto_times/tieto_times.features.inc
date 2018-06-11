<?php
/**
 * @file
 * tieto_times.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_times_ctools_plugin_api($module = NULL, $api = NULL) {
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
function tieto_times_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_times_node_info() {
  $items = array(
    'magazine_article' => array(
      'name' => t('Magazine article'),
      'base' => 'node_content',
      'description' => t('Magazine article to be displayed in Tieto times'),
      'has_title' => '1',
      'title_label' => t('Article title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
