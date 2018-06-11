<?php
/**
 * @file
 * tieto_basefields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_basefields_taxonomy_default_vocabularies() {
  return array(
    'concepts' => array(
      'name' => 'Tieto Concepts',
      'machine_name' => 'concepts',
      'description' => 'Tieto.com Concepts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'domains' => array(
      'name' => 'Services',
      'machine_name' => 'domains',
      'description' => 'Tieto.com Domains',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'industry' => array(
      'name' => 'Industries',
      'machine_name' => 'industry',
      'description' => 'Tieto.com industries',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'product_development' => array(
      'name' => 'Product development',
      'machine_name' => 'product_development',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'scald_authors' => array(
      'name' => 'Authors',
      'machine_name' => 'scald_authors',
      'description' => 'Scald authors vocabulary',
      'hierarchy' => 0,
      'module' => 'scald',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'scald_tags' => array(
      'name' => 'Scald tags',
      'machine_name' => 'scald_tags',
      'description' => 'Scald tags vocabulary',
      'hierarchy' => 0,
      'module' => 'scald',
      'weight' => -4,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'technologies' => array(
      'name' => 'Technologies',
      'machine_name' => 'technologies',
      'description' => 'Tieto.com Technologies',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
