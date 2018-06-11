<?php
/**
 * @file
 * tieto_workday_jobs.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tieto_workday_jobs_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'workday_com_tieto_jobs';
  $feeds_importer->config = array(
    'name' => 'workday.com Tieto Jobs',
    'description' => 'map workday xml to tieto_jobs_vacancy',
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
          'xpathparser:0' => 'wd:Instance',
          'xpathparser:1' => 'wd:title',
          'xpathparser:2' => 'concat(string(wd:Job_Requisition/wd:jobDescription)," ")',
          'xpathparser:3' => 'wd:startDate',
          'xpathparser:4' => '',
          'xpathparser:5' => 'wd:jobFamilyGroup/@wd:Descriptor',
          'xpathparser:6' => '',
          'xpathparser:7' => '$guid',
          'xpathparser:8' => 'wd:Organization',
          'xpathparser:9' => 'wd:timeType/@wd:Descriptor',
          'xpathparser:10' => 'wd:EndDate_1',
          'xpathparser:12' => 'string("workday")',
          'xpathparser:13' => 'substring-before(wd:External_Apply_URL,"/apply")',
          'xpathparser:14' => 'wd:jobPostingSite/@wd:Descriptor',
          'xpathparser:15' => 'concat(substring-after(wd:city[1]/@wd:Descriptor,", "),",",substring-after(wd:city[2]/@wd:Descriptor,", "),",",substring-after(wd:city[3]/@wd:Descriptor,", "),",",substring-after(wd:city[4]/@wd:Descriptor,", "))',
        ),
        'rawXML' => array(
          'xpathparser:2' => 'xpathparser:2',
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
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
          'xpathparser:15' => 0,
        ),
        'context' => '//wd:Report_Data/wd:Report_Entry',
        'exp' => array(
          'errors' => 0,
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
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
          ),
        ),
        'allow_override' => 1,
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
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_jobs_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_jobs_location',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_jobs_jobareas',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_jobs_contact_information',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_jobs_id',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_jobs_organization',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_jobs_form_of_employment',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_jobs_date:end',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_jobs_from',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_apply_url',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_job_posting_site',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_job_location_text',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'tieto_sysop_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['workday_com_tieto_jobs'] = $feeds_importer;

  return $export;
}
