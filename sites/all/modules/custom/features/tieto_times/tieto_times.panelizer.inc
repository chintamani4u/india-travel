<?php
/**
 * @file
 * tieto_times.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_times_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'magazine_article';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:magazine_article:default';
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
  $display->layout = 'whelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'region_columns' => 'region_no_col',
        'region_background' => 'style_background_white',
      ),
      'middle' => NULL,
      'right' => NULL,
      'column1' => array(
        'region_columns' => 'region_no_col',
        'region_background' => 'style_background_white',
      ),
      'column2' => NULL,
      'contentmain' => NULL,
    ),
    'left' => array(
      'style' => 'tieto_panel_styles',
    ),
    'column1' => array(
      'style' => 'tieto_panel_styles',
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '90a3a85d-b828-4dd3-b4bd-dec02a669182';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:magazine_article:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e7bf4141-a835-4f50-a41d-b79b753afa99';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_magazine_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'e7bf4141-a835-4f50-a41d-b79b753afa99';
  $display->content['new-e7bf4141-a835-4f50-a41d-b79b753afa99'] = $pane;
  $display->panels['column1'][0] = 'new-e7bf4141-a835-4f50-a41d-b79b753afa99';
  $pane = new stdClass();
  $pane->pid = 'new-ef36b4dc-b5e7-4a1c-a20b-80667bd08d3b';
  $pane->panel = 'column2';
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
  $pane->uuid = 'ef36b4dc-b5e7-4a1c-a20b-80667bd08d3b';
  $display->content['new-ef36b4dc-b5e7-4a1c-a20b-80667bd08d3b'] = $pane;
  $display->panels['column2'][0] = 'new-ef36b4dc-b5e7-4a1c-a20b-80667bd08d3b';
  $pane = new stdClass();
  $pane->pid = 'new-a7d6d75a-c282-44de-8489-7675470ef9f1';
  $pane->panel = 'column2';
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
      'edit' => 'Edit',
      'delete' => 'Delete',
      'add' => 'Add',
      'description' => 1,
      'view_mode' => 'full',
    ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a7d6d75a-c282-44de-8489-7675470ef9f1';
  $display->content['new-a7d6d75a-c282-44de-8489-7675470ef9f1'] = $pane;
  $display->panels['column2'][1] = 'new-a7d6d75a-c282-44de-8489-7675470ef9f1';
  $pane = new stdClass();
  $pane->pid = 'new-f5dc19a5-13e7-428c-b916-a8369b8474c3';
  $pane->panel = 'contentmain';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f5dc19a5-13e7-428c-b916-a8369b8474c3';
  $display->content['new-f5dc19a5-13e7-428c-b916-a8369b8474c3'] = $pane;
  $display->panels['contentmain'][0] = 'new-f5dc19a5-13e7-428c-b916-a8369b8474c3';
  $pane = new stdClass();
  $pane->pid = 'new-400fff34-40e4-4bf4-a36a-f5a1c6f60911';
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
  $pane->uuid = '400fff34-40e4-4bf4-a36a-f5a1c6f60911';
  $display->content['new-400fff34-40e4-4bf4-a36a-f5a1c6f60911'] = $pane;
  $display->panels['contentmain'][1] = 'new-400fff34-40e4-4bf4-a36a-f5a1c6f60911';
  $pane = new stdClass();
  $pane->pid = 'new-5650cb01-b696-4f48-a305-81b23c9f05ee';
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
  $pane->uuid = '5650cb01-b696-4f48-a305-81b23c9f05ee';
  $display->content['new-5650cb01-b696-4f48-a305-81b23c9f05ee'] = $pane;
  $display->panels['contentmain'][2] = 'new-5650cb01-b696-4f48-a305-81b23c9f05ee';
  $pane = new stdClass();
  $pane->pid = 'new-a282921a-7acf-4955-9ed7-0c94710831a5';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a282921a-7acf-4955-9ed7-0c94710831a5';
  $display->content['new-a282921a-7acf-4955-9ed7-0c94710831a5'] = $pane;
  $display->panels['contentmain'][3] = 'new-a282921a-7acf-4955-9ed7-0c94710831a5';
  $pane = new stdClass();
  $pane->pid = 'new-0df28e15-9006-4d5d-b1c2-c4a90358c0c4';
  $pane->panel = 'contentmain';
  $pane->type = 'tieto_addthis';
  $pane->subtype = 'tieto_addthis';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0df28e15-9006-4d5d-b1c2-c4a90358c0c4';
  $display->content['new-0df28e15-9006-4d5d-b1c2-c4a90358c0c4'] = $pane;
  $display->panels['contentmain'][4] = 'new-0df28e15-9006-4d5d-b1c2-c4a90358c0c4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:magazine_article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'tieto_times_issue';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:tieto_times_issue:default';
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
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:name';
  $display->uuid = '0e6c270a-7792-41aa-9866-56c1ddee1a09';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:tieto_times_issue:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bed70650-bf03-4fe9-bb81-f8135164fba0';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_times-panel_pane_1';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bed70650-bf03-4fe9-bb81-f8135164fba0';
  $display->content['new-bed70650-bf03-4fe9-bb81-f8135164fba0'] = $pane;
  $display->panels['contentmain'][0] = 'new-bed70650-bf03-4fe9-bb81-f8135164fba0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:tieto_times_issue:default'] = $panelizer;

  return $export;
}
