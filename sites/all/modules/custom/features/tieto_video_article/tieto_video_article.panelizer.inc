<?php
/**
 * @file
 * tieto_video_article.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_video_article_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'video_article';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:video_article:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '554b175b-bd4c-42ea-b7da-1be181174ca1';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:video_article:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-88b59bbe-ee79-49b6-8cd9-002620e05f3b';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_atom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'sdl_editor_representation',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '88b59bbe-ee79-49b6-8cd9-002620e05f3b';
  $display->content['new-88b59bbe-ee79-49b6-8cd9-002620e05f3b'] = $pane;
  $display->panels['contentmain'][0] = 'new-88b59bbe-ee79-49b6-8cd9-002620e05f3b';
  $pane = new stdClass();
  $pane->pid = 'new-748b3271-51dd-429c-a3a4-d9c26ee87806';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ingress';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '748b3271-51dd-429c-a3a4-d9c26ee87806';
  $display->content['new-748b3271-51dd-429c-a3a4-d9c26ee87806'] = $pane;
  $display->panels['contentmain'][1] = 'new-748b3271-51dd-429c-a3a4-d9c26ee87806';
  $pane = new stdClass();
  $pane->pid = 'new-80566536-3cff-421c-a714-2c3bfc4d1e09';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '80566536-3cff-421c-a714-2c3bfc4d1e09';
  $display->content['new-80566536-3cff-421c-a714-2c3bfc4d1e09'] = $pane;
  $display->panels['contentmain'][2] = 'new-80566536-3cff-421c-a714-2c3bfc4d1e09';
  $pane = new stdClass();
  $pane->pid = 'new-c73af0b0-5323-49d4-9fe0-7d3ef38260db';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c73af0b0-5323-49d4-9fe0-7d3ef38260db';
  $display->content['new-c73af0b0-5323-49d4-9fe0-7d3ef38260db'] = $pane;
  $display->panels['contentmain'][3] = 'new-c73af0b0-5323-49d4-9fe0-7d3ef38260db';
  $pane = new stdClass();
  $pane->pid = 'new-46cd93e9-100a-460e-bcb5-06cb7937102f';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_contacts-sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46cd93e9-100a-460e-bcb5-06cb7937102f';
  $display->content['new-46cd93e9-100a-460e-bcb5-06cb7937102f'] = $pane;
  $display->panels['sidebar'][0] = 'new-46cd93e9-100a-460e-bcb5-06cb7937102f';
  $pane = new stdClass();
  $pane->pid = 'new-148041b7-2bc5-4b58-9059-1d2d05a4e5b9';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sidebar_reference_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '148041b7-2bc5-4b58-9059-1d2d05a4e5b9';
  $display->content['new-148041b7-2bc5-4b58-9059-1d2d05a4e5b9'] = $pane;
  $display->panels['sidebar'][1] = 'new-148041b7-2bc5-4b58-9059-1d2d05a4e5b9';
  $pane = new stdClass();
  $pane->pid = 'new-dafb5293-8209-46b2-9d3e-273d9efb6743';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link_to_view' => 0,
    'items_per_page' => '4',
    'path' => '',
    'fields_override' => array(
      'title' => 1,
    ),
    'exposed' => array(
      'field_industry_tid' => array(),
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Tieto News',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dafb5293-8209-46b2-9d3e-273d9efb6743';
  $display->content['new-dafb5293-8209-46b2-9d3e-273d9efb6743'] = $pane;
  $display->panels['sidebar'][2] = 'new-dafb5293-8209-46b2-9d3e-273d9efb6743';
  $pane = new stdClass();
  $pane->pid = 'new-1619325a-1aff-4223-9919-2df0f5fb3b93';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'exposed' => array(
      'field_industry_tid' => array(),
    ),
    'context' => array(
      0 => 'empty',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1619325a-1aff-4223-9919-2df0f5fb3b93';
  $display->content['new-1619325a-1aff-4223-9919-2df0f5fb3b93'] = $pane;
  $display->panels['sidebar'][3] = 'new-1619325a-1aff-4223-9919-2df0f5fb3b93';
  $pane = new stdClass();
  $pane->pid = 'new-74b1b7ab-331f-4d1d-a1e7-070b967b2889';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link_to_view' => 0,
    'items_per_page' => '4',
    'path' => '',
    'fields_override' => array(
      'title' => 1,
    ),
    'exposed' => array(
      'field_industry_tid' => array(),
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Customer Cases',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '74b1b7ab-331f-4d1d-a1e7-070b967b2889';
  $display->content['new-74b1b7ab-331f-4d1d-a1e7-070b967b2889'] = $pane;
  $display->panels['sidebar'][4] = 'new-74b1b7ab-331f-4d1d-a1e7-070b967b2889';
  $pane = new stdClass();
  $pane->pid = 'new-dccb08ef-c0b3-4089-9feb-cbe3fd18c50c';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-insights_and_opinions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link_to_view' => 0,
    'items_per_page' => '5',
    'path' => '',
    'fields_override' => array(
      'title' => 1,
    ),
    'exposed' => array(
      'field_industry_tid' => array(),
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Insights and opinions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'dccb08ef-c0b3-4089-9feb-cbe3fd18c50c';
  $display->content['new-dccb08ef-c0b3-4089-9feb-cbe3fd18c50c'] = $pane;
  $display->panels['sidebar'][5] = 'new-dccb08ef-c0b3-4089-9feb-cbe3fd18c50c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:video_article:default'] = $panelizer;

  return $export;
}
