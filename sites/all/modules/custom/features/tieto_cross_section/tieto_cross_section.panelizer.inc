<?php
/**
 * @file
 * tieto_cross_section.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_cross_section_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'insights_and_opinions_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:insights_and_opinions_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
  $display->title = '%node:title';
  $display->uuid = '42166cb6-ea5e-4c06-935b-d31c8709cd51';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:insights_and_opinions_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-07f1b72f-4b93-4545-93fe-5ca98f0773b9';
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
  $pane->uuid = '07f1b72f-4b93-4545-93fe-5ca98f0773b9';
  $display->content['new-07f1b72f-4b93-4545-93fe-5ca98f0773b9'] = $pane;
  $display->panels['contentmain'][0] = 'new-07f1b72f-4b93-4545-93fe-5ca98f0773b9';
  $pane = new stdClass();
  $pane->pid = 'new-9a3154f0-8258-4d4d-91d0-485fdc104c87';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ingress';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9a3154f0-8258-4d4d-91d0-485fdc104c87';
  $display->content['new-9a3154f0-8258-4d4d-91d0-485fdc104c87'] = $pane;
  $display->panels['contentmain'][1] = 'new-9a3154f0-8258-4d4d-91d0-485fdc104c87';
  $pane = new stdClass();
  $pane->pid = 'new-0101d0be-0cbb-4560-82ef-8d80823d1839';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0101d0be-0cbb-4560-82ef-8d80823d1839';
  $display->content['new-0101d0be-0cbb-4560-82ef-8d80823d1839'] = $pane;
  $display->panels['contentmain'][2] = 'new-0101d0be-0cbb-4560-82ef-8d80823d1839';
  $pane = new stdClass();
  $pane->pid = 'new-f5e2aa18-de3b-4f2a-96de-634301097041';
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
  $pane->uuid = 'f5e2aa18-de3b-4f2a-96de-634301097041';
  $display->content['new-f5e2aa18-de3b-4f2a-96de-634301097041'] = $pane;
  $display->panels['contentmain'][3] = 'new-f5e2aa18-de3b-4f2a-96de-634301097041';
  $pane = new stdClass();
  $pane->pid = 'new-bf7b27ff-82f8-4c95-b38b-c75b49bee450';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_contacts-sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bf7b27ff-82f8-4c95-b38b-c75b49bee450';
  $display->content['new-bf7b27ff-82f8-4c95-b38b-c75b49bee450'] = $pane;
  $display->panels['sidebar'][0] = 'new-bf7b27ff-82f8-4c95-b38b-c75b49bee450';
  $pane = new stdClass();
  $pane->pid = 'new-44c8e8e1-2d45-451a-b49b-37956ef92355';
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
      'edit' => 'Edit',
      'delete' => 'Delete',
      'add' => 'Add',
      'description' => 1,
      'view_mode' => 'full',
    ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '44c8e8e1-2d45-451a-b49b-37956ef92355';
  $display->content['new-44c8e8e1-2d45-451a-b49b-37956ef92355'] = $pane;
  $display->panels['sidebar'][1] = 'new-44c8e8e1-2d45-451a-b49b-37956ef92355';
  $pane = new stdClass();
  $pane->pid = 'new-a00cbd7c-a48f-4bdf-af11-884e54c0aa04';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:insights_and_opinions_page:field_side_elements',
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
    'items_per_page' => '1',
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
    'widget_title' => 'Tieto News',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a00cbd7c-a48f-4bdf-af11-884e54c0aa04';
  $display->content['new-a00cbd7c-a48f-4bdf-af11-884e54c0aa04'] = $pane;
  $display->panels['sidebar'][2] = 'new-a00cbd7c-a48f-4bdf-af11-884e54c0aa04';
  $pane = new stdClass();
  $pane->pid = 'new-d3bc1337-a7aa-4fa1-8fa3-97d7c42c0c82';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:insights_and_opinions_page:field_side_elements',
        'settings' => array(
          'field_side_elements' => array(
            'und' => array(
              0 => array(
                'value' => NULL,
              ),
            ),
          ),
          'field_side_elements_value' => array(
            'news' => NULL,
            'events' => NULL,
            'top_stories' => NULL,
            'insights_and_opinions' => NULL,
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'items_per_page' => '1',
    'exposed' => array(
      'field_industry_tid' => array(),
    ),
    'context' => array(
      0 => 'empty',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd3bc1337-a7aa-4fa1-8fa3-97d7c42c0c82';
  $display->content['new-d3bc1337-a7aa-4fa1-8fa3-97d7c42c0c82'] = $pane;
  $display->panels['sidebar'][3] = 'new-d3bc1337-a7aa-4fa1-8fa3-97d7c42c0c82';
  $pane = new stdClass();
  $pane->pid = 'new-11aa40de-6d77-4fc8-a69e-03995dbc72d8';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:insights_and_opinions_page:field_side_elements',
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
    'items_per_page' => '1',
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
    'widget_title' => 'Customer Cases',
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
  $pane->uuid = '11aa40de-6d77-4fc8-a69e-03995dbc72d8';
  $display->content['new-11aa40de-6d77-4fc8-a69e-03995dbc72d8'] = $pane;
  $display->panels['sidebar'][4] = 'new-11aa40de-6d77-4fc8-a69e-03995dbc72d8';
  $pane = new stdClass();
  $pane->pid = 'new-1243574e-e6e1-4c9d-8471-86f878cae2eb';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-insights_and_opinions';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:insights_and_opinions_page:field_side_elements',
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
  $pane->uuid = '1243574e-e6e1-4c9d-8471-86f878cae2eb';
  $display->content['new-1243574e-e6e1-4c9d-8471-86f878cae2eb'] = $pane;
  $display->panels['sidebar'][5] = 'new-1243574e-e6e1-4c9d-8471-86f878cae2eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:insights_and_opinions_page:default'] = $panelizer;

  return $export;
}
