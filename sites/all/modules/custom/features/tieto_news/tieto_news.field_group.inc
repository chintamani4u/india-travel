<?php
/**
 * @file
 * tieto_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|tieto_news_context|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_news_context';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '15',
    'children' => array(
      0 => 'field_industry',
      1 => 'field_concepts',
      2 => 'field_services',
      3 => 'field_technologies',
      4 => 'field_product_development',
      5 => 'field_concept_sections',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-taxonomy field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|tieto_news_context|form'] = $field_group;

  return $export;
}
