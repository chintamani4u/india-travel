<?php
/**
 * @file
 * tieto_video_article.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function tieto_video_article_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'concept_page_video_thumbnails';
  $context_config->transcoder = array(
    'customtext' => array(
      '*' => 'passthrough',
    ),
    'file' => array(
      '*' => 'passthrough',
    ),
    'flash' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'passthrough',
    ),
    'rss_channel' => array(
      '*' => 'passthrough',
    ),
    'slideshow' => array(
      '*' => 'passthrough',
    ),
    'twitter' => array(
      '*' => 'passthrough',
    ),
    'twitter_channel' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'style-medium',
    ),
    'webpage' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'customtext' => array(
      '*' => 'default',
    ),
    'file' => array(
      '*' => 'default',
    ),
    'flash' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'default',
    ),
    'rss_channel' => array(
      '*' => 'default',
    ),
    'slideshow' => array(
      '*' => 'default',
    ),
    'twitter' => array(
      '*' => 'default',
    ),
    'twitter_channel' => array(
      '*' => 'default',
    ),
    'video' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'webpage' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = '';
  $export['concept_page_video_thumbnails'] = $context_config;

  return $export;
}
