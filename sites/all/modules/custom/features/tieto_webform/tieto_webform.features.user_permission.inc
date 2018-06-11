<?php
/**
 * @file
 * tieto_webform.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_webform_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'captcha',
  );

  return $permissions;
}
