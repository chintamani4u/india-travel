<?php
/**
 * @file
 * tieto_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
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
function tieto_frontpage_node_info() {
  $items = array(
    'tieto_frontpage' => array(
      'name' => t('Frontpage'),
      'base' => 'node_content',
      'description' => t('Front page of the website in question.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
