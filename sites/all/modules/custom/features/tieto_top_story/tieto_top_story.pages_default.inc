<?php
/**
 * @file
 * tieto_top_story.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tieto_top_story_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tieto_top_story_search_page';
  $page->task = 'page';
  $page->admin_title = 'Tieto Top Story search page';
  $page->admin_description = '';
  $page->path = 'top-stories_old';
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
  $handler->name = 'page_tieto_top_story_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tieto_top_story_search_page';
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
    'panels_breadcrumbs_titles' => 'Top stories',
    'panels_breadcrumbs_paths' => 'top-stories',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'whelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column2' => NULL,
      'column1' => array(
        'active' => '0',
        'autoHeight' => 0,
        'clearStyle' => 1,
        'collapsible' => 1,
        'event' => 'click',
        'fillSpace' => 0,
        'navigation' => TRUE,
      ),
    ),
    'column1' => array(
      'style' => 'panopoly_accordion',
    ),
  );
  $display->cache = array();
  $display->title = 'Top stories';
  $display->uuid = 'b7dd92ce-4e9a-4dfa-96ab-a1e2d4c77316';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_tieto_top_story_search_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f79048c2-fdcb-42af-a91f-3d47906d327a';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f79048c2-fdcb-42af-a91f-3d47906d327a';
  $display->content['new-f79048c2-fdcb-42af-a91f-3d47906d327a'] = $pane;
  $display->panels['column1'][0] = 'new-f79048c2-fdcb-42af-a91f-3d47906d327a';
  $pane = new stdClass();
  $pane->pid = 'new-73cc5d51-c86c-4e48-b707-47164d49d1bb';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-x9D0hNQ9UrE8IrUL8sZRcQH9FNTWiUSr';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'By concept',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '73cc5d51-c86c-4e48-b707-47164d49d1bb';
  $display->content['new-73cc5d51-c86c-4e48-b707-47164d49d1bb'] = $pane;
  $display->panels['column1'][1] = 'new-73cc5d51-c86c-4e48-b707-47164d49d1bb';
  $pane = new stdClass();
  $pane->pid = 'new-4dd1fbe6-ec3e-4f7c-bb96-ba2460cd76bc';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-6xdp7j5MeKuAPokpGoD4eGIs32AnuUYE';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'By technology',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4dd1fbe6-ec3e-4f7c-bb96-ba2460cd76bc';
  $display->content['new-4dd1fbe6-ec3e-4f7c-bb96-ba2460cd76bc'] = $pane;
  $display->panels['column1'][2] = 'new-4dd1fbe6-ec3e-4f7c-bb96-ba2460cd76bc';
  $pane = new stdClass();
  $pane->pid = 'new-11e7cfbf-9686-4b97-874e-9ed159d7a236';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-xmBoRhlXTr0OvKmaT7OyEy9uiwMaYYy1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Product development',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '11e7cfbf-9686-4b97-874e-9ed159d7a236';
  $display->content['new-11e7cfbf-9686-4b97-874e-9ed159d7a236'] = $pane;
  $display->panels['column1'][3] = 'new-11e7cfbf-9686-4b97-874e-9ed159d7a236';
  $pane = new stdClass();
  $pane->pid = 'new-b058f56b-a419-4806-8470-7d2b5a42d29d';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ozkh0pDkiyawIsSaka2mnuMSfNd2pABP';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b058f56b-a419-4806-8470-7d2b5a42d29d';
  $display->content['new-b058f56b-a419-4806-8470-7d2b5a42d29d'] = $pane;
  $display->panels['column1'][4] = 'new-b058f56b-a419-4806-8470-7d2b5a42d29d';
  $pane = new stdClass();
  $pane->pid = 'new-2cfcbee0-28bd-43b3-abc2-577f64872e82';
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
  $pane->uuid = '2cfcbee0-28bd-43b3-abc2-577f64872e82';
  $display->content['new-2cfcbee0-28bd-43b3-abc2-577f64872e82'] = $pane;
  $display->panels['contentmain'][0] = 'new-2cfcbee0-28bd-43b3-abc2-577f64872e82';
  $pane = new stdClass();
  $pane->pid = 'new-e7a765a2-4a4d-4664-988e-c5a88cd85cf5';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_top_story_solr_search-panel_pane_1';
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
  $pane->uuid = 'e7a765a2-4a4d-4664-988e-c5a88cd85cf5';
  $display->content['new-e7a765a2-4a4d-4664-988e-c5a88cd85cf5'] = $pane;
  $display->panels['contentmain'][1] = 'new-e7a765a2-4a4d-4664-988e-c5a88cd85cf5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f79048c2-fdcb-42af-a91f-3d47906d327a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tieto_top_story_search_page'] = $page;

  return $pages;

}
