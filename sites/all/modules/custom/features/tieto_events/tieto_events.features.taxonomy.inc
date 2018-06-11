<?php
/**
 * @file
 * tieto_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_events_taxonomy_default_vocabularies() {
  return array(
    'tieto_event_types' => array(
      'name' => 'Event Types',
      'machine_name' => 'tieto_event_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
