<?php
/**
 * @file
 * tieto_materialbank.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_materialbank_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_atom_defaults';
  $strongarm->value = array(
    'webpage' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => 'Url',
      'actions' => 15,
      'upload_type' => 'managed_file',
    ),
    'image' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => 'Image',
      'actions' => 15,
      'upload_type' => 'managed_file',
    ),
    'file' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => 'File',
      'actions' => 15,
      'upload_type' => 'managed_file',
    ),
    'twitter' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => 'Twitter',
      'actions' => 15,
      'upload_type' => 'managed_file',
    ),
    'video' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => 'Video',
      'actions' => 15,
      'upload_type' => 'managed_file',
    ),
    'customtext' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => 'Custom html',
      'actions' => 15,
      'upload_type' => 'managed_file',
    ),
    'flash' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => '',
      'upload_type' => 'managed_file',
      'actions' => 5,
    ),
  );
  $export['scald_atom_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_custom_contexts';
  $strongarm->value = array(
    'carousel' => array(
      'name' => 'carousel',
      'title' => 'Carousel',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'header_image' => array(
      'name' => 'header_image',
      'title' => 'Header image',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'tieto_contact_page' => array(
      'name' => 'tieto_contact_page',
      'title' => 'Tieto Contact Page',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'concept_page_video_thumbnails' => array(
      'name' => 'concept_page_video_thumbnails',
      'title' => 'Concept Page Video Thumbnails',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'customtext' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'flash' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'rss_channel' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'slideshow' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'twitter' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'twitter_channel' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'style-medium',
        ),
        'webpage' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
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
      ),
      'player' => array(
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
      ),
    ),
    'new_career_page_video' => array(
      'name' => 'new_career_page_video',
      'title' => 'New career page video',
      'description' => 'New career page video',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
  );
  $export['scald_custom_contexts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_slideshare_api_key';
  $strongarm->value = 'nHIxNrzH';
  $export['scald_slideshare_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_slideshare_imports';
  $strongarm->value = array(
    'user-TietoCorporation' => array(
      'type' => 'user',
      'value' => 'TietoCorporation',
      'limit' => '0',
    ),
  );
  $export['scald_slideshare_imports'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_slideshare_shared_secret';
  $strongarm->value = 'WAAavkl2';
  $export['scald_slideshare_shared_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_consumer_key';
  $strongarm->value = '7uN6ntkDx11FjGgo9uvhRg';
  $export['twitter_pull_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_consumer_secret';
  $strongarm->value = 'zj9iCtyTwmgP9pVzS4yt1msEyHDQut2TjvY9fokKuc';
  $export['twitter_pull_consumer_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_oauth_access_token';
  $strongarm->value = '102074011-E05eCyTMKSoG12bVHtdXuk77XVIZj8QKbNvbfjSJ';
  $export['twitter_pull_oauth_access_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_pull_oauth_access_token_secret';
  $strongarm->value = 'NxyV2z4jLaPa5pwoFpToAvXtECgwYT89jBtiLHkxBY';
  $export['twitter_pull_oauth_access_token_secret'] = $strongarm;

  return $export;
}
