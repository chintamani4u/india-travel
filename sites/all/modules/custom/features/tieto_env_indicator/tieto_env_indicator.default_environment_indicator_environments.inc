<?php
/**
 * @file
 * tieto_env_indicator.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function tieto_env_indicator_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local_dev';
  $environment->name = 'Local Dev';
  $environment->regexurl = '.*\\.tietolocal\\.dev';
  $environment->settings = array(
    'color' => '#26b913',
    'weight' => '1',
    'position' => 'top',
    'fixed' => 0,
    'text_color' => '#ffffff',
  );
  $export['local_dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'tieto_dev';
  $environment->name = 'Tieto Dev';
  $environment->regexurl = '.*\\.tietodev\\.tieto.com';
  $environment->settings = array(
    'color' => '#FF9933',
    'weight' => '2',
    'position' => 'top',
    'fixed' => 0,
    'text_color' => '#ffffff',
  );
  $export['tieto_dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'tieto_prod';
  $environment->name = 'Tieto Prod';
  $environment->regexurl = '.*tieto\\.(com|cn|cz|ee|fi|de|in|lv|lt|nl|no|pl|ru|se|at)';
  $environment->settings = array(
    'color' => '#000000',
    'weight' => '4',
    'position' => 'top',
    'fixed' => 0,
    'text_color' => '#ffffff',
  );
  $export['tieto_prod'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'tieto_stage';
  $environment->name = 'Tieto stage';
  $environment->regexurl = '.*\\.tietostage\\.tieto.com';
  $environment->settings = array(
    'color' => '#E62859',
    'weight' => '3',
    'position' => 'top',
    'fixed' => 0,
    'text_color' => '#ffffff',
  );
  $export['tieto_stage'] = $environment;

  return $export;
}
