<?php
/**
 * @file
 * tieto_cross_section.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tieto_cross_section_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|insights_and_opinions_page|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'insights_and_opinions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '8',
    'children' => array(
      0 => 'field_image_atom',
      1 => 'field_image_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_image|node|insights_and_opinions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|tieto_cross_section|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_cross_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '11',
    'children' => array(
      0 => 'field_image_atom',
      1 => 'field_image_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_image|node|tieto_cross_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|tieto_cross_section|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_cross_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SEO',
    'weight' => '2',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'SEO',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_meta|node|tieto_cross_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seo|node|insights_and_opinions_page|form';
  $field_group->group_name = 'group_seo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'insights_and_opinions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SEO',
    'weight' => '3',
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
  $field_groups['group_seo|node|insights_and_opinions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_side_elements|node|insights_and_opinions_page|form';
  $field_group->group_name = 'group_side_elements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'insights_and_opinions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Side elements',
    'weight' => '12',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_news_type',
      2 => 'field_side_elements',
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
  $field_groups['group_side_elements|node|insights_and_opinions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_side_elements|node|tieto_cross_section|form';
  $field_group->group_name = 'group_side_elements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_cross_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Side elements',
    'weight' => '14',
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
        'classes' => 'group-side-elements field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_side_elements|node|tieto_cross_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|insights_and_opinions_page|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'insights_and_opinions_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '13',
    'children' => array(
      0 => 'field_concepts',
      1 => 'field_industry',
      2 => 'field_product_development',
      3 => 'field_services',
      4 => 'field_technologies',
      5 => 'field_key_topics_sections',
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
  $field_groups['group_taxonomy|node|insights_and_opinions_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|tieto_cross_section|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tieto_cross_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '15',
    'children' => array(
      0 => 'field_concepts',
      1 => 'field_industry',
      2 => 'field_product_development',
      3 => 'field_services',
      4 => 'field_technologies',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_taxonomy|node|tieto_cross_section|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('SEO');
  t('Side elements');
  t('Taxonomy');

  return $field_groups;
}
