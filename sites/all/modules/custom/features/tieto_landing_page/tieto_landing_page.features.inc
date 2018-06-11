<?php
/**
 * @file
 * tieto_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_node_info().
 */
function tieto_landing_page_node_info() {
  $items = array(
    'tieto_landing_page' => array(
      'name' => t('Segment level page (landing page)'),
      'base' => 'node_content',
      'description' => t('Use segment level page for the following sections
                        - Investors, Press, Careers, About us (top navigation)
                        - Customer segment (under industry)
                        - Services, Technologies, Tieto Concepts segments'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
