<?php
/**
 * @file
 * panopoly_widgets.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function panopoly_widgets_defaultconfig_features() {
  return array(
    'panopoly_widgets' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function panopoly_widgets_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
