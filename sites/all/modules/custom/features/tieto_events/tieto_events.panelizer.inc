<?php
/**
 * @file
 * tieto_events.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_events_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_event';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_event:default';
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
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bb5703cb-d8f2-4d75-b4f4-181b1c51712f';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_event:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7dfab55c-d203-4d40-a4b7-19e46a9efa85';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'tieto_short_date_time',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
    ),
    'context' => 'panelizer',
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
  $pane->uuid = '7dfab55c-d203-4d40-a4b7-19e46a9efa85';
  $display->content['new-7dfab55c-d203-4d40-a4b7-19e46a9efa85'] = $pane;
  $display->panels['contentmain'][0] = 'new-7dfab55c-d203-4d40-a4b7-19e46a9efa85';
  $pane = new stdClass();
  $pane->pid = 'new-dcd06c9b-3232-4570-bdaf-8c6bd1b60c62';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dcd06c9b-3232-4570-bdaf-8c6bd1b60c62';
  $display->content['new-dcd06c9b-3232-4570-bdaf-8c6bd1b60c62'] = $pane;
  $display->panels['contentmain'][1] = 'new-dcd06c9b-3232-4570-bdaf-8c6bd1b60c62';
  $pane = new stdClass();
  $pane->pid = 'new-348225aa-e644-4d49-a46c-054b35f6dded';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_postal_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'addressfield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_handlers' => array(
        'address' => 'address',
      ),
      'use_widget_handlers' => 1,
    ),
    'context' => 'panelizer',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '348225aa-e644-4d49-a46c-054b35f6dded';
  $display->content['new-348225aa-e644-4d49-a46c-054b35f6dded'] = $pane;
  $display->panels['contentmain'][2] = 'new-348225aa-e644-4d49-a46c-054b35f6dded';
  $pane = new stdClass();
  $pane->pid = 'new-d33e5e4b-4cfa-4309-9180-ccda0218b6c4';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_atom';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd33e5e4b-4cfa-4309-9180-ccda0218b6c4';
  $display->content['new-d33e5e4b-4cfa-4309-9180-ccda0218b6c4'] = $pane;
  $display->panels['contentmain'][3] = 'new-d33e5e4b-4cfa-4309-9180-ccda0218b6c4';
  $pane = new stdClass();
  $pane->pid = 'new-3ab38a1a-d15c-40df-9a39-eb7435988ec0';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_caption';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3ab38a1a-d15c-40df-9a39-eb7435988ec0';
  $display->content['new-3ab38a1a-d15c-40df-9a39-eb7435988ec0'] = $pane;
  $display->panels['contentmain'][4] = 'new-3ab38a1a-d15c-40df-9a39-eb7435988ec0';
  $pane = new stdClass();
  $pane->pid = 'new-77c973a3-b7b3-4389-ac19-d5f607f55c44';
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
    'context' => array(),
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '77c973a3-b7b3-4389-ac19-d5f607f55c44';
  $display->content['new-77c973a3-b7b3-4389-ac19-d5f607f55c44'] = $pane;
  $display->panels['contentmain'][5] = 'new-77c973a3-b7b3-4389-ac19-d5f607f55c44';
  $pane = new stdClass();
  $pane->pid = 'new-be4d2c90-1b31-4501-ac1c-fa9cc4272540';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'be4d2c90-1b31-4501-ac1c-fa9cc4272540';
  $display->content['new-be4d2c90-1b31-4501-ac1c-fa9cc4272540'] = $pane;
  $display->panels['contentmain'][6] = 'new-be4d2c90-1b31-4501-ac1c-fa9cc4272540';
  $pane = new stdClass();
  $pane->pid = 'new-485564a6-a0ac-4d07-a7e1-dd320005a8ad';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '485564a6-a0ac-4d07-a7e1-dd320005a8ad';
  $display->content['new-485564a6-a0ac-4d07-a7e1-dd320005a8ad'] = $pane;
  $display->panels['contentmain'][7] = 'new-485564a6-a0ac-4d07-a7e1-dd320005a8ad';
  $pane = new stdClass();
  $pane->pid = 'new-b6852f23-7b06-4da5-9a20-73e958e5634e';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_contacts-sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b6852f23-7b06-4da5-9a20-73e958e5634e';
  $display->content['new-b6852f23-7b06-4da5-9a20-73e958e5634e'] = $pane;
  $display->panels['sidebar'][0] = 'new-b6852f23-7b06-4da5-9a20-73e958e5634e';
  $pane = new stdClass();
  $pane->pid = 'new-f54d9918-a327-406c-8024-e8354aa303f3';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sidebar_reference_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f54d9918-a327-406c-8024-e8354aa303f3';
  $display->content['new-f54d9918-a327-406c-8024-e8354aa303f3'] = $pane;
  $display->panels['sidebar'][1] = 'new-f54d9918-a327-406c-8024-e8354aa303f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_event:default'] = $panelizer;

  return $export;
}
