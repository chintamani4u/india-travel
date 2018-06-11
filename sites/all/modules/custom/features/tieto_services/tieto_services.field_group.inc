<?php
/**
 * @file
 * tieto_services.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_services_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_side_elements|node|tieto_service_group_page|form';
  $field_group->group_name = 'group_side_elements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_service_group_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Side elements',
    'weight' => '15',
    'children' => array(
      0 => 'field_side_elements',
      1 => 'field_event_type',
      2 => 'field_news_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-side-elements field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_side_elements|node|tieto_service_group_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_side_elements|node|tieto_service_page|form';
  $field_group->group_name = 'group_side_elements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_service_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Side elements',
    'weight' => '17',
    'children' => array(
      0 => 'field_side_elements',
      1 => 'field_event_type',
      2 => 'field_news_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-side-elements field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_side_elements|node|tieto_service_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Side elements');

  return $field_groups;
}
