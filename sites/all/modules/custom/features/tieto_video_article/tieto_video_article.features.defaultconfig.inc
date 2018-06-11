<?php
/**
 * @file
 * tieto_video_article.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tieto_video_article_defaultconfig_features() {
  return array(
    'tieto_video_article' => array(
      'panelizer_defaults' => 'panelizer_defaults',
    ),
  );
}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function tieto_video_article_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}
