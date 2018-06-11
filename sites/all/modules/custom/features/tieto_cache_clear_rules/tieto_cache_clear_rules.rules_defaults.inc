<?php
/**
 * @file
 * tieto_cache_clear_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tieto_cache_clear_rules_default_rules_configuration() {
  $items = array();
  $items['rules_cache_clear'] = entity_import('rules_config', '{ "rules_cache_clear" : {
      "LABEL" : "Cache Clear",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "tieto_addresses" : "tieto_addresses",
                "tieto_campaign" : "tieto_campaign",
                "contact" : "contact",
                "tieto_content_page" : "tieto_content_page",
                "tieto_customer_reference_case" : "tieto_customer_reference_case",
                "tieto_event" : "tieto_event",
                "tieto_frontpage" : "tieto_frontpage",
                "tieto_carousel_content" : "tieto_carousel_content",
                "tieto_hugin_feed" : "tieto_hugin_feed",
                "industry_hub_page" : "industry_hub_page",
                "magazine_article" : "magazine_article",
                "tieto_nasdaq_feed" : "tieto_nasdaq_feed",
                "tieto_news_context" : "tieto_news_context",
                "tieto_news_article" : "tieto_news_article",
                "tieto_protected_downloads" : "tieto_protected_downloads",
                "tieto_landing_page" : "tieto_landing_page",
                "tieto_service_group_page" : "tieto_service_group_page",
                "tieto_service_page" : "tieto_service_page",
                "tieto_teleport" : "tieto_teleport",
                "tieto_cv_page" : "tieto_cv_page",
                "tieto_contact_form" : "tieto_contact_form",
                "tieto_jobs_vacancy" : "tieto_jobs_vacancy",
                "tieto_map" : "tieto_map",
                "tieto_top_story" : "tieto_top_story",
                "webform" : "webform"
              }
            }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache", "cid" : "[node:nid]", "wildcard" : 0 } },
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : {
                "scald_atoms" : "scald_atoms",
                "scald_library" : "scald_library",
                "materialbank" : "materialbank",
                "news_category_news" : "news_category_news",
                "addresses" : "addresses",
                "calendar" : "calendar",
                "feeds_log" : "feeds_log",
                "fieldable_pane_entities" : "fieldable_pane_entities",
                "fieldable_pane_entity_revisions" : "fieldable_pane_entity_revisions",
                "frontpage" : "frontpage",
                "industry_news" : "industry_news",
                "tieto_blogs" : "tieto_blogs",
                "tieto_contacts" : "tieto_contacts",
                "tieto_events_solr_search" : "tieto_events_solr_search",
                "tieto_event_calendar" : "tieto_event_calendar",
                "tieto_file_solr_search" : "tieto_file_solr_search",
                "tieto_highlights" : "tieto_highlights",
                "tieto_jobs" : "tieto_jobs",
                "tieto_jobs_job" : "tieto_jobs_job",
                "tieto_jobs_solr_search" : "tieto_jobs_solr_search",
                "tieto_node_solr_search" : "tieto_node_solr_search",
                "tieto_page_highlights" : "tieto_page_highlights",
                "tieto_times" : "tieto_times",
                "tieto_topic_editors_select" : "tieto_topic_editors_select",
                "tieto_top_story_solr_search" : "tieto_top_story_solr_search",
                "top_stories" : "top_stories"
              }
            }
          }
        },
        { "cache_actions_action_clear_cache" : { "tables" : { "value" : {
                "cache" : "cache",
                "cache_page" : "cache_page",
                "cache_scald" : "cache_scald",
                "cache_entity_file" : "cache_entity_file",
                "cache_entity_node" : "cache_entity_node",
                "cache_entity_taxonomy_term" : "cache_entity_taxonomy_term",
                "cache_entity_taxonomy_vocabulary" : "cache_entity_taxonomy_vocabulary",
                "cache_entity_user" : "cache_entity_user",
                "cache_field" : "cache_field",
                "cache_entity_fieldable_panels_pane" : "cache_entity_fieldable_panels_pane",
                "cache_image" : "cache_image",
                "cache_libraries" : "cache_libraries",
                "cache_metatag" : "cache_metatag",
                "cache_pulled_tweets" : "cache_pulled_tweets",
                "cache_views" : "cache_views",
                "cache_views_data" : "cache_views_data"
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
