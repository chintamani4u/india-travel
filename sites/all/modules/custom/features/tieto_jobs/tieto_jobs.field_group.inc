<?php
/**
 * @file
 * tieto_jobs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_jobs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jobs_contacts|node|tieto_jobs_vacancy|default';
  $field_group->group_name = 'group_jobs_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_jobs_vacancy';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_jobs_description';
  $field_group->data = array(
    'label' => 'Contact for this job',
    'weight' => '7',
    'children' => array(
      0 => 'field_jobs_contact_information',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact for this job',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_tieto_jobs_vacancy_full_group_jobs_contacts',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_jobs_contacts|node|tieto_jobs_vacancy|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jobs_description|node|tieto_jobs_vacancy|default';
  $field_group->group_name = 'group_jobs_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_jobs_vacancy';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Description',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'group_jobs_contacts',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Job Description',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_tieto_jobs_vacancy_full_group_jobs_description',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_jobs_description|node|tieto_jobs_vacancy|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact for this job');
  t('Job Description');

  return $field_groups;
}
