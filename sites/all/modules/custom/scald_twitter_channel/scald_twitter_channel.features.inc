<?php
/**
 * @file
 * scald_twitter_channel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scald_twitter_channel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}
