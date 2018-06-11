<?php
/**
 * @file
 * scald_rss_channel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function scald_rss_channel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-rss_channel-field_rss_reference'
  $field_instances['fieldable_panels_pane-rss_channel-field_rss_reference'] = array(
    'bundle' => 'rss_channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(),
        'type' => 'rss_channel',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_rss_reference',
    'label' => 'Rss Reference',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referencable_types' => array(
        'customtext' => 0,
        'file' => 0,
        'image' => 0,
        'rss_channel' => 'rss_channel',
        'twitter' => 0,
        'video' => 0,
        'webpage' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Rss Reference');

  return $field_instances;
}
