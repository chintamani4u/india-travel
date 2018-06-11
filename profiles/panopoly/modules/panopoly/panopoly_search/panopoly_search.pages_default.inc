<?php
/**
 * @file
 * panopoly_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panopoly_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_search';
  $page->task = 'page';
  $page->admin_title = 'Search Page';
  $page->admin_description = '';
  $page->path = 'search/site/!keywords';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'search content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'keywords' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panopoly_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_search';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Solr Search Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'solr-search-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'solr',
          'settings' => NULL,
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'search_api_index',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search',
    'panels_breadcrumbs_paths' => 'search/site',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search Results';
  $display->uuid = 'c7112e96-94b4-4b7c-9c29-793e757c7629';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aa3f9a17-ed44-49d0-86bf-89f0eca1e36e';
    $pane->panel = 'contentmain';
    $pane->type = 'search_current';
    $pane->subtype = 'search_current';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'advanced',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => FALSE,
      'prompt' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa3f9a17-ed44-49d0-86bf-89f0eca1e36e';
    $display->content['new-aa3f9a17-ed44-49d0-86bf-89f0eca1e36e'] = $pane;
    $display->panels['contentmain'][0] = 'new-aa3f9a17-ed44-49d0-86bf-89f0eca1e36e';
    $pane = new stdClass();
    $pane->pid = 'new-e4e8d748-cf98-48ed-8d63-6873faa7159d';
    $pane->panel = 'contentmain';
    $pane->type = 'search_box';
    $pane->subtype = 'search_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'context' => array(),
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
    $pane->uuid = 'e4e8d748-cf98-48ed-8d63-6873faa7159d';
    $display->content['new-e4e8d748-cf98-48ed-8d63-6873faa7159d'] = $pane;
    $display->panels['contentmain'][1] = 'new-e4e8d748-cf98-48ed-8d63-6873faa7159d';
    $pane = new stdClass();
    $pane->pid = 'new-7f72fc93-85a1-4935-b841-9bc3f071115c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_search-search_solr_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_string_1',
      ),
      'view_mode' => NULL,
      'widget_title' => '',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7f72fc93-85a1-4935-b841-9bc3f071115c';
    $display->content['new-7f72fc93-85a1-4935-b841-9bc3f071115c'] = $pane;
    $display->panels['contentmain'][2] = 'new-7f72fc93-85a1-4935-b841-9bc3f071115c';
    $pane = new stdClass();
    $pane->pid = 'new-3955025d-7668-41d2-a488-7fa9d84bbe5d';
    $pane->panel = 'sidebar';
    $pane->type = 'facet';
    $pane->subtype = 'facet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => 'Filter by Type',
      'delta' => 'Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3955025d-7668-41d2-a488-7fa9d84bbe5d';
    $display->content['new-3955025d-7668-41d2-a488-7fa9d84bbe5d'] = $pane;
    $display->panels['sidebar'][0] = 'new-3955025d-7668-41d2-a488-7fa9d84bbe5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panopoly_search_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_search';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Database Search Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'database-search-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search',
    'panels_breadcrumbs_paths' => 'search/site',
    'panels_breadcrumbs_home' => 1,
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search Results';
  $display->uuid = '343ba6dd-4143-4b62-9749-8de5859b0aa4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9afa8ab-f647-4ca6-88a8-73527e98e223';
    $pane->panel = 'contentmain';
    $pane->type = 'search_current';
    $pane->subtype = 'search_current';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'advanced',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => FALSE,
      'prompt' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9afa8ab-f647-4ca6-88a8-73527e98e223';
    $display->content['new-a9afa8ab-f647-4ca6-88a8-73527e98e223'] = $pane;
    $display->panels['contentmain'][0] = 'new-a9afa8ab-f647-4ca6-88a8-73527e98e223';
    $pane = new stdClass();
    $pane->pid = 'new-193d01cb-a8c7-4257-8788-186c38ef15a8';
    $pane->panel = 'contentmain';
    $pane->type = 'search_box';
    $pane->subtype = 'search_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'context' => array(),
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
    $pane->uuid = '193d01cb-a8c7-4257-8788-186c38ef15a8';
    $display->content['new-193d01cb-a8c7-4257-8788-186c38ef15a8'] = $pane;
    $display->panels['contentmain'][1] = 'new-193d01cb-a8c7-4257-8788-186c38ef15a8';
    $pane = new stdClass();
    $pane->pid = 'new-5e9d6488-b9a0-40da-9abe-a2d3eaac2d42';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_database_search-search_database_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => '',
      'items_per_page' => '15',
      'context' => array(
        0 => 'argument_string_1',
      ),
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'widget_title' => '',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'use_pager' => 1,
      'pager_id' => '0',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5e9d6488-b9a0-40da-9abe-a2d3eaac2d42';
    $display->content['new-5e9d6488-b9a0-40da-9abe-a2d3eaac2d42'] = $pane;
    $display->panels['contentmain'][2] = 'new-5e9d6488-b9a0-40da-9abe-a2d3eaac2d42';
    $pane = new stdClass();
    $pane->pid = 'new-310e5139-7a73-4c49-869e-f0e542857ba3';
    $pane->panel = 'sidebar';
    $pane->type = 'facet';
    $pane->subtype = 'facet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => 'Filter by Type',
      'delta' => '1Cpx6naJU4Y3YvKVc0vcLK7Yo0ahaN0l',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '310e5139-7a73-4c49-869e-f0e542857ba3';
    $display->content['new-310e5139-7a73-4c49-869e-f0e542857ba3'] = $pane;
    $display->panels['sidebar'][0] = 'new-310e5139-7a73-4c49-869e-f0e542857ba3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
