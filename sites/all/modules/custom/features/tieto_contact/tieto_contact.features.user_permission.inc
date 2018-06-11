<?php
/**
 * @file
 * tieto_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_contact_type'.
  $permissions['create field_contact_type'] = array(
    'name' => 'create field_contact_type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_type'.
  $permissions['edit field_contact_type'] = array(
    'name' => 'edit field_contact_type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_type'.
  $permissions['edit own field_contact_type'] = array(
    'name' => 'edit own field_contact_type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'view field_contact_type'.
  $permissions['view field_contact_type'] = array(
    'name' => 'view field_contact_type',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_type'.
  $permissions['view own field_contact_type'] = array(
    'name' => 'view own field_contact_type',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
