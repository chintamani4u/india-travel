<?php
/**
 * @file
 * tieto_content_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_content_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_content_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_content_page:default';
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
      'identifier' => 'Landing Page',
      'keyword' => 'landing_page_node',
      'name' => 'entity_from_field:field_landing_page-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Industry',
      'keyword' => 'industry_term',
      'name' => 'entity_from_field:field_industry-node-taxonomy_term',
      'delta' => '0',
      'context' => 'relationship_entity_from_field:field_landing_page-node-node_1',
      'id' => 1,
    ),
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
  $display->title = '%node:title';
  $display->uuid = 'f2074491-47e2-4e03-8cc7-349a24aec6a7';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_content_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-634db30c-e9f1-4c04-b8a5-58d87063f7c1';
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
  $pane->uuid = '634db30c-e9f1-4c04-b8a5-58d87063f7c1';
  $display->content['new-634db30c-e9f1-4c04-b8a5-58d87063f7c1'] = $pane;
  $display->panels['column1'][0] = 'new-634db30c-e9f1-4c04-b8a5-58d87063f7c1';
  $pane = new stdClass();
  $pane->pid = 'new-0ccf0b53-fbba-4a7b-b19e-0367ec5c5956';
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
  $pane->uuid = '0ccf0b53-fbba-4a7b-b19e-0367ec5c5956';
  $display->content['new-0ccf0b53-fbba-4a7b-b19e-0367ec5c5956'] = $pane;
  $display->panels['column2'][0] = 'new-0ccf0b53-fbba-4a7b-b19e-0367ec5c5956';
  $pane = new stdClass();
  $pane->pid = 'new-5c8b46e7-dff2-4596-bef5-e0e8e93bb7a9';
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
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
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
  $pane->uuid = '5c8b46e7-dff2-4596-bef5-e0e8e93bb7a9';
  $display->content['new-5c8b46e7-dff2-4596-bef5-e0e8e93bb7a9'] = $pane;
  $display->panels['column2'][1] = 'new-5c8b46e7-dff2-4596-bef5-e0e8e93bb7a9';
  $pane = new stdClass();
  $pane->pid = 'new-738051f0-e8bc-45ee-9e50-a5774a78227f';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_content_page:field_side_elements',
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
  $pane->uuid = '738051f0-e8bc-45ee-9e50-a5774a78227f';
  $display->content['new-738051f0-e8bc-45ee-9e50-a5774a78227f'] = $pane;
  $display->panels['column2'][2] = 'new-738051f0-e8bc-45ee-9e50-a5774a78227f';
  $pane = new stdClass();
  $pane->pid = 'new-7d44438b-2cb5-47cd-9287-5a8eeb2d4e6e';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_content_page:field_side_elements',
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
  $pane->uuid = '7d44438b-2cb5-47cd-9287-5a8eeb2d4e6e';
  $display->content['new-7d44438b-2cb5-47cd-9287-5a8eeb2d4e6e'] = $pane;
  $display->panels['column2'][3] = 'new-7d44438b-2cb5-47cd-9287-5a8eeb2d4e6e';
  $pane = new stdClass();
  $pane->pid = 'new-d30922c5-73d2-437c-856f-cf2e280978a8';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_content_page:field_side_elements',
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
  $pane->uuid = 'd30922c5-73d2-437c-856f-cf2e280978a8';
  $display->content['new-d30922c5-73d2-437c-856f-cf2e280978a8'] = $pane;
  $display->panels['column2'][4] = 'new-d30922c5-73d2-437c-856f-cf2e280978a8';
  $pane = new stdClass();
  $pane->pid = 'new-557d11be-eb95-4469-b461-0906db7e3d33';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-insights_and_opinions';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_content_page:field_side_elements',
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
  $pane->uuid = '557d11be-eb95-4469-b461-0906db7e3d33';
  $display->content['new-557d11be-eb95-4469-b461-0906db7e3d33'] = $pane;
  $display->panels['column2'][5] = 'new-557d11be-eb95-4469-b461-0906db7e3d33';
  $pane = new stdClass();
  $pane->pid = 'new-786898ac-c476-4c2a-8071-198e259a3394';
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
  $pane->uuid = '786898ac-c476-4c2a-8071-198e259a3394';
  $display->content['new-786898ac-c476-4c2a-8071-198e259a3394'] = $pane;
  $display->panels['contentmain'][0] = 'new-786898ac-c476-4c2a-8071-198e259a3394';
  $pane = new stdClass();
  $pane->pid = 'new-81d53f36-cee1-4d99-9f01-07dbf3ec7296';
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
  $pane->uuid = '81d53f36-cee1-4d99-9f01-07dbf3ec7296';
  $display->content['new-81d53f36-cee1-4d99-9f01-07dbf3ec7296'] = $pane;
  $display->panels['contentmain'][1] = 'new-81d53f36-cee1-4d99-9f01-07dbf3ec7296';
  $pane = new stdClass();
  $pane->pid = 'new-6ede6a52-21fd-410f-8790-84514cfdf1a9';
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
  $pane->uuid = '6ede6a52-21fd-410f-8790-84514cfdf1a9';
  $display->content['new-6ede6a52-21fd-410f-8790-84514cfdf1a9'] = $pane;
  $display->panels['contentmain'][2] = 'new-6ede6a52-21fd-410f-8790-84514cfdf1a9';
  $pane = new stdClass();
  $pane->pid = 'new-ecbbcab2-0b88-43c3-8cda-47527285fed1';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_download';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'download',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ecbbcab2-0b88-43c3-8cda-47527285fed1';
  $display->content['new-ecbbcab2-0b88-43c3-8cda-47527285fed1'] = $pane;
  $display->panels['contentmain'][3] = 'new-ecbbcab2-0b88-43c3-8cda-47527285fed1';
  $pane = new stdClass();
  $pane->pid = 'new-07fc6c4e-c0c8-482a-be76-05c2221e1cba';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '07fc6c4e-c0c8-482a-be76-05c2221e1cba';
  $display->content['new-07fc6c4e-c0c8-482a-be76-05c2221e1cba'] = $pane;
  $display->panels['contentmain'][4] = 'new-07fc6c4e-c0c8-482a-be76-05c2221e1cba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_content_page:default'] = $panelizer;

  return $export;
}
