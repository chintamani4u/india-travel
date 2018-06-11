<?php
/**
 * @file
 * tieto_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tieto_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tieto_news_search';
  $page->task = 'page';
  $page->admin_title = 'Tieto News search';
  $page->admin_description = '';
  $page->path = 'news_old';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tieto_news_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tieto_news_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News',
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'whelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => array(
        'active' => '0',
        'autoHeight' => 0,
        'clearStyle' => 1,
        'collapsible' => 1,
        'event' => 'click',
        'fillSpace' => 0,
        'navigation' => TRUE,
      ),
      'column2' => NULL,
      'contentmain' => NULL,
    ),
    'column1' => array(
      'style' => 'panopoly_accordion',
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = 'ec1e626e-4055-4db5-a20b-9297f368bf45';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_tieto_news_search_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-66e9c06d-c6d0-4159-a3aa-9d7260c9ee82';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-KLbEsCHap6Ma4YA1Dh2vCohkZlr5qieE';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'By type',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '66e9c06d-c6d0-4159-a3aa-9d7260c9ee82';
  $display->content['new-66e9c06d-c6d0-4159-a3aa-9d7260c9ee82'] = $pane;
  $display->panels['column1'][0] = 'new-66e9c06d-c6d0-4159-a3aa-9d7260c9ee82';
  $pane = new stdClass();
  $pane->pid = 'new-0664a580-bfdd-4fa1-965b-7415b1f88f59';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-IfEyHkMyExPFL6wgehOpO8vcEaCuGe0D';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'By industry',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0664a580-bfdd-4fa1-965b-7415b1f88f59';
  $display->content['new-0664a580-bfdd-4fa1-965b-7415b1f88f59'] = $pane;
  $display->panels['column1'][1] = 'new-0664a580-bfdd-4fa1-965b-7415b1f88f59';
  $pane = new stdClass();
  $pane->pid = 'new-350bd109-8d4d-4556-ab7e-57360bc2fae0';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-SQB1mwwJ0Caeh5w1Xz00zWazNW6A0Veg';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'By year',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '350bd109-8d4d-4556-ab7e-57360bc2fae0';
  $display->content['new-350bd109-8d4d-4556-ab7e-57360bc2fae0'] = $pane;
  $display->panels['column1'][2] = 'new-350bd109-8d4d-4556-ab7e-57360bc2fae0';
  $pane = new stdClass();
  $pane->pid = 'new-920d6b1d-82b7-4172-8628-4ed339c6375e';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'current_search-list_of_filters';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter(s)',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '920d6b1d-82b7-4172-8628-4ed339c6375e';
  $display->content['new-920d6b1d-82b7-4172-8628-4ed339c6375e'] = $pane;
  $display->panels['contentmain'][0] = 'new-920d6b1d-82b7-4172-8628-4ed339c6375e';
  $pane = new stdClass();
  $pane->pid = 'new-97baaac9-4aff-45d4-8969-9428c7df3b45';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_news_solr_search-panel_pane_1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '97baaac9-4aff-45d4-8969-9428c7df3b45';
  $display->content['new-97baaac9-4aff-45d4-8969-9428c7df3b45'] = $pane;
  $display->panels['contentmain'][1] = 'new-97baaac9-4aff-45d4-8969-9428c7df3b45';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tieto_news_search'] = $page;

  return $pages;

}
