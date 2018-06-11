<?php
/**
 * @file
 * tieto_times.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_times_taxonomy_default_vocabularies() {
  return array(
    'magazine' => array(
      'name' => 'Magazines',
      'machine_name' => 'magazine',
      'description' => 'Magazines',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 4,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
