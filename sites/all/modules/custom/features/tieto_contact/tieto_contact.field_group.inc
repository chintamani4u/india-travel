<?php
/**
 * @file
 * tieto_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_contact_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|contact|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SEO',
    'weight' => '2',
    'children' => array(
      0 => 'field_meta_title',
      1 => 'field_meta_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_references|node|contact|form';
  $field_group->group_name = 'group_page_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content page references',
    'weight' => '16',
    'children' => array(
      0 => 'field_content_page_reference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content page references',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_page_references|node|contact|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content page references');
  t('SEO');

  return $field_groups;
}
