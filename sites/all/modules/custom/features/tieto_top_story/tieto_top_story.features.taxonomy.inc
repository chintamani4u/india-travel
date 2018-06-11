<?php
/**
 * @file
 * tieto_top_story.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_top_story_taxonomy_default_vocabularies() {
  return array(
    'tieto_concept_pages_phases' => array(
      'name' => 'Tieto concept pages phases',
      'machine_name' => 'tieto_concept_pages_phases',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
