<?php
/**
 * @file
 * tieto_materialbank.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tieto_materialbank_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'slideshare_asset';
  $feeds_importer->config = array(
    'name' => 'slideshare asset',
    'description' => 'Create a node of Slideshare items',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSlideshareParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsScaldProcessor',
      'config' => array(
        'content_type' => 'slideshow',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'slide_id',
            'target' => 'base_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'thumbnail',
            'target' => 'scald_thumbnail',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'tags',
            'target' => 'scald_tags',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'slide_id',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '10800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['slideshare_asset'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'youtube';
  $feeds_importer->config = array(
    'name' => 'Youtube',
    'description' => 'Create an Scald Atoms  from feed source',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsYoutubeParser',
      'config' => array(
        'authenticated_on_channel' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsScaldProcessor',
      'config' => array(
        'content_type' => 'video',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'thumbnail',
            'target' => 'scald_thumbnail',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'video_id',
            'target' => 'base_id',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'tags',
            'target' => 'scald_tags',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['youtube'] = $feeds_importer;

  return $export;
}
