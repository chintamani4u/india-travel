<?php
/**
 * @file
 * tieto_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_hugin_categories'.
  $permissions['create field_hugin_categories'] = array(
    'name' => 'create field_hugin_categories',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_hugin_id'.
  $permissions['create field_hugin_id'] = array(
    'name' => 'create field_hugin_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_nasdaq_id'.
  $permissions['create field_nasdaq_id'] = array(
    'name' => 'create field_nasdaq_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_hugin_categories'.
  $permissions['edit field_hugin_categories'] = array(
    'name' => 'edit field_hugin_categories',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_hugin_id'.
  $permissions['edit field_hugin_id'] = array(
    'name' => 'edit field_hugin_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_nasdaq_id'.
  $permissions['edit field_nasdaq_id'] = array(
    'name' => 'edit field_nasdaq_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_hugin_categories'.
  $permissions['edit own field_hugin_categories'] = array(
    'name' => 'edit own field_hugin_categories',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_hugin_id'.
  $permissions['edit own field_hugin_id'] = array(
    'name' => 'edit own field_hugin_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_nasdaq_id'.
  $permissions['edit own field_nasdaq_id'] = array(
    'name' => 'edit own field_nasdaq_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_hugin_categories'.
  $permissions['view field_hugin_categories'] = array(
    'name' => 'view field_hugin_categories',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_hugin_id'.
  $permissions['view field_hugin_id'] = array(
    'name' => 'view field_hugin_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_nasdaq_id'.
  $permissions['view field_nasdaq_id'] = array(
    'name' => 'view field_nasdaq_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_hugin_categories'.
  $permissions['view own field_hugin_categories'] = array(
    'name' => 'view own field_hugin_categories',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_hugin_id'.
  $permissions['view own field_hugin_id'] = array(
    'name' => 'view own field_hugin_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_nasdaq_id'.
  $permissions['view own field_nasdaq_id'] = array(
    'name' => 'view own field_nasdaq_id',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
