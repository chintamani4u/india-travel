<?php
/**
 * @file
 * tieto_top_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_top_story_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function tieto_top_story_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_top_story_node_info() {
  $items = array(
    'tieto_customer_reference_case' => array(
      'name' => t('Customer Reference case'),
      'base' => 'node_content',
      'description' => t('Create a page for Customer Reference case content (repositories) – a short web article, interview, statement, etc.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
    'tieto_top_story' => array(
      'name' => t('Customer Cases'),
      'base' => 'node_content',
      'description' => t('Tieto Top Story the old name.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
