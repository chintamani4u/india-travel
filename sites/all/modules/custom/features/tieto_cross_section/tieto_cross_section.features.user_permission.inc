<?php
/**
 * @file
 * tieto_cross_section.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_cross_section_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any tieto_cross_section content'.
  $permissions['delete any tieto_cross_section content'] = array(
    'name' => 'delete any tieto_cross_section content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_cross_section content'.
  $permissions['delete own tieto_cross_section content'] = array(
    'name' => 'delete own tieto_cross_section content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_cross_section content'.
  $permissions['edit any tieto_cross_section content'] = array(
    'name' => 'edit any tieto_cross_section content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  return $permissions;
}
