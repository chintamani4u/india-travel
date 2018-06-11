<?php
/**
 * @file
 * tieto_new_concept_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tieto_new_concept_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_careers_team_job_title'.
  $field_bases['field_careers_team_job_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_careers_team_job_title',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_content_order'.
  $field_bases['field_content_order'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_order',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
        7 => 7,
        8 => 8,
        9 => 9,
        10 => 10,
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_description'.
  $field_bases['field_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_destination_url'.
  $field_bases['field_destination_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_destination_url',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_linkedin_link'.
  $field_bases['field_linkedin_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_linkedin_link',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_menu'.
  $field_bases['field_menu'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_menu',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_parent_page'.
  $field_bases['field_parent_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_parent_page',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'concept_page' => 'concept_page',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_references'.
  $field_bases['field_references'] = array(
    'active' => 1,
    'cardinality' => 8,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_references',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_twitter_link'.
  $field_bases['field_twitter_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_twitter_link',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_view'.
  $field_bases['field_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_view',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 1,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'entity_translation_sync' => FALSE,
      'referenceable_tags' => array(
        'allow' => '',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'addresses:office_addresses' => 0,
        'addresses:panel_pane_addresses' => 0,
        'admin_jobs:jobs' => 0,
        'admin_views_file:system_1' => 0,
        'admin_views_node:system_1' => 0,
        'admin_views_taxonomy_term:system_1' => 0,
        'admin_views_user:system_1' => 0,
        'administer_addresses:page' => 0,
        'archive:block' => 0,
        'archive:page' => 0,
        'backlinks:block' => 0,
        'backlinks:page' => 0,
        'career_cases:block_1' => 'career_cases:block_1',
        'career_follow_us:block_1' => 'career_follow_us:block_1',
        'career_highlight:block_1' => 'career_highlight:block_1',
        'careers_team:block_1' => 'careers_team:block_1',
        'concept_page_menu:block' => 0,
        'crisis_communication:block' => 0,
        'cv_pages:cv_board_of_directors' => 0,
        'cv_pages:panel_pane_1' => 0,
        'cv_pages:panel_pane_2' => 0,
        'feeds_log:page_1' => 0,
        'feeds_log:page_2' => 0,
        'feeds_log:page_3' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'getlocations:block_1' => 0,
        'getlocations_by_city:page' => 0,
        'getlocations_by_province:page' => 0,
        'getlocations_bycountry:page' => 0,
        'getlocations_bylatlon:page_1' => 0,
        'getlocations_bypostcode:page' => 0,
        'getlocations_links:block' => 0,
        'getlocations_list_nearby:block_6' => 0,
        'getlocations_map:block_2' => 0,
        'getlocations_map_allnodes:block_3' => 0,
        'getlocations_map_allnodes:block_4' => 0,
        'getlocations_map_allnodes:page_1' => 0,
        'getlocations_map_allusers:block_8' => 0,
        'getlocations_map_allusers:page_2' => 0,
        'getlocations_map_nearby:block_5' => 0,
        'getlocations_map_nearby_users:block_10' => 0,
        'getlocations_map_nearby_users:block_11' => 0,
        'getlocations_search_nearby:search_page' => 0,
        'getlocations_show_all:block_7' => 0,
        'getlocations_show_all:page_1' => 0,
        'getlocations_streetview:block_2' => 0,
        'getlocations_terms:block_1' => 0,
        'getlocations_terms:block_2' => 0,
        'getlocations_terms:block_3' => 0,
        'getlocations_user:block_9' => 0,
        'glossary:attachment' => 0,
        'glossary:page' => 0,
        'industry_news:attachment_1' => 0,
        'industry_news:panel_pane_1' => 0,
        'industry_news:panel_pane_2' => 0,
        'industry_news:panel_pane_3' => 0,
        'job_suggestion:latest_jobs' => 0,
        'job_suggestion:panel_pane_1' => 0,
        'job_suggestion:panel_pane_2' => 'job_suggestion:panel_pane_2',
        'job_suggestions:block_1' => 0,
        'job_suggestions:latest_jobs' => 0,
        'job_suggestions:panel_pane_1' => 'job_suggestions:panel_pane_1',
        'key_topics_navigation:block' => 0,
        'key_topics_phases:panel_pane_1' => 0,
        'key_topics_phases:panel_pane_2' => 0,
        'key_topics_portfolio:panel_pane_4' => 0,
        'key_topics_portfolio:panel_pane_5' => 0,
        'key_topics_portfolio:panel_pane_6' => 0,
        'key_topics_portfolio:panel_pane_7' => 0,
        'main_carousel:block' => 0,
        'materialbank:public_for_investors' => 0,
        'materialbank:public_material_bank' => 0,
        'materialbank_content:panel_pane_1' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'news_category_news:block_press_releases' => 0,
        'news_category_news:block_se_releases' => 0,
        'news_category_news:feed_1' => 0,
        'news_category_news:new_cision_stock_exchange_release' => 0,
        'news_category_news:pane_press_releases' => 0,
        'news_category_news:pane_se_releases' => 0,
        'news_category_news:panel_pane_1' => 0,
        'news_category_news:press_releases_feed' => 0,
        'panopoly_database_search:search_database_results' => 0,
        'panopoly_search:search_solr_results' => 0,
        'panopoly_taxonomy:taxonomy_content' => 0,
        'panopoly_widgets_general_content:list_of_content' => 0,
        'panopoly_widgets_general_content:piece_of_content' => 0,
        'redirects:page_admin' => 0,
        'redirects:page_user' => 0,
        'scald_atoms:page_1' => 0,
        'scald_library:dnd_library_1' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'taxonomy_terms_of_node:block' => 0,
        'taxonomy_terms_of_node:panel_pane_1' => 0,
        'tieto_basefields_nodes:entityreference_1' => 0,
        'tieto_blogs:panel_pane_1' => 0,
        'tieto_blogs:panel_pane_2' => 0,
        'tieto_blogs:panel_pane_3' => 0,
        'tieto_blogs:panel_pane_4' => 0,
        'tieto_blogs:panel_pane_5' => 0,
        'tieto_blogs:panel_pane_6' => 0,
        'tieto_contacts:country' => 0,
        'tieto_contacts:panel_pane_1' => 0,
        'tieto_contacts:sidebar' => 0,
        'tieto_cross_section_solr_search:attachment_1' => 0,
        'tieto_cross_section_solr_search:panel_pane_1' => 0,
        'tieto_events_solr_search:feed_1' => 0,
        'tieto_events_solr_search:panel_pane_1' => 0,
        'tieto_events_solr_search:panel_pane_2' => 0,
        'tieto_file_solr_search:panel_pane_1' => 0,
        'tieto_highlights:events' => 0,
        'tieto_highlights:insights_and_opinions' => 0,
        'tieto_highlights:news' => 0,
        'tieto_highlights:panel_pane_1' => 0,
        'tieto_highlights:panel_pane_2' => 0,
        'tieto_highlights:panel_pane_3' => 0,
        'tieto_highlights:panel_pane_4' => 0,
        'tieto_highlights:top_stories' => 0,
        'tieto_jobs:panel_pane_1' => 0,
        'tieto_jobs_job:view' => 0,
        'tieto_jobs_solr_search:panel_pane_1' => 0,
        'tieto_new_concept_page:header' => 0,
        'tieto_news_solr_search:attachment_1' => 0,
        'tieto_news_solr_search:panel_pane_1' => 0,
        'tieto_node_solr_search:panel_pane_1' => 0,
        'tieto_page_highlights:careers' => 0,
        'tieto_page_highlights:carousel' => 0,
        'tieto_times:editorial_item' => 0,
        'tieto_times:magazine_selection' => 0,
        'tieto_times:page' => 0,
        'tieto_top_story_solr_search:attachment_1' => 0,
        'tieto_top_story_solr_search:panel_pane_1' => 0,
        'tieto_topic_editors_select:entityreference_1' => 0,
        'top_stories:top_stories_feed' => 0,
        'tweets:block' => 0,
        'tweets:page_2' => 0,
        'tweets:page_all_tweets' => 0,
      ),
      'skip_default' => 1,
      'skip_empty' => 0,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  return $field_bases;
}
