<?php
/**
 * @file
 * tieto_global_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tieto_global_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search',
    'panels_breadcrumbs_paths' => 'search',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bartlett';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => array(
        'active' => '0',
        'autoHeight' => 0,
        'clearStyle' => 1,
        'collapsible' => 1,
        'event' => 'click',
        'fillSpace' => 0,
        'navigation' => 0,
      ),
      'contentmain' => NULL,
      'column1' => array(
        'active' => '0',
        'autoHeight' => 0,
        'clearStyle' => 1,
        'collapsible' => 1,
        'event' => 'click',
        'fillSpace' => 0,
        'navigation' => 0,
      ),
      'column2' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
    'column1' => array(
      'style' => 'panopoly_accordion',
    ),
    'sidebar' => array(
      'style' => 'panopoly_accordion',
    ),
  );
  $display->cache = array();
  $display->title = 'Search %keywords:html_safe';
  $display->uuid = 'f3340c55-bbae-4e41-bb6f-b90a06303bf4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52050a74-c46a-433f-b1be-6915ad5a28ed';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
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
    $pane->uuid = '52050a74-c46a-433f-b1be-6915ad5a28ed';
    $display->content['new-52050a74-c46a-433f-b1be-6915ad5a28ed'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-52050a74-c46a-433f-b1be-6915ad5a28ed';
    $pane = new stdClass();
    $pane->pid = 'new-77fe5b4f-c69c-4351-a408-919bd18f429c';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'block';
    $pane->subtype = 'views-b3b8101dcff870d9b59e936365a95cff';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container-inline',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77fe5b4f-c69c-4351-a408-919bd18f429c';
    $display->content['new-77fe5b4f-c69c-4351-a408-919bd18f429c'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-77fe5b4f-c69c-4351-a408-919bd18f429c';
    $pane = new stdClass();
    $pane->pid = 'new-13438120-d6ad-475c-926b-562ed6c51ca8';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'tieto_node_solr_search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_string_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '13438120-d6ad-475c-926b-562ed6c51ca8';
    $display->content['new-13438120-d6ad-475c-926b-562ed6c51ca8'] = $pane;
    $display->panels['contentcolumn1'][2] = 'new-13438120-d6ad-475c-926b-562ed6c51ca8';
    $pane = new stdClass();
    $pane->pid = 'new-d844d2ff-8e23-4072-b70b-ffa1115ab41d';
    $pane->panel = 'contentheader';
    $pane->type = 'search_form';
    $pane->subtype = 'search_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'context' => 'argument_string_1',
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
    $pane->uuid = 'd844d2ff-8e23-4072-b70b-ffa1115ab41d';
    $display->content['new-d844d2ff-8e23-4072-b70b-ffa1115ab41d'] = $pane;
    $display->panels['contentheader'][0] = 'new-d844d2ff-8e23-4072-b70b-ffa1115ab41d';
    $pane = new stdClass();
    $pane->pid = 'new-78b4228b-bba8-4cbf-8f8b-f1ac0acaf7ac';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-tHLA8Eu0cnF5RmwlHW1Q0jB4kiSKBxDt';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'By country',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78b4228b-bba8-4cbf-8f8b-f1ac0acaf7ac';
    $display->content['new-78b4228b-bba8-4cbf-8f8b-f1ac0acaf7ac'] = $pane;
    $display->panels['sidebar'][0] = 'new-78b4228b-bba8-4cbf-8f8b-f1ac0acaf7ac';
    $pane = new stdClass();
    $pane->pid = 'new-364efa7b-f4ef-44ab-b13f-811fd0092ebe';
    $pane->panel = 'sidebar';
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
    $pane->uuid = '364efa7b-f4ef-44ab-b13f-811fd0092ebe';
    $display->content['new-364efa7b-f4ef-44ab-b13f-811fd0092ebe'] = $pane;
    $display->panels['sidebar'][1] = 'new-364efa7b-f4ef-44ab-b13f-811fd0092ebe';
    $pane = new stdClass();
    $pane->pid = 'new-3675c2ba-b01f-4ab0-9967-3e2b7a8c16d7';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ozkh0pDkiyawIsSaka2mnuMSfNd2pABP';
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
    $pane->uuid = '3675c2ba-b01f-4ab0-9967-3e2b7a8c16d7';
    $display->content['new-3675c2ba-b01f-4ab0-9967-3e2b7a8c16d7'] = $pane;
    $display->panels['sidebar'][2] = 'new-3675c2ba-b01f-4ab0-9967-3e2b7a8c16d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context'] = $handler;

  return $export;
}
