<?php
/**
 * @file
 * tieto_key_topics.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_key_topics_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'key_topics';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:key_topics:default';
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
  $display->layout = 'conceptpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1' => NULL,
      'row2' => NULL,
      'row3' => NULL,
      'row4' => NULL,
      'row5' => NULL,
      'row6' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '929d0404-5bdc-470b-848e-c83ec180f62f';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:key_topics:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6d360433-ef06-407e-b5c1-e2117449db6e';
  $pane->panel = 'row1';
  $pane->type = 'views_panes';
  $pane->subtype = 'key_topics_phases-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'name' => '',
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
  $pane->uuid = '6d360433-ef06-407e-b5c1-e2117449db6e';
  $display->content['new-6d360433-ef06-407e-b5c1-e2117449db6e'] = $pane;
  $display->panels['row1'][0] = 'new-6d360433-ef06-407e-b5c1-e2117449db6e';
  $pane = new stdClass();
  $pane->pid = 'new-755dd67f-4cf5-448f-ad48-abb580b570fd';
  $pane->panel = 'row2';
  $pane->type = 'views_panes';
  $pane->subtype = 'key_topics_phases-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'name' => '',
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
  $pane->uuid = '755dd67f-4cf5-448f-ad48-abb580b570fd';
  $display->content['new-755dd67f-4cf5-448f-ad48-abb580b570fd'] = $pane;
  $display->panels['row2'][0] = 'new-755dd67f-4cf5-448f-ad48-abb580b570fd';
  $pane = new stdClass();
  $pane->pid = 'new-8927d47f-960e-4814-87d0-eaf759068f01';
  $pane->panel = 'row3';
  $pane->type = 'views_panes';
  $pane->subtype = 'key_topics_phases-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'name' => '',
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
  $pane->uuid = '8927d47f-960e-4814-87d0-eaf759068f01';
  $display->content['new-8927d47f-960e-4814-87d0-eaf759068f01'] = $pane;
  $display->panels['row3'][0] = 'new-8927d47f-960e-4814-87d0-eaf759068f01';
  $pane = new stdClass();
  $pane->pid = 'new-2bb75bde-b12b-452d-92b7-9ed16142d02d';
  $pane->panel = 'row5';
  $pane->type = 'views_panes';
  $pane->subtype = 'key_topics_portfolio-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '2bb75bde-b12b-452d-92b7-9ed16142d02d';
  $display->content['new-2bb75bde-b12b-452d-92b7-9ed16142d02d'] = $pane;
  $display->panels['row5'][0] = 'new-2bb75bde-b12b-452d-92b7-9ed16142d02d';
  $pane = new stdClass();
  $pane->pid = 'new-fd29d0ba-cfda-4a40-9b77-402251de5f13';
  $pane->panel = 'row5';
  $pane->type = 'views_panes';
  $pane->subtype = 'key_topics_portfolio-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fd29d0ba-cfda-4a40-9b77-402251de5f13';
  $display->content['new-fd29d0ba-cfda-4a40-9b77-402251de5f13'] = $pane;
  $display->panels['row5'][1] = 'new-fd29d0ba-cfda-4a40-9b77-402251de5f13';
  $pane = new stdClass();
  $pane->pid = 'new-5eef24b3-6a36-43bb-9610-dd1a2313a28d';
  $pane->panel = 'row5';
  $pane->type = 'views_panes';
  $pane->subtype = 'key_topics_portfolio-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5eef24b3-6a36-43bb-9610-dd1a2313a28d';
  $display->content['new-5eef24b3-6a36-43bb-9610-dd1a2313a28d'] = $pane;
  $display->panels['row5'][2] = 'new-5eef24b3-6a36-43bb-9610-dd1a2313a28d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:key_topics:default'] = $panelizer;

  return $export;
}
