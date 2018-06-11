<?php
/**
 * @file
 * tieto_workday_jobs.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tieto_workday_jobs_defaultconfig_features() {
  return array(
    'tieto_workday_jobs' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function tieto_workday_jobs_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear workday_com_tieto_jobs feeds'.
  $permissions['clear workday_com_tieto_jobs feeds'] = array(
    'name' => 'clear workday_com_tieto_jobs feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import workday_com_tieto_jobs feeds'.
  $permissions['import workday_com_tieto_jobs feeds'] = array(
    'name' => 'import workday_com_tieto_jobs feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock workday_com_tieto_jobs feeds'.
  $permissions['unlock workday_com_tieto_jobs feeds'] = array(
    'name' => 'unlock workday_com_tieto_jobs feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
