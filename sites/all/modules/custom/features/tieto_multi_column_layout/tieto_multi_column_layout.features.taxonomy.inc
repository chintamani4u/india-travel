<?php
/**
 * @file
 * tieto_multi_column_layout.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_multi_column_layout_taxonomy_default_vocabularies() {
  return array(
    'layout' => array(
      'name' => 'Key topics layout',
      'machine_name' => 'layout',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
