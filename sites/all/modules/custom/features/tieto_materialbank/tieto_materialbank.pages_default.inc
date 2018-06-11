<?php
/**
 * @file
 * tieto_materialbank.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tieto_materialbank_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'material_bank';
  $page->task = 'page';
  $page->admin_title = 'Material bank';
  $page->admin_description = '';
  $page->path = 'materials';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Material Bank',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_material_bank_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'material_bank';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Main',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bryant';
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
        'navigation' => TRUE,
      ),
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'panopoly_accordion',
    ),
  );
  $display->cache = array();
  $display->title = 'Material bank';
  $display->uuid = '2d38f247-4129-4703-b1ae-9f214fc73c7f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-556c9cca-e4dc-43a6-9a07-e96965d02286';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'current_search-current_materialbank';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '556c9cca-e4dc-43a6-9a07-e96965d02286';
    $display->content['new-556c9cca-e4dc-43a6-9a07-e96965d02286'] = $pane;
    $display->panels['contentmain'][0] = 'new-556c9cca-e4dc-43a6-9a07-e96965d02286';
    $pane = new stdClass();
    $pane->pid = 'new-ff4e479b-8242-408f-9f72-69288758dda4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'materialbank-public_material_bank';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'ff4e479b-8242-408f-9f72-69288758dda4';
    $display->content['new-ff4e479b-8242-408f-9f72-69288758dda4'] = $pane;
    $display->panels['contentmain'][1] = 'new-ff4e479b-8242-408f-9f72-69288758dda4';
    $pane = new stdClass();
    $pane->pid = 'new-4a475682-55cd-4439-b703-b4f32f6ed845';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-2rFyg9mh6QK80HYUw7eeAA0cXrDYgUe8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '4a475682-55cd-4439-b703-b4f32f6ed845';
    $display->content['new-4a475682-55cd-4439-b703-b4f32f6ed845'] = $pane;
    $display->panels['sidebar'][0] = 'new-4a475682-55cd-4439-b703-b4f32f6ed845';
    $pane = new stdClass();
    $pane->pid = 'new-78edcff6-4850-4192-9b8c-72e6e22d62ed';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-cF48uNpSnGyZ5LlJ5eWwF7NLEsQs4C0O';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '78edcff6-4850-4192-9b8c-72e6e22d62ed';
    $display->content['new-78edcff6-4850-4192-9b8c-72e6e22d62ed'] = $pane;
    $display->panels['sidebar'][1] = 'new-78edcff6-4850-4192-9b8c-72e6e22d62ed';
    $pane = new stdClass();
    $pane->pid = 'new-43428703-803b-4598-91b9-94017b9763f8';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-tHLA8Eu0cnF5RmwlHW1Q0jB4kiSKBxDt';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43428703-803b-4598-91b9-94017b9763f8';
    $display->content['new-43428703-803b-4598-91b9-94017b9763f8'] = $pane;
    $display->panels['sidebar'][2] = 'new-43428703-803b-4598-91b9-94017b9763f8';
    $pane = new stdClass();
    $pane->pid = 'new-d599b13d-d57c-4475-9492-0d55df8f16b6';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-NPJeO0qTuhNZbGJZ5h4uFR3uyalmy5CZ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd599b13d-d57c-4475-9492-0d55df8f16b6';
    $display->content['new-d599b13d-d57c-4475-9492-0d55df8f16b6'] = $pane;
    $display->panels['sidebar'][3] = 'new-d599b13d-d57c-4475-9492-0d55df8f16b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['material_bank'] = $page;

  return $pages;

}
