<?php
/**
 * @file
 * tieto_sitemap.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tieto_sitemap_defaultconfig_features() {
  return array(
    'tieto_sitemap' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function tieto_sitemap_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_regenerate_needed';
  $strongarm->value = TRUE;
  $export['xmlsitemap_regenerate_needed'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function tieto_sitemap_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer xmlsitemap.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'xmlsitemap',
  );

  return $permissions;
}
