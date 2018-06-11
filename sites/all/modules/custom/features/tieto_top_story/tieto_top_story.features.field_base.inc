<?php
/**
 * @file
 * tieto_top_story.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tieto_top_story_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tile_label'
  $field_bases['field_tile_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tile_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'News ' => ' News',
        'Top story ' => ' Top story',
        'Insight ' => ' Insight',
        'Video ' => ' Video',
        'Blog ' => ' Blog',
        'Paper ' => ' Paper',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  return $field_bases;
}
