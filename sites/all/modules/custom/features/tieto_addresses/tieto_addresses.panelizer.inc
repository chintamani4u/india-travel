<?php
/**
 * @file
 * tieto_addresses.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_addresses_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_map';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_map:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'field_office_addresses',
      'keyword' => 'field_office_addresses',
      'name' => 'entity_from_field:field_office_addresses-node-node',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'whelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'dd6af815-8e08-43f6-972e-d9f86cb22ec2';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_map:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9a268072-2c1f-4cf2-864e-445a053c7350';
  $pane->panel = 'column1';
  $pane->type = 'menu_tree';
  $pane->subtype = '_active';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => '_active',
    'parent_mlid' => '_active:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => 0,
    'expanded' => 0,
    'sort' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9a268072-2c1f-4cf2-864e-445a053c7350';
  $display->content['new-9a268072-2c1f-4cf2-864e-445a053c7350'] = $pane;
  $display->panels['column1'][0] = 'new-9a268072-2c1f-4cf2-864e-445a053c7350';
  $pane = new stdClass();
  $pane->pid = 'new-96198862-faeb-445d-9a5e-15d8cd1ef205';
  $pane->panel = 'column2';
  $pane->type = 'block';
  $pane->subtype = 'views-230b594481d6ee8fad0731a51afaf5cc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96198862-faeb-445d-9a5e-15d8cd1ef205';
  $display->content['new-96198862-faeb-445d-9a5e-15d8cd1ef205'] = $pane;
  $display->panels['column2'][0] = 'new-96198862-faeb-445d-9a5e-15d8cd1ef205';
  $pane = new stdClass();
  $pane->pid = 'new-2da91f41-136b-43ff-a1e4-8c10f9d734dd';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'addresses-panel_pane_addresses';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
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
    'view_settings' => 'fields',
    'header_type' => 'none',
    'context' => array(
      0 => 'panelizer',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2da91f41-136b-43ff-a1e4-8c10f9d734dd';
  $display->content['new-2da91f41-136b-43ff-a1e4-8c10f9d734dd'] = $pane;
  $display->panels['contentmain'][0] = 'new-2da91f41-136b-43ff-a1e4-8c10f9d734dd';
  $pane = new stdClass();
  $pane->pid = 'new-1b11c1c0-b418-4be7-afc9-a3cc9443dbcd';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_office_addresses';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'teaser',
      'links' => 0,
    ),
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
  $pane->uuid = '1b11c1c0-b418-4be7-afc9-a3cc9443dbcd';
  $display->content['new-1b11c1c0-b418-4be7-afc9-a3cc9443dbcd'] = $pane;
  $display->panels['contentmain'][1] = 'new-1b11c1c0-b418-4be7-afc9-a3cc9443dbcd';
  $pane = new stdClass();
  $pane->pid = 'new-1a163c2b-5e52-45db-b203-19a62b8071fc';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1a163c2b-5e52-45db-b203-19a62b8071fc';
  $display->content['new-1a163c2b-5e52-45db-b203-19a62b8071fc'] = $pane;
  $display->panels['contentmain'][2] = 'new-1a163c2b-5e52-45db-b203-19a62b8071fc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_map:default'] = $panelizer;

  return $export;
}
