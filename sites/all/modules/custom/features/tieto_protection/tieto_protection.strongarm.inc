<?php
/**
 * @file
 * tieto_protection.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_protection_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_allow_cli';
  $strongarm->value = 1;
  $export['shield_allow_cli'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_pass';
  $strongarm->value = 'secure';
  $export['shield_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_print';
  $strongarm->value = 'Request passwords from: tieto.drupal@tieto.com';
  $export['shield_print'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_user';
  $strongarm->value = 'shield';
  $export['shield_user'] = $strongarm;

  return $export;
}
