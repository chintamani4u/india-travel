<?php
/**
 * @file
 * tieto_video_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_video_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_side_element|node|video_article|form';
  $field_group->group_name = 'group_side_element';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Side elements',
    'weight' => '18',
    'children' => array(
      0 => 'field_side_elements',
      1 => 'field_news_type',
      2 => 'field_event_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-side-element field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_side_element|node|video_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|video_article|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '6',
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
  $field_groups['group_taxonomy|node|video_article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Side elements');
  t('Taxonomy');

  return $field_groups;
}
