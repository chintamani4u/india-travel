<?php
/**
 * @file
 * tieto_contact.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_contact_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'contact';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:contact:default';
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
      'identifier' => 'Contact Form',
      'keyword' => 'contact_form',
      'name' => 'entity_from_field:field_contact_form-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%contact_form:title';
  $display->uuid = 'c9955aa1-fbb5-4d9b-a4dd-bceaf3c14fd1';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:contact:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a8742540-06c7-4426-b4a6-7c4d05a51e72';
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
  $pane->uuid = 'a8742540-06c7-4426-b4a6-7c4d05a51e72';
  $display->content['new-a8742540-06c7-4426-b4a6-7c4d05a51e72'] = $pane;
  $display->panels['contentmain'][0] = 'new-a8742540-06c7-4426-b4a6-7c4d05a51e72';
  $pane = new stdClass();
  $pane->pid = 'new-c775d203-8e9d-41ba-8248-973999390b42';
  $pane->panel = 'contentmain';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c775d203-8e9d-41ba-8248-973999390b42';
  $display->content['new-c775d203-8e9d-41ba-8248-973999390b42'] = $pane;
  $display->panels['contentmain'][1] = 'new-c775d203-8e9d-41ba-8248-973999390b42';
  $pane = new stdClass();
  $pane->pid = 'new-e01f81a3-d505-4579-97aa-efce0a7f518f';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_role';
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
  $pane->uuid = 'e01f81a3-d505-4579-97aa-efce0a7f518f';
  $display->content['new-e01f81a3-d505-4579-97aa-efce0a7f518f'] = $pane;
  $display->panels['contentmain'][2] = 'new-e01f81a3-d505-4579-97aa-efce0a7f518f';
  $pane = new stdClass();
  $pane->pid = 'new-d71f119b-d2fb-4d10-b648-bb8db7c26dac';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phone_number';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd71f119b-d2fb-4d10-b648-bb8db7c26dac';
  $display->content['new-d71f119b-d2fb-4d10-b648-bb8db7c26dac'] = $pane;
  $display->panels['contentmain'][3] = 'new-d71f119b-d2fb-4d10-b648-bb8db7c26dac';
  $pane = new stdClass();
  $pane->pid = 'new-130d17d3-87ec-4537-b1b0-42f2b17b3b04';
  $pane->panel = 'contentmain';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'relationship_entity_from_field:field_contact_form-node-node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'relationship_entity_from_field:field_contact_form-node-node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '130d17d3-87ec-4537-b1b0-42f2b17b3b04';
  $display->content['new-130d17d3-87ec-4537-b1b0-42f2b17b3b04'] = $pane;
  $display->panels['contentmain'][4] = 'new-130d17d3-87ec-4537-b1b0-42f2b17b3b04';
  $pane = new stdClass();
  $pane->pid = 'new-9cb4a0a6-4db1-4aab-b9f7-89ad1a270478';
  $pane->panel = 'contentmain';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'relationship_entity_from_field:field_contact_form-node-node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9cb4a0a6-4db1-4aab-b9f7-89ad1a270478';
  $display->content['new-9cb4a0a6-4db1-4aab-b9f7-89ad1a270478'] = $pane;
  $display->panels['contentmain'][5] = 'new-9cb4a0a6-4db1-4aab-b9f7-89ad1a270478';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:contact:default'] = $panelizer;

  return $export;
}
