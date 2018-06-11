<?php
/**
 * @file
 * tieto_new_concept_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_new_concept_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_new_concept_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_new_concept_page_node_info() {
  $items = array(
    'career_cases' => array(
      'name' => t('Concept Cases'),
      'base' => 'node_content',
      'description' => t('Concept Cases'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'careers_highlight' => array(
      'name' => t('Concept Highlight'),
      'base' => 'node_content',
      'description' => t('Concept Highlight'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'careers_team' => array(
      'name' => t('Concept Team'),
      'base' => 'node_content',
      'description' => t('Concept Team'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'concept_page' => array(
      'name' => t('Concept page'),
      'base' => 'node_content',
      'description' => t('Concept Page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
