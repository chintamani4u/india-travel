<?php
/**
 * @file
 * tieto_basefields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_basefields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "metatag" && $api == "metatag") {
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
function tieto_basefields_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
