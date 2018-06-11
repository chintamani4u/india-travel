<?php
/**
 * @file
 * tieto_teleport.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tieto_teleport_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_teleported_content'.
  $field_bases['field_teleported_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_teleported_content',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'tieto_content_page' => 'tieto_content_page',
          'tieto_landing_page' => 'tieto_landing_page',
          'tieto_service_group_page' => 'tieto_service_group_page',
          'tieto_service_page' => 'tieto_service_page',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
