<?php
/**
 * @file
 * tieto_global_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_global_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_global_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function tieto_global_search_default_search_api_index() {
  $items = array();
  $items['tieto_node_solr_index'] = entity_import('search_api_index', '{
    "name" : "Tieto Node SOLR index",
    "machine_name" : "tieto_node_solr_index",
    "description" : null,
    "server" : "acquia_solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "created" : { "type" : "date" },
        "field_apply_url" : { "type" : "text" },
        "field_concepts" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_event_date:value" : { "type" : "date" },
        "field_event_postal_address:administrative_area" : { "type" : "text" },
        "field_event_postal_address:country" : { "type" : "string" },
        "field_event_postal_address:dependent_locality" : { "type" : "text" },
        "field_event_postal_address:first_name" : { "type" : "text" },
        "field_event_postal_address:last_name" : { "type" : "text" },
        "field_event_postal_address:locality" : { "type" : "text" },
        "field_event_postal_address:name_line" : { "type" : "text" },
        "field_event_postal_address:organisation_name" : { "type" : "text" },
        "field_event_postal_address:postal_code" : { "type" : "text" },
        "field_event_postal_address:premise" : { "type" : "text" },
        "field_event_postal_address:sub_administrative_area" : { "type" : "text" },
        "field_event_postal_address:thoroughfare" : { "type" : "text" },
        "field_event_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_industry" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ingress" : { "type" : "text" },
        "field_jobs_jobareas" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_jobs_location" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_jobs_organization" : { "type" : "text" },
        "field_jobs_status" : { "type" : "text" },
        "field_jobs_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_news_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_product_development" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_release_date" : { "type" : "date" },
        "field_services" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_technologies" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "1",
            "bundles" : {
              "contact" : "contact",
              "tieto_frontpage" : "tieto_frontpage",
              "tieto_carousel_content" : "tieto_carousel_content",
              "tieto_hugin_feed" : "tieto_hugin_feed",
              "tieto_nasdaq_feed" : "tieto_nasdaq_feed",
              "tieto_news_context" : "tieto_news_context"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "search_index" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_jobs_location:parent" : "field_jobs_location:parent" } }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_ingress" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_ingress" : true,
              "field_jobs_organization" : true,
              "field_jobs_status" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function tieto_global_search_default_search_api_server() {
  $items = array();
  $items['acquia_solr'] = entity_import('search_api_server', '{
    "name" : "Acquia SOLR",
    "machine_name" : "acquia_solr",
    "description" : "",
    "class" : "acquia_search_service",
    "options" : {
      "host" : "search.acquia.com",
      "port" : "80",
      "path" : "\\/solr\\/KZWT-29886",
      "edismax" : 0,
      "modify_acquia_connection" : 0,
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0
    },
    "enabled" : "0"
  }');
  return $items;
}
