<?php
/**
 * @file
 * tieto_top_story.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_top_story_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_customer_reference_case';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_customer_reference_case:default';
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
  $display->title = '%node:title';
  $display->uuid = '3b7b0a0e-9b4c-43fa-a57f-652f17e22792';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_customer_reference_case:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-35183e58-2cda-4a6e-adef-04f13b06e7ca';
  $pane->panel = 'contentmain';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
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
  $pane->uuid = '35183e58-2cda-4a6e-adef-04f13b06e7ca';
  $display->content['new-35183e58-2cda-4a6e-adef-04f13b06e7ca'] = $pane;
  $display->panels['contentmain'][0] = 'new-35183e58-2cda-4a6e-adef-04f13b06e7ca';
  $pane = new stdClass();
  $pane->pid = 'new-a18011aa-86b6-4e06-9358-da9c24d549c8';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_punchline';
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a18011aa-86b6-4e06-9358-da9c24d549c8';
  $display->content['new-a18011aa-86b6-4e06-9358-da9c24d549c8'] = $pane;
  $display->panels['contentmain'][1] = 'new-a18011aa-86b6-4e06-9358-da9c24d549c8';
  $pane = new stdClass();
  $pane->pid = 'new-267f6f3b-d3c5-42bb-9960-b3fbade9c2e1';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ingress';
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '267f6f3b-d3c5-42bb-9960-b3fbade9c2e1';
  $display->content['new-267f6f3b-d3c5-42bb-9960-b3fbade9c2e1'] = $pane;
  $display->panels['contentmain'][2] = 'new-267f6f3b-d3c5-42bb-9960-b3fbade9c2e1';
  $pane = new stdClass();
  $pane->pid = 'new-f9d288ef-8319-4b88-a8d1-72011161dd17';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_atom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'sdl_editor_representation',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
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
      'pane_width' => 'pane_span_unspecified',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_none',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f9d288ef-8319-4b88-a8d1-72011161dd17';
  $display->content['new-f9d288ef-8319-4b88-a8d1-72011161dd17'] = $pane;
  $display->panels['contentmain'][3] = 'new-f9d288ef-8319-4b88-a8d1-72011161dd17';
  $pane = new stdClass();
  $pane->pid = 'new-6cf7ed7b-04ec-4ec5-b8b4-b6221837e744';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_caption';
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
    'override_title' => 1,
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6cf7ed7b-04ec-4ec5-b8b4-b6221837e744';
  $display->content['new-6cf7ed7b-04ec-4ec5-b8b4-b6221837e744'] = $pane;
  $display->panels['contentmain'][4] = 'new-6cf7ed7b-04ec-4ec5-b8b4-b6221837e744';
  $pane = new stdClass();
  $pane->pid = 'new-f19683d3-32eb-47e1-a26f-9f2134385a49';
  $pane->panel = 'contentmain';
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'f19683d3-32eb-47e1-a26f-9f2134385a49';
  $display->content['new-f19683d3-32eb-47e1-a26f-9f2134385a49'] = $pane;
  $display->panels['contentmain'][5] = 'new-f19683d3-32eb-47e1-a26f-9f2134385a49';
  $pane = new stdClass();
  $pane->pid = 'new-292a039c-4e3b-4eef-b646-fe2506430cdc';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '292a039c-4e3b-4eef-b646-fe2506430cdc';
  $display->content['new-292a039c-4e3b-4eef-b646-fe2506430cdc'] = $pane;
  $display->panels['contentmain'][6] = 'new-292a039c-4e3b-4eef-b646-fe2506430cdc';
  $pane = new stdClass();
  $pane->pid = 'new-d5c718be-27fe-4c90-80ac-51f13151e4ca';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_contacts-sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd5c718be-27fe-4c90-80ac-51f13151e4ca';
  $display->content['new-d5c718be-27fe-4c90-80ac-51f13151e4ca'] = $pane;
  $display->panels['sidebar'][0] = 'new-d5c718be-27fe-4c90-80ac-51f13151e4ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_customer_reference_case:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_top_story';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_top_story:default';
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
  $display->title = '%node:title';
  $display->uuid = 'ecce10f6-b1e7-4430-b0ea-1b0354cbc288';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_top_story:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-df3ff09d-18a8-4e77-a213-6e3a7871d72b';
  $pane->panel = 'contentmain';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
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
  $pane->uuid = 'df3ff09d-18a8-4e77-a213-6e3a7871d72b';
  $display->content['new-df3ff09d-18a8-4e77-a213-6e3a7871d72b'] = $pane;
  $display->panels['contentmain'][0] = 'new-df3ff09d-18a8-4e77-a213-6e3a7871d72b';
  $pane = new stdClass();
  $pane->pid = 'new-4beb36f5-12a8-468e-91b5-08d8bf7ed5ae';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ingress';
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4beb36f5-12a8-468e-91b5-08d8bf7ed5ae';
  $display->content['new-4beb36f5-12a8-468e-91b5-08d8bf7ed5ae'] = $pane;
  $display->panels['contentmain'][1] = 'new-4beb36f5-12a8-468e-91b5-08d8bf7ed5ae';
  $pane = new stdClass();
  $pane->pid = 'new-a0278fff-90d6-4be0-8daf-e2bcc2b80f3b';
  $pane->panel = 'contentmain';
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
    'context' => 'panelizer',
    'override_title' => 1,
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a0278fff-90d6-4be0-8daf-e2bcc2b80f3b';
  $display->content['new-a0278fff-90d6-4be0-8daf-e2bcc2b80f3b'] = $pane;
  $display->panels['contentmain'][2] = 'new-a0278fff-90d6-4be0-8daf-e2bcc2b80f3b';
  $pane = new stdClass();
  $pane->pid = 'new-3afe9bda-a5fa-4935-a262-bc5eea0c098c';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3afe9bda-a5fa-4935-a262-bc5eea0c098c';
  $display->content['new-3afe9bda-a5fa-4935-a262-bc5eea0c098c'] = $pane;
  $display->panels['contentmain'][3] = 'new-3afe9bda-a5fa-4935-a262-bc5eea0c098c';
  $pane = new stdClass();
  $pane->pid = 'new-3f3e3283-dbb3-4b6c-a657-f4f354344d8b';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_contacts-sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3f3e3283-dbb3-4b6c-a657-f4f354344d8b';
  $display->content['new-3f3e3283-dbb3-4b6c-a657-f4f354344d8b'] = $pane;
  $display->panels['sidebar'][0] = 'new-3f3e3283-dbb3-4b6c-a657-f4f354344d8b';
  $pane = new stdClass();
  $pane->pid = 'new-f4896c4f-5e83-40dd-830b-10d56f440c11';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sidebar_reference_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f4896c4f-5e83-40dd-830b-10d56f440c11';
  $display->content['new-f4896c4f-5e83-40dd-830b-10d56f440c11'] = $pane;
  $display->panels['sidebar'][1] = 'new-f4896c4f-5e83-40dd-830b-10d56f440c11';
  $pane = new stdClass();
  $pane->pid = 'new-63bfa424-a074-4ef7-80ae-fe9dd9011280';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_top_story:field_side_elements',
        'settings' => array(
          'field_side_elements' => array(
            'und' => array(
              0 => array(
                'value' => 'news',
              ),
            ),
          ),
          'field_side_elements_value' => array(
            'news' => 'news',
            'events' => NULL,
            'top_stories' => NULL,
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'items_per_page' => '4',
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '63bfa424-a074-4ef7-80ae-fe9dd9011280';
  $display->content['new-63bfa424-a074-4ef7-80ae-fe9dd9011280'] = $pane;
  $display->panels['sidebar'][2] = 'new-63bfa424-a074-4ef7-80ae-fe9dd9011280';
  $pane = new stdClass();
  $pane->pid = 'new-e0b44ea9-6acb-46c9-a784-a08e2d4ae6c7';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_top_story:field_side_elements',
        'settings' => array(
          'field_side_elements' => array(
            'und' => array(
              0 => array(
                'value' => 'events',
              ),
            ),
          ),
          'field_side_elements_value' => array(
            'events' => 'events',
            'news' => NULL,
            'top_stories' => NULL,
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'items_per_page' => '4',
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e0b44ea9-6acb-46c9-a784-a08e2d4ae6c7';
  $display->content['new-e0b44ea9-6acb-46c9-a784-a08e2d4ae6c7'] = $pane;
  $display->panels['sidebar'][3] = 'new-e0b44ea9-6acb-46c9-a784-a08e2d4ae6c7';
  $pane = new stdClass();
  $pane->pid = 'new-9d9830a2-81f3-4728-b7a8-d8146977c361';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_top_story:field_side_elements',
        'settings' => array(
          'field_side_elements' => array(
            'und' => array(
              0 => array(
                'value' => 'top_stories',
              ),
            ),
          ),
          'field_side_elements_value' => array(
            'top_stories' => 'top_stories',
            'news' => NULL,
            'events' => NULL,
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'items_per_page' => '4',
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9d9830a2-81f3-4728-b7a8-d8146977c361';
  $display->content['new-9d9830a2-81f3-4728-b7a8-d8146977c361'] = $pane;
  $display->panels['sidebar'][4] = 'new-9d9830a2-81f3-4728-b7a8-d8146977c361';
  $pane = new stdClass();
  $pane->pid = 'new-e5ee4a9d-5e92-456b-b5b2-ec7205733700';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-insights_and_opinions';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_top_story:field_side_elements',
        'settings' => array(
          'field_side_elements' => array(
            'und' => array(
              0 => array(
                'value' => 'insights_and_opinions',
              ),
            ),
          ),
          'field_side_elements_value' => array(
            'insights_and_opinions' => 'insights_and_opinions',
            'news' => NULL,
            'events' => NULL,
            'top_stories' => NULL,
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'link_to_view' => 0,
    'items_per_page' => '5',
    'path' => '',
    'fields_override' => array(
      'title' => 1,
    ),
    'exposed' => array(
      'field_industry_tid' => array(),
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Insights and opinions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e5ee4a9d-5e92-456b-b5b2-ec7205733700';
  $display->content['new-e5ee4a9d-5e92-456b-b5b2-ec7205733700'] = $pane;
  $display->panels['sidebar'][5] = 'new-e5ee4a9d-5e92-456b-b5b2-ec7205733700';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_top_story:default'] = $panelizer;

  return $export;
}
