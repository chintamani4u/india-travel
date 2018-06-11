<?php
/**
 * @file
 * tieto_teleport.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function tieto_teleport_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:tieto_teleport.
  $config['node:tieto_teleport'] = array(
    'instance' => 'node:tieto_teleport',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[node:field-teleported-content:url:absolute]',
      ),
    ),
  );

  return $config;
}
