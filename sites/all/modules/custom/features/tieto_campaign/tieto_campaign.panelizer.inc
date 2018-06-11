<?php
/**
 * @file
 * tieto_campaign.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_campaign_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_campaign';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_campaign:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => array(
        'region_columns' => 'region_no_col',
        'region_background' => 'style_background_white',
      ),
    ),
    'contentmain' => array(
      'style' => 'tieto_panel_styles',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ea35f28d-7294-495d-8fe2-bd9bc7dd3a99';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_campaign:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4ad35d44-2ffd-4188-8598-5f224b223629';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_punchline';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4ad35d44-2ffd-4188-8598-5f224b223629';
  $display->content['new-4ad35d44-2ffd-4188-8598-5f224b223629'] = $pane;
  $display->panels['contentmain'][0] = 'new-4ad35d44-2ffd-4188-8598-5f224b223629';
  $pane = new stdClass();
  $pane->pid = 'new-1eb83052-4afb-4263-89cf-9c173dd9fe37';
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
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1eb83052-4afb-4263-89cf-9c173dd9fe37';
  $display->content['new-1eb83052-4afb-4263-89cf-9c173dd9fe37'] = $pane;
  $display->panels['contentmain'][1] = 'new-1eb83052-4afb-4263-89cf-9c173dd9fe37';
  $pane = new stdClass();
  $pane->pid = 'new-fb1ff777-4812-47b0-aeb5-0e20cde2366d';
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
  $pane->uuid = 'fb1ff777-4812-47b0-aeb5-0e20cde2366d';
  $display->content['new-fb1ff777-4812-47b0-aeb5-0e20cde2366d'] = $pane;
  $display->panels['contentmain'][2] = 'new-fb1ff777-4812-47b0-aeb5-0e20cde2366d';
  $pane = new stdClass();
  $pane->pid = 'new-153938a4-5183-4fc1-b268-c8e8bc736315';
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
  $pane->uuid = '153938a4-5183-4fc1-b268-c8e8bc736315';
  $display->content['new-153938a4-5183-4fc1-b268-c8e8bc736315'] = $pane;
  $display->panels['contentmain'][3] = 'new-153938a4-5183-4fc1-b268-c8e8bc736315';
  $pane = new stdClass();
  $pane->pid = 'new-4c91bcb8-d159-454c-8eaa-715eb6743251';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'tieto_key_topics-key_topics_social_icons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Tieto in social media',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '4c91bcb8-d159-454c-8eaa-715eb6743251';
  $display->content['new-4c91bcb8-d159-454c-8eaa-715eb6743251'] = $pane;
  $display->panels['contentmain'][4] = 'new-4c91bcb8-d159-454c-8eaa-715eb6743251';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_campaign:default'] = $panelizer;

  return $export;
}
