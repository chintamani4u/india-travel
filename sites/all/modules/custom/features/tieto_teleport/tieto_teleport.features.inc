<?php
/**
 * @file
 * tieto_teleport.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_teleport_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "metatag" && $api == "metatag") {
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
function tieto_teleport_node_info() {
  $items = array(
    'tieto_teleport' => array(
      'name' => t('Teleport content page (in addition to the master page content)'),
      'base' => 'node_content',
      'description' => t('Use for choosing existing content (master) and to publish it in multiple web sections. Edit and complete the teleport content page to the chosen context + target audience. Updates: the master version rules. The master is preferred by search engines. '),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
