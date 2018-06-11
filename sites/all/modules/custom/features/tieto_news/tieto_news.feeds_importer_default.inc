<?php
/**
 * @file
 * tieto_news.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tieto_news_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cision_import';
  $feeds_importer->config = array(
    'name' => 'Cision press releases importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCisionParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'tieto_news_article',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'releaseid',
            'target' => 'field_cision_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'releaseid',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'press_release:headline',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'press_release:type',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'press_release:main',
            'target' => 'body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'location_href',
            'target' => 'url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'press_release:published_date',
            'target' => 'field_release_date:start',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'press_release:published_date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'press_release:categories',
            'target' => 'field_industry',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'press_release:ingress',
            'target' => 'field_ingress',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'press_release:services',
            'target' => 'field_product_development',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'press_release:attachment_title',
            'target' => 'field_news_attachments:title',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'press_release:attachment_url',
            'target' => 'field_news_attachments:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'tieto_news_ext',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => 'tieto_cision_feed',
    'update' => 0,
    'import_period' => '300',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['cision_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cision_stock_exchange_releases_importer';
  $feeds_importer->config = array(
    'name' => 'Cision stock exchange releases importer',
    'description' => 'Cision Stock exchange releases importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCisionParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'tieto_news_article',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'releaseid',
            'target' => 'field_cision_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'releaseid',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'press_release:headline',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'press_release:type',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'press_release:main',
            'target' => 'body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'location_href',
            'target' => 'url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'press_release:published_date',
            'target' => 'field_release_date:start',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'press_release:published_date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'press_release:categories',
            'target' => 'field_industry',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'press_release:ingress',
            'target' => 'field_ingress',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'press_release:services',
            'target' => 'field_product_development',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'press_release:attachment_title',
            'target' => 'field_news_attachments:title',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'press_release:attachment_url',
            'target' => 'field_news_attachments:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'tieto_news_ext',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => 'cision_stock_exchange_releases_i',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['cision_stock_exchange_releases_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'facebook_importer';
  $feeds_importer->config = array(
    'name' => 'Facebook Importer',
    'description' => 'Facebook posts used in newsroom page.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsFacebookParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'facebook_posts',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'post_id',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'post_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'link',
            'target' => 'field_fb_link:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'message',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'picture',
            'target' => 'field_fb_picture',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'panopoly_html_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['facebook_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'managers_transactions';
  $feeds_importer->config = array(
    'name' => 'Managers transactions',
    'description' => 'New managers transactions (Press release from huginonline)',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsHuginParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'tieto_news_article',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'press_release:headline',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'press_release:tieto_news_language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'press_release:tieto_hugin_map:field_news_type',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'press_release:published_date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'press_release:main',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'id',
            'target' => 'field_hugin_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'tieto_news_ext',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '180',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['managers_transactions'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tieto_nasdaq_importer';
  $feeds_importer->config = array(
    'name' => 'Nasdaq Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'id',
          'xpathparser:1' => 'id',
          'xpathparser:2' => 'headline',
          'xpathparser:3' => 'displayedLanguage',
          'xpathparser:4' => 'published',
          'xpathparser:5' => 'text',
          'xpathparser:6' => 'attachments/attachment/filename',
          'xpathparser:7' => 'attachments/attachment/attachmenturl',
          'xpathparser:8' => 'messageurl',
          'xpathparser:9' => 'published',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
        ),
        'context' => '/messages/message',
        'exp' => array(
          'errors' => 1,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'tieto_news_article',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_nasdaq_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_release_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_news_attachments:title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_news_attachments:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'parent:taxonomy:tieto_news_types',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:8',
            'target' => 'url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:9',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'tieto_news_ext',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => 'tieto_nasdaq_feed',
    'update' => 0,
    'import_period' => '180',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['tieto_nasdaq_importer'] = $feeds_importer;

  return $export;
}
