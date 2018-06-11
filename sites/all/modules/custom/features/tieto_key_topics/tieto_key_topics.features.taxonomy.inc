<?php
/**
 * @file
 * tieto_key_topics.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_key_topics_taxonomy_default_vocabularies() {
  return array(
    'key_topics_sections' => array(
      'name' => 'Key topics sections',
      'machine_name' => 'key_topics_sections',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
