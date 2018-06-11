<?php
/**
 * @file
 * tieto_sitemap.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function tieto_sitemap_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['et'] = array(
  'googleanalytics_account' => 'UA-7407225-7',
  'googleanalytics_codesnippet_after' => '_gaq.push([\'t2._setAccount\', \'UA-7407225-28\']);
_gaq.push([\'t2._setDomainName\', \'tieto.ee\']);
_gaq.push([\'t2._trackPageview\']);',
  'site_403' => '',
  'site_404' => '',
  'site_frontpage' => 'node/239',
  'site_name' => 'tieto.ee',
  'site_slogan' => '',
);

return $realm_variables;
}
