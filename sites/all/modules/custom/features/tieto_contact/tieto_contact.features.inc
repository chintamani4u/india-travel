<?php
/**
 * @file
 * tieto_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_contact_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tieto_contact_image_default_styles() {
  $styles = array();

  // Exported image style: contact_thumbnail.
  $styles['contact_thumbnail'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 79,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 61,
          'height' => 79,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'contact_thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tieto_contact_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
    'tieto_contact_form' => array(
      'name' => t('Tieto Contact Form'),
      'base' => 'node_content',
      'description' => t('Create contact forms that can be attached to contacts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('You need to add an email component to this form with key \'tieto_contact_email\' which value is replaced with contact\'s email address(es) upon submission.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
