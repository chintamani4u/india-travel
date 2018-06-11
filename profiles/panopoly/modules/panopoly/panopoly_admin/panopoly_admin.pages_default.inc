<?php
/**
 * @file
 * panopoly_admin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panopoly_admin_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node Edit Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f57c47eb-a210-4f0c-af0a-00a70718feb7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-179b26e4-c2ac-4173-b4ee-47acfec58104';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '179b26e4-c2ac-4173-b4ee-47acfec58104';
    $display->content['new-179b26e4-c2ac-4173-b4ee-47acfec58104'] = $pane;
    $display->panels['contentmain'][0] = 'new-179b26e4-c2ac-4173-b4ee-47acfec58104';
    $pane = new stdClass();
    $pane->pid = 'new-a4f5facf-45c4-4768-b1ed-f30f59df7bd5';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_path';
    $pane->subtype = 'node_form_path';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'a4f5facf-45c4-4768-b1ed-f30f59df7bd5';
    $display->content['new-a4f5facf-45c4-4768-b1ed-f30f59df7bd5'] = $pane;
    $display->panels['contentmain'][1] = 'new-a4f5facf-45c4-4768-b1ed-f30f59df7bd5';
    $pane = new stdClass();
    $pane->pid = 'new-e594a193-1326-4776-b446-a1986f1af19c';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = 'e594a193-1326-4776-b446-a1986f1af19c';
    $display->content['new-e594a193-1326-4776-b446-a1986f1af19c'] = $pane;
    $display->panels['contentmain'][2] = 'new-e594a193-1326-4776-b446-a1986f1af19c';
    $pane = new stdClass();
    $pane->pid = 'new-77b656cc-54cd-4e4f-bfc6-d8f6ac23d666';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Featured image',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77b656cc-54cd-4e4f-bfc6-d8f6ac23d666';
    $display->content['new-77b656cc-54cd-4e4f-bfc6-d8f6ac23d666'] = $pane;
    $display->panels['sidebar'][0] = 'new-77b656cc-54cd-4e4f-bfc6-d8f6ac23d666';
    $pane = new stdClass();
    $pane->pid = 'new-bfe498ce-7cd0-4f56-a38f-91598d682de5';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Content category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bfe498ce-7cd0-4f56-a38f-91598d682de5';
    $display->content['new-bfe498ce-7cd0-4f56-a38f-91598d682de5'] = $pane;
    $display->panels['sidebar'][1] = 'new-bfe498ce-7cd0-4f56-a38f-91598d682de5';
    $pane = new stdClass();
    $pane->pid = 'new-a81a0c60-b1fc-4823-bc94-c0359452da90';
    $pane->panel = 'sidebar';
    $pane->type = 'panelizer_form_default';
    $pane->subtype = 'panelizer_form_default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a81a0c60-b1fc-4823-bc94-c0359452da90';
    $display->content['new-a81a0c60-b1fc-4823-bc94-c0359452da90'] = $pane;
    $display->panels['sidebar'][2] = 'new-a81a0c60-b1fc-4823-bc94-c0359452da90';
    $pane = new stdClass();
    $pane->pid = 'new-302f3e16-07b6-4821-a9d2-8e57e6678d28';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_menu';
    $pane->subtype = 'node_form_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '302f3e16-07b6-4821-a9d2-8e57e6678d28';
    $display->content['new-302f3e16-07b6-4821-a9d2-8e57e6678d28'] = $pane;
    $display->panels['sidebar'][3] = 'new-302f3e16-07b6-4821-a9d2-8e57e6678d28';
    $pane = new stdClass();
    $pane->pid = 'new-bcf9802f-645e-4c38-aec6-73690f0de418';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'bcf9802f-645e-4c38-aec6-73690f0de418';
    $display->content['new-bcf9802f-645e-4c38-aec6-73690f0de418'] = $pane;
    $display->panels['sidebar'][4] = 'new-bcf9802f-645e-4c38-aec6-73690f0de418';
    $pane = new stdClass();
    $pane->pid = 'new-9587c253-9f97-48a7-b556-74ae1acd9ce0';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_author';
    $pane->subtype = 'node_form_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9587c253-9f97-48a7-b556-74ae1acd9ce0';
    $display->content['new-9587c253-9f97-48a7-b556-74ae1acd9ce0'] = $pane;
    $display->panels['sidebar'][5] = 'new-9587c253-9f97-48a7-b556-74ae1acd9ce0';
    $pane = new stdClass();
    $pane->pid = 'new-524c3f5f-32e1-49a7-ba01-33016ea3a0cd';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '524c3f5f-32e1-49a7-ba01-33016ea3a0cd';
    $display->content['new-524c3f5f-32e1-49a7-ba01-33016ea3a0cd'] = $pane;
    $display->panels['sidebar'][6] = 'new-524c3f5f-32e1-49a7-ba01-33016ea3a0cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e594a193-1326-4776-b446-a1986f1af19c';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}
