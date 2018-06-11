<?php
/**
 * @file
 * tieto_worldwide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_worldwide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
