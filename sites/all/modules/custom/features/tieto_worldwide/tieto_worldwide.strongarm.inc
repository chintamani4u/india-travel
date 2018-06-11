<?php
/**
 * @file
 * tieto_worldwide.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_worldwide_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_account';
  $strongarm->value = 'UA-46059866-1';
  $export['googleanalytics_account'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_codesnippet_after';
  $strongarm->value = 'ga(\'create\', \'UA-7407225-28\', \'auto\', {\'name\': \'t2\'});
ga(\'t2.send\', \'pageview\');
ga(\'create\', \'UA-7407225-3\', \'auto\', {\'name\': \'t3\'});
ga(\'t3.send\', \'pageview\');';
  $export['googleanalytics_codesnippet_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_negotiation_url_part';
  $strongarm->value = '1';
  $export['locale_language_negotiation_url_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_menu_order';
  $strongarm->value = array(
    'main-menu' => '',
    'menu-finland' => '',
    'menu-austria' => '',
    'menu-china' => '',
    'menu-czech' => '',
    'menu-denmark' => '',
    'menu-estonia' => '',
    'menu-germany' => '',
    'menu-india' => '',
    'menu-italy' => '',
    'menu-latvia' => '',
    'menu-lithuania' => '',
    'menu-malaysia' => '',
    'menu-metherlands' => '',
    'menu-norway' => '',
    'menu-philippines' => '',
    'menu-poland' => '',
    'menu-russia' => '',
    'menu-spain' => '',
    'menu-sweden' => '',
    'menu-uk' => '',
    'menu-usa' => '',
  );
  $export['menu_block_menu_order'] = $strongarm;

  return $export;
}
