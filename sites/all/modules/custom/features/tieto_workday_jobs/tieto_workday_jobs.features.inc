<?php
/**
 * @file
 * tieto_workday_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_workday_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
/**
 * Implements hook_cron().
 */
function tieto_workday_jobs_cron() {

  // Fetch the feeds importer config, no need to change the base_url for the RSS in this code every time.
  $source = feeds_source('workday_com_tieto_jobs', 0);
  $config = $source->getConfig();

  // Create a new cURL resource.
  $ch = curl_init($config['FeedsHTTPFetcher']['source']);

  curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
  curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
  curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, false);
  curl_setopt($ch,CURLOPT_CONNECTTIMEOUT,10);

  // Get data.
  $xml_content=curl_exec($ch);

  // Get info of the transfer.
  $data = curl_getinfo($ch);
  curl_close($ch);
  // Check that the source actually existed (not down, changed url etc).
  if ($data['http_code'] == '200') {
    $parser = xml_parser_create();
    xml_parse_into_struct($parser, $xml_content, $vals, $index);
    xml_parser_free($parser);
    $ids = array();
    $date_ids = array();
    $update_count=0;
    $temp =0;
    foreach($vals as $val ) {
      if($val['tag']=="WD:INSTANCE") {
        $ids[] = $temp = (string)$val['value'];
      }
      if($val['tag']=="WD:ENDDATE" ) {
        $date_ids[] = $temp;
      }
    }

    // Make sure that xpath didn't return empty
    if (count($ids) != 0) {
     // Get all job vacancies and their ids from the database
      $sql = "select a.nid, b.field_jobs_id_value from node a
                         left join field_data_field_jobs_id b on
                         a.nid=b.entity_id where a.type='tieto_jobs_vacancy'";
      $query = db_query($sql);
      $result = $query->fetchAllKeyed();
      $diff = array_diff($result, $ids);
      // delete the obsolete job nodes
      while (list($key , $val) = each($diff)) {
        node_delete($key);
      }
    }
    if (count($date_ids) != 0) {
      // Get all job vacancies and their ids from the database
      $sql = "select   c.entity_id, b.field_jobs_id_value from field_data_field_jobs_id b
                         left join field_data_field_jobs_date c on
                         b.entity_id =c.entity_id where c.`field_jobs_date_value2` IS NOT NULL";
      $query = db_query($sql);
      $result = $query->fetchAllKeyed();
      print_r($result);
      $diff = array_diff($result, $date_ids);
      // delete the obsolete job nodes
      print_r($diff);
      while (list($key , $val) = each($diff)) {
        $node_new = node_load($key);
        unset($node_new->field_jobs_date[LANGUAGE_NONE][0]['value2']);
        node_save($node_new);
        $update_count++;
      }
    }
  }
// Add a watchdog message
  watchdog('Workday_jobs', t('Workday jobs cron completed, removed ' . count($diff) . ' obselete tieto jobs nodes'), $variables = array(), $severity = WATCHDOG_INFO);
  watchdog('workday_jobs', t('Workday jobs cron completed, Updated end date for ' . $update_count . ' jobs nodes'), $variables = array(), $severity = WATCHDOG_INFO);

}

