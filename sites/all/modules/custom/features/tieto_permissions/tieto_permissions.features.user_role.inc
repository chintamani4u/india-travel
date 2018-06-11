<?php
/**
 * @file
 * tieto_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tieto_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Addresses editor.
  $roles['Addresses editor'] = array(
    'name' => 'Addresses editor',
    'weight' => 8,
  );

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 3,
  );

  // Exported role: CIR editors.
  $roles['CIR editors'] = array(
    'name' => 'CIR editors',
    'weight' => 9,
  );

  // Exported role: Careers editor.
  $roles['Careers editor'] = array(
    'name' => 'Careers editor',
    'weight' => 6,
  );

  // Exported role: Country editor.
  $roles['Country editor'] = array(
    'name' => 'Country editor',
    'weight' => 5,
  );

  // Exported role: Editor in chief.
  $roles['Editor in chief'] = array(
    'name' => 'Editor in chief',
    'weight' => 4,
  );

  // Exported role: Sysop.
  $roles['Sysop'] = array(
    'name' => 'Sysop',
    'weight' => 2,
  );

  // Exported role: Topic editor.
  $roles['Topic editor'] = array(
    'name' => 'Topic editor',
    'weight' => 7,
  );

  return $roles;
}
