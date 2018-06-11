<?php
/**
 * @file
 * tieto_top_story.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function tieto_top_story_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'list_of_filters';
  $item->label = 'List of filters (node)';
  $item->settings = array(
    'items' => array(
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '-50',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['list_of_filters'] = $item;

  return $export;
}
