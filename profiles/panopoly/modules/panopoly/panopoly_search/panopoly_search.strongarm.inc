<?php
/**
 * @file
 * panopoly_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panopoly_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@database_node_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@database_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@node_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    0 => 'apachesolr_search',
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'node_index' => array(
      'search_api_views:panopoly_search:search_solr_results' => 'search_api_views:panopoly_search:search_solr_results',
      'search_api_views:panopoly_search:page_1' => 'search_api_views:panopoly_search:page_1',
    ),
    'database_node_index' => array(
      'search_api_views:panopoly_database_search:default' => 'search_api_views:panopoly_database_search:default',
      'search_api_views:panopoly_database_search:panel_pane_1' => 'search_api_views:panopoly_database_search:panel_pane_1',
      'search_api_views:panopoly_database_search:search_database_results' => 'search_api_views:panopoly_database_search:search_database_results',
      'search_api_views:panopoly_database_search:page_1' => 'search_api_views:panopoly_database_search:page_1',
    ),
    'tieto_node_solr_index' => array(
      'search_api_views:job_suggestion:latest_jobs' => 'search_api_views:job_suggestion:latest_jobs',
      'search_api_views:job_suggestion:panel_pane_1' => 'search_api_views:job_suggestion:panel_pane_1',
      'search_api_views:job_suggestion:panel_pane_2' => 'search_api_views:job_suggestion:panel_pane_2',
      'search_api_views:tieto_cross_section_solr_search:attachment_1' => 'search_api_views:tieto_cross_section_solr_search:attachment_1',
      'search_api_views:tieto_cross_section_solr_search:panel_pane_1' => 'search_api_views:tieto_cross_section_solr_search:panel_pane_1',
      'search_api_views:tieto_events_solr_search:default' => 'search_api_views:tieto_events_solr_search:default',
      'search_api_views:tieto_events_solr_search:feed_1' => 'search_api_views:tieto_events_solr_search:feed_1',
      'search_api_views:tieto_events_solr_search:panel_pane_1' => 'search_api_views:tieto_events_solr_search:panel_pane_1',
      'search_api_views:tieto_events_solr_search:panel_pane_2' => 'search_api_views:tieto_events_solr_search:panel_pane_2',
      'search_api_views:tieto_jobs_solr_search:default' => 'search_api_views:tieto_jobs_solr_search:default',
      'search_api_views:tieto_jobs_solr_search:feed_1' => 'search_api_views:tieto_jobs_solr_search:feed_1',
      'search_api_views:tieto_jobs_solr_search:panel_pane_1' => 'search_api_views:tieto_jobs_solr_search:panel_pane_1',
      'search_api_views:tieto_jobs_solr_search:panel_pane_2' => 'search_api_views:tieto_jobs_solr_search:panel_pane_2',
      'search_api_views:tieto_news_room_search:panel_pane_1' => 'search_api_views:tieto_news_room_search:panel_pane_1',
      'search_api_views:tieto_news_solr_search:attachment_1' => 'search_api_views:tieto_news_solr_search:attachment_1',
      'search_api_views:tieto_news_solr_search:attachment_2' => 'search_api_views:tieto_news_solr_search:attachment_2',
      'search_api_views:tieto_news_solr_search:default' => 'search_api_views:tieto_news_solr_search:default',
      'search_api_views:tieto_news_solr_search:panel_pane_1' => 'search_api_views:tieto_news_solr_search:panel_pane_1',
      'search_api_views:tieto_node_solr_search:default' => 'search_api_views:tieto_node_solr_search:default',
      'search_api_views:tieto_node_solr_search:panel_pane_1' => 'search_api_views:tieto_node_solr_search:panel_pane_1',
      'search_api_views:tieto_top_story_solr_search:attachment_1' => 'search_api_views:tieto_top_story_solr_search:attachment_1',
      'search_api_views:tieto_top_story_solr_search:customer_casese' => 'search_api_views:tieto_top_story_solr_search:customer_casese',
      'search_api_views:tieto_top_story_solr_search:customer_casese_highlight' => 'search_api_views:tieto_top_story_solr_search:customer_casese_highlight',
      'search_api_views:tieto_top_story_solr_search:default' => 'search_api_views:tieto_top_story_solr_search:default',
      'search_api_views:tieto_top_story_solr_search:panel_pane_1' => 'search_api_views:tieto_top_story_solr_search:panel_pane_1',
      'search_api_views:tieto_top_story_solr_search:panel_pane_2' => 'search_api_views:tieto_top_story_solr_search:panel_pane_2',
      'search_api_views:tieto_top_story_solr_search:panel_pane_3' => 'search_api_views:tieto_top_story_solr_search:panel_pane_3',
    ),
    'file' => array(
      'search_api_views:tieto_file_solr_material_bank:panel_pane_1' => 'search_api_views:tieto_file_solr_material_bank:panel_pane_1',
      'search_api_views:tieto_file_solr_search:panel_pane_1' => 'search_api_views:tieto_file_solr_search:panel_pane_1',
    ),
    'tieto_atom_solr_index' => array(
      'search_api_views:public_materialbank:material_bank_pane' => 'search_api_views:public_materialbank:material_bank_pane',
      'search_api_views:materialbank:public_material_bank' => 'search_api_views:materialbank:public_material_bank',
      'search_api_views:materialbank:public_for_investors' => 'search_api_views:materialbank:public_for_investors',
      'search_api_views:materialbank:default' => 'search_api_views:materialbank:default',
      'search_api_views:materialbank:ctools_context_1' => 'search_api_views:materialbank:ctools_context_1',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
