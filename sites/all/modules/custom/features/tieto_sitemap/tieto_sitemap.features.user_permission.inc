<?php
/**
 * @file
 * tieto_sitemap.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_sitemap_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'xmlsitemap',
  );

  return $permissions;
}
