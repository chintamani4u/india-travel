<?php
/**
 * @file
 * tieto_basefields.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_basefields_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:webform:default';
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
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9026125e-69aa-4579-81bd-00eee68dfb6e';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:webform:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f548a38e-7ce0-4953-a9a6-e57fcc89f6d5';
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
  $pane->uuid = 'f548a38e-7ce0-4953-a9a6-e57fcc89f6d5';
  $display->content['new-f548a38e-7ce0-4953-a9a6-e57fcc89f6d5'] = $pane;
  $display->panels['contentmain'][0] = 'new-f548a38e-7ce0-4953-a9a6-e57fcc89f6d5';
  $pane = new stdClass();
  $pane->pid = 'new-0403f2c9-f897-4df6-acf6-ec63cc6832f1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0403f2c9-f897-4df6-acf6-ec63cc6832f1';
  $display->content['new-0403f2c9-f897-4df6-acf6-ec63cc6832f1'] = $pane;
  $display->panels['contentmain'][1] = 'new-0403f2c9-f897-4df6-acf6-ec63cc6832f1';
  $pane = new stdClass();
  $pane->pid = 'new-1075aaab-7337-458e-85eb-0cc0d39b5ece';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1075aaab-7337-458e-85eb-0cc0d39b5ece';
  $display->content['new-1075aaab-7337-458e-85eb-0cc0d39b5ece'] = $pane;
  $display->panels['contentmain'][2] = 'new-1075aaab-7337-458e-85eb-0cc0d39b5ece';
  $pane = new stdClass();
  $pane->pid = 'new-0d1cd597-f03e-409b-bf68-18e7dbab12c4';
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
  $pane->uuid = '0d1cd597-f03e-409b-bf68-18e7dbab12c4';
  $display->content['new-0d1cd597-f03e-409b-bf68-18e7dbab12c4'] = $pane;
  $display->panels['contentmain'][3] = 'new-0d1cd597-f03e-409b-bf68-18e7dbab12c4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:webform:default'] = $panelizer;

  return $export;
}
