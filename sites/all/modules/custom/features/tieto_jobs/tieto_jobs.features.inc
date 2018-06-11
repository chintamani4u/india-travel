<?php
/**
 * @file
 * tieto_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_jobs_node_info() {
  $items = array(
    'tieto_jobs_vacancy' => array(
      'name' => t('Tieto Jobs Vacancy'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_saved_searches_settings().
 */
function tieto_jobs_default_search_api_saved_searches_settings() {
  $items = array();
  $items['tieto_node_solr_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "tieto_node_solr_index",
    "index_id" : "tieto_node_solr_index",
    "enabled" : "1",
    "options" : {
      "description" : "",
      "default_true" : "0",
      "ids_list" : { "search_api_views:tieto_old_jobs_solr_search:panel_pane_1" : "search_api_views:tieto_old_jobs_solr_search:panel_pane_1" },
      "registered_choose_mail" : 0,
      "choose_name" : 0,
      "user_select_interval" : 1,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "86400",
      "mail" : {
        "activate" : {
          "send" : 1,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\\u0027t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure your saved searches at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\u0022[search-api-saved-search:name]\\u0022:\\r\\n[search-api-saved-search:items]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])"
        }
      },
      "manual" : {
        "allow" : 0,
        "fulltext" : 0,
        "fields" : [],
        "page" : { "path" : "", "fulltext" : "", "direct_filter_params" : "0" }
      }
    }
  }');
  return $items;
}
