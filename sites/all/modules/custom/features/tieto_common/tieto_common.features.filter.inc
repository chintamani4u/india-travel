<?php
/**
 * @file
 * tieto_common.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function tieto_common_filter_default_formats() {
  $formats = array();

  // Exported format: Raw Input.
  $formats['tieto_sysop_text'] = array(
    'format' => 'tieto_sysop_text',
    'name' => 'Raw Input',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
