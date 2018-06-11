<?php
/**
 * @file
 * tieto_key_topics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_key_topics_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function tieto_key_topics_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_key_topics_node_info() {
  $items = array(
    'key_topics' => array(
      'name' => t('Key topics'),
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
