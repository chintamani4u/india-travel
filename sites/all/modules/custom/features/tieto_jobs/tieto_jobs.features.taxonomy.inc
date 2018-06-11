<?php
/**
 * @file
 * tieto_jobs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_jobs_taxonomy_default_vocabularies() {
  return array(
    'jobs_source' => array(
      'name' => 'Jobs Source',
      'machine_name' => 'jobs_source',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'tieto_jobs_jobarea' => array(
      'name' => 'Job Areas',
      'machine_name' => 'tieto_jobs_jobarea',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'tieto_jobs_locations' => array(
      'name' => 'Job Locations',
      'machine_name' => 'tieto_jobs_locations',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 2,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'tieto_jobs_tags' => array(
      'name' => 'Job Tags',
      'machine_name' => 'tieto_jobs_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 3,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
