<?php
/**
 * @file
 * tieto_materialbank.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_materialbank_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site|scald_atom|file|form';
  $field_group->group_name = 'group_site';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'file';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site',
    'weight' => '7',
    'children' => array(
      0 => 'field_site',
      1 => 'field_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Site',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_site|scald_atom|file|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site|scald_atom|image|form';
  $field_group->group_name = 'group_site';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site',
    'weight' => '10',
    'children' => array(
      0 => 'field_site',
      1 => 'field_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Site',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_site|scald_atom|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site|scald_atom|webpage|form';
  $field_group->group_name = 'group_site';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'webpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site',
    'weight' => '8',
    'children' => array(
      0 => 'field_site',
      1 => 'field_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Site',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_site|scald_atom|webpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|scald_atom|file|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'file';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '8',
    'children' => array(
      0 => 'field_industry',
      1 => 'field_material_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_taxonomy|scald_atom|file|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|scald_atom|image|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '11',
    'children' => array(
      0 => 'field_material_type',
      1 => 'field_industry',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_taxonomy|scald_atom|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|scald_atom|webpage|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'webpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '9',
    'children' => array(
      0 => 'field_material_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_taxonomy|scald_atom|webpage|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site');
  t('Taxonomy');

  return $field_groups;
}
