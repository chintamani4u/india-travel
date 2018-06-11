<?php
/**
 * @file
 * tieto_materialbank.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tieto_materialbank_defaultconfig_features() {
  return array(
    'tieto_materialbank' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function tieto_materialbank_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_consumer_key';
  $strongarm->value = '7uN6ntkDx11FjGgo9uvhRg';
  $export['twitter_pull_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_consumer_secret';
  $strongarm->value = 'zj9iCtyTwmgP9pVzS4yt1msEyHDQut2TjvY9fokKuc';
  $export['twitter_pull_consumer_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_oauth_access_token';
  $strongarm->value = '102074011-E05eCyTMKSoG12bVHtdXuk77XVIZj8QKbNvbfjSJ';
  $export['twitter_pull_oauth_access_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_oauth_access_token_secret';
  $strongarm->value = 'NxyV2z4jLaPa5pwoFpToAvXtECgwYT89jBtiLHkxBY';
  $export['twitter_pull_oauth_access_token_secret'] = $strongarm;

  return $export;
}
