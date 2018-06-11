<?php
/**
 * @file
 * scald_fb_channel.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function scald_fb_channel_field_default_fields() {
  $fields = array();

  $fields['fieldable_panels_pane-fb_channel-field_fb_reference'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_fb_reference',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'sid' => array(
          0 => 'sid',
        ),
      ),
      'locked' => '0',
      'module' => 'atom_reference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'atom_reference',
    ),
    'field_instance' => array(
      'bundle' => 'fb_channel',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'atom_reference',
          'settings' => array(),
          'type' => 'fb_channel',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_fb_reference',
      'label' => 'Facebook Reference',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'referencable_types' => array(
          'customtext' => 0,
          'file' => 0,
          'image' => 0,
          'fb_channel' => 'fb_channel',
          'twitter' => 0,
          'video' => 0,
          'webpage' => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'atom_reference_textfield',
        'weight' => '41',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook Reference');

  return $fields;
}
