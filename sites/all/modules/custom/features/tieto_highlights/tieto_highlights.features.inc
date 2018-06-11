<?php
/**
 * @file
 * tieto_highlights.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_highlights_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_highlights_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tieto_highlights_image_default_styles() {
  $styles = array();

  // Exported image style: carousel_content.
  $styles['carousel_content'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 190,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'carousel_content',
  );

  // Exported image style: highlight_small.
  $styles['highlight_small'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 80,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'highlight_small',
  );

  return $styles;
}
