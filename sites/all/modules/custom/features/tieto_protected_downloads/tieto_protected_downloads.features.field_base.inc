<?php
/**
 * @file
 * tieto_protected_downloads.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tieto_protected_downloads_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_protected_download'.
  $field_bases['field_protected_download'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_protected_download',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'private',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
