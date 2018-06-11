<?php
/**
 * @file
 * tieto_highlights.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tieto_highlights_defaultconfig_features() {
  return array(
    'tieto_highlights' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function tieto_highlights_defaultconfig_user_default_permissions() {
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
