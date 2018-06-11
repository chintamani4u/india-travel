<?php
/**
 * @file
 * tieto_cv_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_cv_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_cv_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_cv_page:default';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '18b458a0-8a3f-44ea-85d7-889cf67dfca0';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_cv_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c859b0ba-6487-412d-9751-0bbf4cf58f67';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_atom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'full',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c859b0ba-6487-412d-9751-0bbf4cf58f67';
  $display->content['new-c859b0ba-6487-412d-9751-0bbf4cf58f67'] = $pane;
  $display->panels['center'][0] = 'new-c859b0ba-6487-412d-9751-0bbf4cf58f67';
  $pane = new stdClass();
  $pane->pid = 'new-b9f0dd84-0942-4112-a4fd-ffb3d9e1f153';
  $pane->panel = 'center';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b9f0dd84-0942-4112-a4fd-ffb3d9e1f153';
  $display->content['new-b9f0dd84-0942-4112-a4fd-ffb3d9e1f153'] = $pane;
  $display->panels['center'][1] = 'new-b9f0dd84-0942-4112-a4fd-ffb3d9e1f153';
  $pane = new stdClass();
  $pane->pid = 'new-afa56542-cf19-4e99-ad41-c08faa012a42';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_download';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'download',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'afa56542-cf19-4e99-ad41-c08faa012a42';
  $display->content['new-afa56542-cf19-4e99-ad41-c08faa012a42'] = $pane;
  $display->panels['center'][2] = 'new-afa56542-cf19-4e99-ad41-c08faa012a42';
  $pane = new stdClass();
  $pane->pid = 'new-40375ef8-b1a6-421d-880b-d938b5251d44';
  $pane->panel = 'center';
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
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40375ef8-b1a6-421d-880b-d938b5251d44';
  $display->content['new-40375ef8-b1a6-421d-880b-d938b5251d44'] = $pane;
  $display->panels['center'][3] = 'new-40375ef8-b1a6-421d-880b-d938b5251d44';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-40375ef8-b1a6-421d-880b-d938b5251d44';
  $panelizer->display = $display;
  $export['node:tieto_cv_page:default'] = $panelizer;

  return $export;
}
