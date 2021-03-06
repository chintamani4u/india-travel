<?php
/**
 * @file
 * tieto_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
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
function tieto_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_events_node_info() {
  $items = array(
    'tieto_event' => array(
      'name' => t('Event page'),
      'base' => 'node_content',
      'description' => t('Use this page to publish event information in Tieto calendar.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
