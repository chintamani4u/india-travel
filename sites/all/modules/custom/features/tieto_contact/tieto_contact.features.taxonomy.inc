<?php
/**
 * @file
 * tieto_contact.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_contact_taxonomy_default_vocabularies() {
  return array(
    'domains' => array(
      'name' => 'Services',
      'machine_name' => 'domains',
      'description' => 'Tieto.com Domains',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -8,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'product_development' => array(
      'name' => 'Product development',
      'machine_name' => 'product_development',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'technologies' => array(
      'name' => 'Technologies',
      'machine_name' => 'technologies',
      'description' => 'Tieto.com Technologies',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
