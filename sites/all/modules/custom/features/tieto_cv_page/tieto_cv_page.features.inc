<?php
/**
 * @file
 * tieto_cv_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_cv_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function tieto_cv_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function tieto_cv_page_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: board_of_directors
  $nodequeues['board_of_directors'] = array(
    'name' => 'board_of_directors',
    'title' => 'CV\'s: Board of directors',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 1,
    'subqueues' => 1,
    'types' => array(
      0 => 'tieto_cv_page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: cv_leadership_team
  $nodequeues['cv_leadership_team'] = array(
    'name' => 'cv_leadership_team',
    'title' => 'CV\'s: Leadership team',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 1,
    'subqueues' => 1,
    'types' => array(
      0 => 'tieto_cv_page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: proposed_new_members
  $nodequeues['proposed_new_members'] = array(
    'name' => 'proposed_new_members',
    'title' => 'CV\'s: Proposed new members',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'tieto_cv_page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function tieto_cv_page_node_info() {
  $items = array(
    'tieto_cv_page' => array(
      'name' => t('Tieto CV page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
