<?php
/**
 * @file
 * tieto_materialbank.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_materialbank_taxonomy_default_vocabularies() {
  return array(
    'language' => array(
      'name' => 'Language',
      'machine_name' => 'language',
      'description' => 'Language for Material bank filtering.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 6,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'material_types' => array(
      'name' => 'Material Types',
      'machine_name' => 'material_types',
      'description' => 'Document Bank material types for Investors and Press',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
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
    'sites' => array(
      'name' => 'Sites',
      'machine_name' => 'sites',
      'description' => 'Domain names. We use these to filter Material bank.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 8,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
