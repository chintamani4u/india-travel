<?php
/**
 * @file
 * scald_twitter_channel.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function scald_twitter_channel_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_twitter_reference'
  $field_bases['field_twitter_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_twitter_reference',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  return $field_bases;
}
