<?php
/**
 * @file
 * tieto_teleport.metatag.inc
 */

/**
 * Implements hook_metatag_config_default().
 */
function tieto_teleport_metatag_config_default() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->cid = '4';
  $config->instance = 'node:tieto_teleport';
  $config->config = array(
    'canonical' => array(
      'value' => '[node:field-teleported-content:url:absolute]',
    ),
  );
  $export['node:tieto_teleport'] = $config;

  return $export;
}
