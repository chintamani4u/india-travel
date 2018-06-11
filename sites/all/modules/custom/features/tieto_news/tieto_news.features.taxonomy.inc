<?php
/**
 * @file
 * tieto_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_news_taxonomy_default_vocabularies() {
  return array(
    'industry' => array(
      'name' => 'Industries',
      'machine_name' => 'industry',
      'description' => 'Tieto.com industries',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -6,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'tieto_hugin' => array(
      'name' => 'Tieto Hugin',
      'machine_name' => 'tieto_hugin',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 9,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'tieto_news_types' => array(
      'name' => 'News Types',
      'machine_name' => 'tieto_news_types',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 7,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
