<?php
/**
 * @file
 * tieto_industry_hub_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_industry_hub_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'industry_hub_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:industry_hub_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '.node-type-industry-hub-page .industryhub-container .panel-panel-inner .panel-pane {
    margin-bottom: 0;
    margin-top: 0px;
    overflow: visible;
    position: relative;
}';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Industry',
      'keyword' => 'industry_term',
      'name' => 'entity_from_field:field_industry-node-taxonomy_term',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'industryhub';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => array(
        'region_columns' => 'region_no_col',
        'region_background' => 'style_background_none',
      ),
      'column2' => NULL,
      'footer' => array(
        'region_columns' => 'region_four_col',
        'region_background' => 'style_background_none',
      ),
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
    ),
    'footer' => array(
      'style' => 'tieto_panel_styles',
    ),
    'column1' => array(
      'style' => 'tieto_panel_styles',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'af9c87ad-48d3-4ebe-bb2c-b1f2e9ab4b08';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:industry_hub_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7e607cc6-498d-4e91-a989-778e66a43011';
  $pane->panel = 'column1';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_page_highlights-carousel';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
    'settings' => array(
      'pane_width' => 'pane_span_one_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_none',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7e607cc6-498d-4e91-a989-778e66a43011';
  $display->content['new-7e607cc6-498d-4e91-a989-778e66a43011'] = $pane;
  $display->panels['column1'][0] = 'new-7e607cc6-498d-4e91-a989-778e66a43011';
  $pane = new stdClass();
  $pane->pid = 'new-8016d23d-647d-40df-add6-62e3fbbe7e26';
  $pane->panel = 'column1';
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
    'settings' => array(
      'pane_width' => 'pane_span_two_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_none',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8016d23d-647d-40df-add6-62e3fbbe7e26';
  $display->content['new-8016d23d-647d-40df-add6-62e3fbbe7e26'] = $pane;
  $display->panels['column1'][1] = 'new-8016d23d-647d-40df-add6-62e3fbbe7e26';
  $pane = new stdClass();
  $pane->pid = 'new-f8120410-485f-4894-8ec7-7dd6cfe5e10a';
  $pane->panel = 'column2';
  $pane->type = 'menu_tree';
  $pane->subtype = '_active';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => '_active',
    'parent_mlid' => '_active:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '3',
    'follow' => 'child',
    'depth' => 1,
    'expanded' => 1,
    'sort' => 0,
    'override_title' => 1,
    'override_title_text' => 'Discover more',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_width' => 'pane_span_two_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_none',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f8120410-485f-4894-8ec7-7dd6cfe5e10a';
  $display->content['new-f8120410-485f-4894-8ec7-7dd6cfe5e10a'] = $pane;
  $display->panels['column2'][0] = 'new-f8120410-485f-4894-8ec7-7dd6cfe5e10a';
  $pane = new stdClass();
  $pane->pid = 'new-64334007-6743-4c07-a6c2-232c70232b7b';
  $pane->panel = 'column2';
  $pane->type = 'tieto_industry_hublinks';
  $pane->subtype = 'tieto_industry_hublinks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_width' => 'pane_span_two_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_none',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '64334007-6743-4c07-a6c2-232c70232b7b';
  $display->content['new-64334007-6743-4c07-a6c2-232c70232b7b'] = $pane;
  $display->panels['column2'][1] = 'new-64334007-6743-4c07-a6c2-232c70232b7b';
  $pane = new stdClass();
  $pane->pid = 'new-3f421d1c-582e-43c2-b45d-0ea80599f6a3';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '1',
    'exposed' => array(
      'field_industry_tid' => array(),
      'widget_title' => 'Tieto News',
      'link_to_view' => 1,
      'path' => 'news',
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Tieto News',
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => 1,
    'more_link' => NULL,
    'path' => 'news',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'fields_override' => array(
      'title' => 1,
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_width' => 'pane_span_one_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_news',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3f421d1c-582e-43c2-b45d-0ea80599f6a3';
  $display->content['new-3f421d1c-582e-43c2-b45d-0ea80599f6a3'] = $pane;
  $display->panels['footer'][0] = 'new-3f421d1c-582e-43c2-b45d-0ea80599f6a3';
  $pane = new stdClass();
  $pane->pid = 'new-272e5ab1-a6a0-4859-970c-e3054543beff';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '1',
    'exposed' => array(
      'field_industry_tid' => array(),
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => NULL,
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
    'settings' => array(
      'pane_width' => 'pane_span_one_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_event',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '272e5ab1-a6a0-4859-970c-e3054543beff';
  $display->content['new-272e5ab1-a6a0-4859-970c-e3054543beff'] = $pane;
  $display->panels['footer'][1] = 'new-272e5ab1-a6a0-4859-970c-e3054543beff';
  $pane = new stdClass();
  $pane->pid = 'new-98094b3c-630a-4957-b742-9c2e9e26c8f4';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '1',
    'exposed' => array(
      'field_industry_tid' => array(),
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Customer Cases',
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => 1,
    'more_link' => NULL,
    'path' => 'customer-cases',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'fields_override' => array(
      'title' => 1,
    ),
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_width' => 'pane_span_one_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_topstories',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '98094b3c-630a-4957-b742-9c2e9e26c8f4';
  $display->content['new-98094b3c-630a-4957-b742-9c2e9e26c8f4'] = $pane;
  $display->panels['footer'][2] = 'new-98094b3c-630a-4957-b742-9c2e9e26c8f4';
  $pane = new stdClass();
  $pane->pid = 'new-f87a1c34-fc40-462c-a6f1-df67ce53dfb9';
  $pane->panel = 'footer';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Custom content',
    'title' => '',
    'body' => '',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_width' => 'pane_span_one_col',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_none',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f87a1c34-fc40-462c-a6f1-df67ce53dfb9';
  $display->content['new-f87a1c34-fc40-462c-a6f1-df67ce53dfb9'] = $pane;
  $display->panels['footer'][3] = 'new-f87a1c34-fc40-462c-a6f1-df67ce53dfb9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:industry_hub_page:default'] = $panelizer;

  return $export;
}
