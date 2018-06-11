<?php
/**
 * @file
 * tieto_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tieto_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tieto_event_search';
  $page->task = 'page';
  $page->admin_title = 'Tieto Event search';
  $page->admin_description = '';
  $page->path = 'calendar_old';
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
  $handler->name = 'page_tieto_event_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tieto_event_search';
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
    'panels_breadcrumbs_titles' => 'Tieto Calendar',
    'panels_breadcrumbs_paths' => 'calendar',
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
  $display->title = 'Tieto Calendar';
  $display->uuid = 'eb60fdf8-66dc-419d-a49a-3b77d892efd6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_tieto_event_search_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-24b17ad4-b8ae-40fd-ba64-5b524ee65246';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-t6YOMOxEKkv3ICposNNk8UIrdJ7OpwiL';
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
  $pane->uuid = '24b17ad4-b8ae-40fd-ba64-5b524ee65246';
  $display->content['new-24b17ad4-b8ae-40fd-ba64-5b524ee65246'] = $pane;
  $display->panels['column1'][0] = 'new-24b17ad4-b8ae-40fd-ba64-5b524ee65246';
  $pane = new stdClass();
  $pane->pid = 'new-b7fe4382-d365-483a-9477-4347a4c00719';
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
  $pane->uuid = 'b7fe4382-d365-483a-9477-4347a4c00719';
  $display->content['new-b7fe4382-d365-483a-9477-4347a4c00719'] = $pane;
  $display->panels['column1'][1] = 'new-b7fe4382-d365-483a-9477-4347a4c00719';
  $pane = new stdClass();
  $pane->pid = 'new-c303e648-b0de-4d06-ba62-c411fe96b034';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-WzVJLdXhja8uQ6m1drCwvnlJy1gLlP73';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'By date',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c303e648-b0de-4d06-ba62-c411fe96b034';
  $display->content['new-c303e648-b0de-4d06-ba62-c411fe96b034'] = $pane;
  $display->panels['column1'][2] = 'new-c303e648-b0de-4d06-ba62-c411fe96b034';
  $pane = new stdClass();
  $pane->pid = 'new-968b501c-8fae-4a5e-a30d-eccad51ecb81';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_events_solr_search-panel_pane_1';
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
  $pane->uuid = '968b501c-8fae-4a5e-a30d-eccad51ecb81';
  $display->content['new-968b501c-8fae-4a5e-a30d-eccad51ecb81'] = $pane;
  $display->panels['contentmain'][0] = 'new-968b501c-8fae-4a5e-a30d-eccad51ecb81';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-968b501c-8fae-4a5e-a30d-eccad51ecb81';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tieto_event_search'] = $page;

  return $pages;

}
