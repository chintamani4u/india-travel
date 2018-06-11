<?php
/**
 * @file
 * tieto_env_indicator.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_env_indicator_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator local_dev'.
  $permissions['access environment indicator local_dev'] = array(
    'name' => 'access environment indicator local_dev',
    'roles' => array(
      'Sysop' => 'Sysop',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator tieto_dev'.
  $permissions['access environment indicator tieto_dev'] = array(
    'name' => 'access environment indicator tieto_dev',
    'roles' => array(
      'Sysop' => 'Sysop',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator tieto_prod'.
  $permissions['access environment indicator tieto_prod'] = array(
    'name' => 'access environment indicator tieto_prod',
    'roles' => array(
      'Sysop' => 'Sysop',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator tieto_stage'.
  $permissions['access environment indicator tieto_stage'] = array(
    'name' => 'access environment indicator tieto_stage',
    'roles' => array(
      'Sysop' => 'Sysop',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'environment_indicator',
  );

  return $permissions;
}
