<?php
/**
 * @file
 * tieto_frontpage.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_frontpage_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_frontpage';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_frontpage:default';
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
  $display->layout = 'frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'row1-sidebar' => NULL,
      'row1-content' => NULL,
      'row2-sidebar' => NULL,
      'row2-content' => NULL,
      'row3-sidebar' => NULL,
      'row3-content' => array(
        'region_columns' => 'region_three_col',
        'region_background' => 'style_background_none',
      ),
    ),
    'row3-content' => array(
      'style' => 'tieto_panel_styles',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '15d9397b-48d8-4685-b3e2-921ffd7b0872';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_frontpage:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8d970df9-134e-4182-b6cd-d86d5e044d7f';
  $pane->panel = 'row1-content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Custom Frontpage Content',
    'title' => 'Custom Frontpage Content',
    'body' => '<p>Loprem Ipsum Dolor Sit Amet</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d970df9-134e-4182-b6cd-d86d5e044d7f';
  $display->content['new-8d970df9-134e-4182-b6cd-d86d5e044d7f'] = $pane;
  $display->panels['row1-content'][0] = 'new-8d970df9-134e-4182-b6cd-d86d5e044d7f';
  $pane = new stdClass();
  $pane->pid = 'new-27be655a-75f2-4f84-b8d2-6a4190db332f';
  $pane->panel = 'row1-sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'What\'s new?',
    'title' => 'What\'s new?',
    'body' => '<p></p><p></p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27be655a-75f2-4f84-b8d2-6a4190db332f';
  $display->content['new-27be655a-75f2-4f84-b8d2-6a4190db332f'] = $pane;
  $display->panels['row1-sidebar'][0] = 'new-27be655a-75f2-4f84-b8d2-6a4190db332f';
  $pane = new stdClass();
  $pane->pid = 'new-d9b77a31-748d-4118-90f8-6e7ddf872b6e';
  $pane->panel = 'row3-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
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
      'pane_highlight_icon' => 'pane_icon_news',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd9b77a31-748d-4118-90f8-6e7ddf872b6e';
  $display->content['new-d9b77a31-748d-4118-90f8-6e7ddf872b6e'] = $pane;
  $display->panels['row3-content'][0] = 'new-d9b77a31-748d-4118-90f8-6e7ddf872b6e';
  $pane = new stdClass();
  $pane->pid = 'new-4af7e9b0-c4c2-490a-8fb3-4ebfc8cc0c9c';
  $pane->panel = 'row3-content';
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
  $pane->uuid = '4af7e9b0-c4c2-490a-8fb3-4ebfc8cc0c9c';
  $display->content['new-4af7e9b0-c4c2-490a-8fb3-4ebfc8cc0c9c'] = $pane;
  $display->panels['row3-content'][1] = 'new-4af7e9b0-c4c2-490a-8fb3-4ebfc8cc0c9c';
  $pane = new stdClass();
  $pane->pid = 'new-51be6cf2-da22-4491-9044-87898599dd3e';
  $pane->panel = 'row3-content';
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
    'link_to_view' => 0,
    'more_link' => NULL,
    'path' => '',
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
  $pane->uuid = '51be6cf2-da22-4491-9044-87898599dd3e';
  $display->content['new-51be6cf2-da22-4491-9044-87898599dd3e'] = $pane;
  $display->panels['row3-content'][2] = 'new-51be6cf2-da22-4491-9044-87898599dd3e';
  $pane = new stdClass();
  $pane->pid = 'new-9797ff49-8b31-4bdc-bb6f-8f3adfc90ea6';
  $pane->panel = 'row3-sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Quick links',
    'title' => 'Quick links',
    'body' => '<p></p><p></p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9797ff49-8b31-4bdc-bb6f-8f3adfc90ea6';
  $display->content['new-9797ff49-8b31-4bdc-bb6f-8f3adfc90ea6'] = $pane;
  $display->panels['row3-sidebar'][0] = 'new-9797ff49-8b31-4bdc-bb6f-8f3adfc90ea6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_frontpage:default'] = $panelizer;

  return $export;
}
