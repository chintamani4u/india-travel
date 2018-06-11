<?php
/**
 * @file
 * tieto_sitemap.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tieto_sitemap_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: defaultconfig
  $overrides["defaultconfig.tieto_sitemap.strongarm"]["DELETED"] = TRUE;
  $overrides["defaultconfig.tieto_sitemap.tieto_sitemap"] = 'tieto_sitemap';

 return $overrides;
}
