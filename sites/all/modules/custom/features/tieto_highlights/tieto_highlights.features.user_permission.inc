<?php
/**
 * @file
 * tieto_highlights.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_highlights_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access linked field list'.
  $permissions['access linked field list'] = array(
    'name' => 'access linked field list',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linked_field',
  );

  return $permissions;
}
