<?php
/**
 * @file
 * tieto_env_indicator.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_env_indicator_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
}
