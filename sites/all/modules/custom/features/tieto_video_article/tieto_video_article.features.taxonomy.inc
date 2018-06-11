<?php
/**
 * @file
 * tieto_video_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tieto_video_article_taxonomy_default_vocabularies() {
  return array(
    'tieto_concepts' => array(
      'name' => 'Key topics',
      'machine_name' => 'tieto_concepts',
      'description' => 'Tieto.com Key topics',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
