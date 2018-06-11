<?php
/**
 * @file
 * tieto_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tieto_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: carousel_main.
  $styles['carousel_main'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1920,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'carousel_main',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tieto_carousel_node_info() {
  $items = array(
    'tieto_carousel_content' => array(
      'name' => t('Highlight'),
      'base' => 'node_content',
      'description' => t('Use this for all highlights. To create a front page carousel – use “promote to main carousel” to show the highlight on the front page in question.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
