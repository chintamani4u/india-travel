<?php
/**
 * @file
 * tieto_addresses.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_addresses_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|tieto_addresses|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_addresses';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '5',
    'children' => array(
      0 => 'field_office_address',
      1 => 'field_office_address1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-address field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_address|node|tieto_addresses|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');

  return $field_groups;
}
