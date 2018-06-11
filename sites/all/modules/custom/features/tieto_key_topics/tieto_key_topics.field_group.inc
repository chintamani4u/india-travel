<?php
/**
 * @file
 * tieto_key_topics.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_key_topics_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_portfolio_text|node|key_topics|form';
  $field_group->group_name = 'group_portfolio_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'key_topics';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_portfolio';
  $field_group->data = array(
    'label' => 'Portfolio text',
    'weight' => '28',
    'children' => array(
      0 => 'field_portfolio_text',
      1 => 'field_portfolio_text_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-portfolio-text field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_portfolio_text|node|key_topics|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_portfolio|node|key_topics|form';
  $field_group->group_name = 'group_portfolio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'key_topics';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Portfolio',
    'weight' => '10',
    'children' => array(
      0 => 'field_offerings',
      1 => 'group_portfolio_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-portfolio field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_portfolio|node|key_topics|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seo|node|key_topics|form';
  $field_group->group_name = 'group_seo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'key_topics';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SEO',
    'weight' => '4',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-seo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_seo|node|key_topics|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|key_topics|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'key_topics';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '9',
    'children' => array(
      0 => 'field_concepts',
      1 => 'field_key_topics_sections',
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
  $field_groups['group_taxonomy|node|key_topics|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_two_column_content|node|key_topics|form';
  $field_group->group_name = 'group_two_column_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'key_topics';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Two column content',
    'weight' => '11',
    'children' => array(
      0 => 'field_left_column',
      1 => 'field_right_column',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-two-column-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_two_column_content|node|key_topics|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Portfolio');
  t('Portfolio text');
  t('SEO');
  t('Taxonomy');
  t('Two column content');

  return $field_groups;
}
