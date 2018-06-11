<?php
/**
 * @file
 * tieto_landing_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_landing_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_landing_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_landing_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Industry',
      'keyword' => 'industry_term',
      'name' => 'entity_from_field:field_industry-node-taxonomy_term',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'whelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '32300bf1-f387-4f3b-a707-f4a850612813';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_landing_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-42f738ef-3aba-4156-bff4-a87668ef4810';
  $pane->panel = 'column1';
  $pane->type = 'menu_tree';
  $pane->subtype = '_active';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => '_active',
    'parent_mlid' => '_active:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => 0,
    'expanded' => 0,
    'sort' => 0,
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
  $pane->uuid = '42f738ef-3aba-4156-bff4-a87668ef4810';
  $display->content['new-42f738ef-3aba-4156-bff4-a87668ef4810'] = $pane;
  $display->panels['column1'][0] = 'new-42f738ef-3aba-4156-bff4-a87668ef4810';
  $pane = new stdClass();
  $pane->pid = 'new-09e64506-affb-4181-9719-4de12b0bbda3';
  $pane->panel = 'column2';
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
  $pane->uuid = '09e64506-affb-4181-9719-4de12b0bbda3';
  $display->content['new-09e64506-affb-4181-9719-4de12b0bbda3'] = $pane;
  $display->panels['column2'][0] = 'new-09e64506-affb-4181-9719-4de12b0bbda3';
  $pane = new stdClass();
  $pane->pid = 'new-9d0570bd-b5aa-4c19-9552-25ea3b206e30';
  $pane->panel = 'column2';
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
  $pane->uuid = '9d0570bd-b5aa-4c19-9552-25ea3b206e30';
  $display->content['new-9d0570bd-b5aa-4c19-9552-25ea3b206e30'] = $pane;
  $display->panels['column2'][1] = 'new-9d0570bd-b5aa-4c19-9552-25ea3b206e30';
  $pane = new stdClass();
  $pane->pid = 'new-10a6e409-dd58-442e-9c63-de1b0b7c0112';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_landing_page:field_side_elements',
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
  $pane->uuid = '10a6e409-dd58-442e-9c63-de1b0b7c0112';
  $display->content['new-10a6e409-dd58-442e-9c63-de1b0b7c0112'] = $pane;
  $display->panels['column2'][2] = 'new-10a6e409-dd58-442e-9c63-de1b0b7c0112';
  $pane = new stdClass();
  $pane->pid = 'new-546f99ee-0628-40ef-b46f-feb2a7285275';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_landing_page:field_side_elements',
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
  $pane->uuid = '546f99ee-0628-40ef-b46f-feb2a7285275';
  $display->content['new-546f99ee-0628-40ef-b46f-feb2a7285275'] = $pane;
  $display->panels['column2'][3] = 'new-546f99ee-0628-40ef-b46f-feb2a7285275';
  $pane = new stdClass();
  $pane->pid = 'new-283a0408-bfec-4ee0-ab9b-c93b8a65dd5e';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_landing_page:field_side_elements',
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
  $pane->uuid = '283a0408-bfec-4ee0-ab9b-c93b8a65dd5e';
  $display->content['new-283a0408-bfec-4ee0-ab9b-c93b8a65dd5e'] = $pane;
  $display->panels['column2'][4] = 'new-283a0408-bfec-4ee0-ab9b-c93b8a65dd5e';
  $pane = new stdClass();
  $pane->pid = 'new-39637102-a3c4-475b-8a5c-eda9c250a7f8';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-insights_and_opinions';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_landing_page:field_side_elements',
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
  $pane->uuid = '39637102-a3c4-475b-8a5c-eda9c250a7f8';
  $display->content['new-39637102-a3c4-475b-8a5c-eda9c250a7f8'] = $pane;
  $display->panels['column2'][5] = 'new-39637102-a3c4-475b-8a5c-eda9c250a7f8';
  $pane = new stdClass();
  $pane->pid = 'new-26d315a4-18aa-4054-a627-f43fbf229b32';
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
  $pane->uuid = '26d315a4-18aa-4054-a627-f43fbf229b32';
  $display->content['new-26d315a4-18aa-4054-a627-f43fbf229b32'] = $pane;
  $display->panels['contentmain'][0] = 'new-26d315a4-18aa-4054-a627-f43fbf229b32';
  $pane = new stdClass();
  $pane->pid = 'new-70f31b93-939f-444a-808c-717507a017f5';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_page_highlights-carousel';
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
    'settings' => array(
      'pane_width' => 'pane_span_unspecified',
      'pane_background' => 'style_background_white',
      'pane_highlight_icon' => 'pane_icon_none',
    ),
    'style' => 'tieto_panel_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '70f31b93-939f-444a-808c-717507a017f5';
  $display->content['new-70f31b93-939f-444a-808c-717507a017f5'] = $pane;
  $display->panels['contentmain'][1] = 'new-70f31b93-939f-444a-808c-717507a017f5';
  $pane = new stdClass();
  $pane->pid = 'new-93fd30f7-8156-4451-9717-75f8d6b83cf6';
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
  $pane->uuid = '93fd30f7-8156-4451-9717-75f8d6b83cf6';
  $display->content['new-93fd30f7-8156-4451-9717-75f8d6b83cf6'] = $pane;
  $display->panels['contentmain'][2] = 'new-93fd30f7-8156-4451-9717-75f8d6b83cf6';
  $pane = new stdClass();
  $pane->pid = 'new-b6e28fb0-d326-4f19-b84b-941fbc10fefa';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b6e28fb0-d326-4f19-b84b-941fbc10fefa';
  $display->content['new-b6e28fb0-d326-4f19-b84b-941fbc10fefa'] = $pane;
  $display->panels['contentmain'][3] = 'new-b6e28fb0-d326-4f19-b84b-941fbc10fefa';
  $pane = new stdClass();
  $pane->pid = 'new-15c7856b-06f1-44d0-9dca-d09f5e2d3aff';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '15c7856b-06f1-44d0-9dca-d09f5e2d3aff';
  $display->content['new-15c7856b-06f1-44d0-9dca-d09f5e2d3aff'] = $pane;
  $display->panels['contentmain'][4] = 'new-15c7856b-06f1-44d0-9dca-d09f5e2d3aff';
  $pane = new stdClass();
  $pane->pid = 'new-d7c29be5-4595-4aae-bcd2-1d0ccf0f854c';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd7c29be5-4595-4aae-bcd2-1d0ccf0f854c';
  $display->content['new-d7c29be5-4595-4aae-bcd2-1d0ccf0f854c'] = $pane;
  $display->panels['contentmain'][5] = 'new-d7c29be5-4595-4aae-bcd2-1d0ccf0f854c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_landing_page:default'] = $panelizer;

  return $export;
}
