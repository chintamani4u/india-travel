<?php
/**
 * @file
 * tieto_jobs.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tieto_jobs_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tieto_jobs_import';
  $feeds_importer->config = array(
    'name' => 'Jobs Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'TietoJobsFetcher',
      'config' => array(
        'accept_invalid_cert' => 1,
        'base_url' => 'https://jobs.tieto.com/vacancies/rss',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'title',
          'xpathparser:1' => 'description',
          'xpathparser:2' => 'job:date_from',
          'xpathparser:3' => 'job:date_to',
          'xpathparser:4' => 'job:organization/job:name',
          'xpathparser:5' => 'job:organization/job:description',
          'xpathparser:6' => 'job:form_of_employment',
          'xpathparser:7' => 'guid',
          'xpathparser:8' => 'guid',
          'xpathparser:9' => 'job:contact_information',
          'xpathparser:10' => 'job:job_area',
          'xpathparser:11' => 'job:locations',
          'xpathparser:12' => 'job:tags',
          'xpathparser:13' => 'pubDate',
          'xpathparser:14' => 'concat(\'http://jobs.tieto.com/public/vacancies/\', guid, \'/applicants/0/review_profile\')',
        ),
        'rawXML' => array(
          'xpathparser:11' => 'xpathparser:11',
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
          'xpathparser:10' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
        ),
        'context' => '/rss/channel/item',
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
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'tieto_jobs_vacancy',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_jobs_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_jobs_date:end',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_jobs_organization',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_jobs_organization_desc',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_jobs_form_of_employment',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_jobs_id',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'guid',
            'unique' => 1,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_jobs_contact_information',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_jobs_jobareas',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_jobs_location',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_jobs_tags',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'created',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_apply_url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'tieto_jobs_ext',
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
  $export['tieto_jobs_import'] = $feeds_importer;

  return $export;
}
