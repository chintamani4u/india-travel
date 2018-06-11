<?php
/**
 * @file
 * tieto_protected_downloads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_protected_downloads_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tieto_protected_downloads_node_info() {
  $items = array(
    'tieto_protected_downloads' => array(
      'name' => t('Protected download'),
      'base' => 'node_content',
      'description' => t('Create a protected download and collect information about those readers who want to download the material. Notice, there is a separate field for free downloads.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
