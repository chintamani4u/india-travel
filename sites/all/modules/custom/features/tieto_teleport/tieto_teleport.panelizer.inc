<?php
/**
 * @file
 * tieto_teleport.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_teleport_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_teleport';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_teleport:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Teleported',
      'keyword' => 'teleportednode',
      'name' => 'entity_from_field:field_teleported_content-node-node',
      'delta' => 0,
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
  $display->uuid = '73c9a721-1749-4fd9-9969-211787dbcbdf';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_teleport:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5e4ee5bd-a242-41ac-9f37-781ec62d581a';
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
    'follow' => 'active',
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
  $pane->uuid = '5e4ee5bd-a242-41ac-9f37-781ec62d581a';
  $display->content['new-5e4ee5bd-a242-41ac-9f37-781ec62d581a'] = $pane;
  $display->panels['column1'][0] = 'new-5e4ee5bd-a242-41ac-9f37-781ec62d581a';
  $pane = new stdClass();
  $pane->pid = 'new-ab6ff447-58df-415f-9273-03c44fbc77a3';
  $pane->panel = 'contentmain';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '%node:title',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ab6ff447-58df-415f-9273-03c44fbc77a3';
  $display->content['new-ab6ff447-58df-415f-9273-03c44fbc77a3'] = $pane;
  $display->panels['contentmain'][0] = 'new-ab6ff447-58df-415f-9273-03c44fbc77a3';
  $pane = new stdClass();
  $pane->pid = 'new-04e49127-490b-4e99-a657-4e749073cca0';
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
    'context' => 'relationship_entity_from_field:field_teleported_content-node-node_1',
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
  $pane->uuid = '04e49127-490b-4e99-a657-4e749073cca0';
  $display->content['new-04e49127-490b-4e99-a657-4e749073cca0'] = $pane;
  $display->panels['contentmain'][1] = 'new-04e49127-490b-4e99-a657-4e749073cca0';
  $pane = new stdClass();
  $pane->pid = 'new-eea90e25-b367-4603-9aa9-f89c24afee27';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teleported_content';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
      'links' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => ' ',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'eea90e25-b367-4603-9aa9-f89c24afee27';
  $display->content['new-eea90e25-b367-4603-9aa9-f89c24afee27'] = $pane;
  $display->panels['contentmain'][2] = 'new-eea90e25-b367-4603-9aa9-f89c24afee27';
  $pane = new stdClass();
  $pane->pid = 'new-dfda23db-f9d7-4a63-8e6a-a04a3d0ba363';
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
  $pane->uuid = 'dfda23db-f9d7-4a63-8e6a-a04a3d0ba363';
  $display->content['new-dfda23db-f9d7-4a63-8e6a-a04a3d0ba363'] = $pane;
  $display->panels['contentmain'][3] = 'new-dfda23db-f9d7-4a63-8e6a-a04a3d0ba363';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_teleport:default'] = $panelizer;

  return $export;
}
