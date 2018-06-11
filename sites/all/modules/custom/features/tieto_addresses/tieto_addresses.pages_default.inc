<?php
/**
 * @file
 * tieto_addresses.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tieto_addresses_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_page_addresses_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'page_addresses';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Page Addresses',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = '';
  $display->uuid = '0f5cc5fa-d3d2-47b1-af78-2d68f9c5c12e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_page_addresses_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-df0ddce6-6ff1-494f-a70b-6e2f60ee25a4';
  $pane->panel = 'contentmain';
  $pane->type = 'views';
  $pane->subtype = 'addresses';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
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
  $pane->uuid = 'df0ddce6-6ff1-494f-a70b-6e2f60ee25a4';
  $display->content['new-df0ddce6-6ff1-494f-a70b-6e2f60ee25a4'] = $pane;
  $display->panels['contentmain'][0] = 'new-df0ddce6-6ff1-494f-a70b-6e2f60ee25a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_page_addresses_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function tieto_addresses_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_addresses';
  $page->task = 'page';
  $page->admin_title = 'Page Addresses';
  $page->admin_description = '';
  $page->path = 'addresses';
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
  $handler->name = 'page_page_addresses_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'page_addresses';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Query country',
        'keyword' => 'query_country',
        'name' => 'query_string',
        'key' => 'country',
        'fallback_value' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
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
  $display->title = 'Addresses';
  $display->uuid = '0520dcdd-c641-4897-8c43-83ce16df0f1a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_addresses_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b019d6cf-d824-49a2-9afa-bedf0b9a8a21';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'views-230b594481d6ee8fad0731a51afaf5cc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
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
  $pane->uuid = 'b019d6cf-d824-49a2-9afa-bedf0b9a8a21';
  $display->content['new-b019d6cf-d824-49a2-9afa-bedf0b9a8a21'] = $pane;
  $display->panels['contentmain'][0] = 'new-b019d6cf-d824-49a2-9afa-bedf0b9a8a21';
  $pane = new stdClass();
  $pane->pid = 'new-2890c0e0-d8de-490e-af6c-db721346e3bc';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'addresses-panel_pane_addresses';
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
  $pane->uuid = '2890c0e0-d8de-490e-af6c-db721346e3bc';
  $display->content['new-2890c0e0-d8de-490e-af6c-db721346e3bc'] = $pane;
  $display->panels['contentmain'][1] = 'new-2890c0e0-d8de-490e-af6c-db721346e3bc';
  $pane = new stdClass();
  $pane->pid = 'new-df69f6f1-8c6a-4227-a9a7-adeee51580ed';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_contacts-country';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_query_string_1',
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
  $pane->uuid = 'df69f6f1-8c6a-4227-a9a7-adeee51580ed';
  $display->content['new-df69f6f1-8c6a-4227-a9a7-adeee51580ed'] = $pane;
  $display->panels['sidebar'][0] = 'new-df69f6f1-8c6a-4227-a9a7-adeee51580ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_addresses'] = $page;

  return $pages;

}
