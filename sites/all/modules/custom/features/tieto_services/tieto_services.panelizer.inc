<?php
/**
 * @file
 * tieto_services.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_services_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_service_group_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_service_group_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
      'center' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '121b8f08-d5ff-40ca-862b-e579ee0a7994';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_service_group_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e4d63830-7d0b-4ab4-b597-9f2ddfd17693';
  $pane->panel = 'column1';
  $pane->type = 'menu_tree';
  $pane->subtype = '_active';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => '_active',
    'parent_mlid' => '_active:_active:_active:0',
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
  $pane->uuid = 'e4d63830-7d0b-4ab4-b597-9f2ddfd17693';
  $display->content['new-e4d63830-7d0b-4ab4-b597-9f2ddfd17693'] = $pane;
  $display->panels['column1'][0] = 'new-e4d63830-7d0b-4ab4-b597-9f2ddfd17693';
  $pane = new stdClass();
  $pane->pid = 'new-a4c32239-0877-4a35-b2aa-6558bb273f15';
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
  $pane->uuid = 'a4c32239-0877-4a35-b2aa-6558bb273f15';
  $display->content['new-a4c32239-0877-4a35-b2aa-6558bb273f15'] = $pane;
  $display->panels['column2'][0] = 'new-a4c32239-0877-4a35-b2aa-6558bb273f15';
  $pane = new stdClass();
  $pane->pid = 'new-bfa1c136-9d1d-4a48-abbc-5ee9cd47e7ea';
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
  $pane->uuid = 'bfa1c136-9d1d-4a48-abbc-5ee9cd47e7ea';
  $display->content['new-bfa1c136-9d1d-4a48-abbc-5ee9cd47e7ea'] = $pane;
  $display->panels['column2'][1] = 'new-bfa1c136-9d1d-4a48-abbc-5ee9cd47e7ea';
  $pane = new stdClass();
  $pane->pid = 'new-1929dd3e-ab8e-4ed6-9a12-5773e6b73ad3';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_service_group_page:field_side_elements',
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
  $pane->uuid = '1929dd3e-ab8e-4ed6-9a12-5773e6b73ad3';
  $display->content['new-1929dd3e-ab8e-4ed6-9a12-5773e6b73ad3'] = $pane;
  $display->panels['column2'][2] = 'new-1929dd3e-ab8e-4ed6-9a12-5773e6b73ad3';
  $pane = new stdClass();
  $pane->pid = 'new-dc6b3ff9-c510-47dc-a49d-f93b80b4f313';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_service_group_page:field_side_elements',
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
  $pane->uuid = 'dc6b3ff9-c510-47dc-a49d-f93b80b4f313';
  $display->content['new-dc6b3ff9-c510-47dc-a49d-f93b80b4f313'] = $pane;
  $display->panels['column2'][3] = 'new-dc6b3ff9-c510-47dc-a49d-f93b80b4f313';
  $pane = new stdClass();
  $pane->pid = 'new-0caf67c3-55cb-4faf-bd67-1dcb4bbfc019';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_service_group_page:field_side_elements',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0caf67c3-55cb-4faf-bd67-1dcb4bbfc019';
  $display->content['new-0caf67c3-55cb-4faf-bd67-1dcb4bbfc019'] = $pane;
  $display->panels['column2'][4] = 'new-0caf67c3-55cb-4faf-bd67-1dcb4bbfc019';
  $pane = new stdClass();
  $pane->pid = 'new-8a146198-07fb-4278-b7a8-9bb70723aa8d';
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
  $pane->uuid = '8a146198-07fb-4278-b7a8-9bb70723aa8d';
  $display->content['new-8a146198-07fb-4278-b7a8-9bb70723aa8d'] = $pane;
  $display->panels['column2'][5] = 'new-8a146198-07fb-4278-b7a8-9bb70723aa8d';
  $pane = new stdClass();
  $pane->pid = 'new-b141234d-8764-4c04-907f-baf174a20459';
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
  $pane->uuid = 'b141234d-8764-4c04-907f-baf174a20459';
  $display->content['new-b141234d-8764-4c04-907f-baf174a20459'] = $pane;
  $display->panels['contentmain'][0] = 'new-b141234d-8764-4c04-907f-baf174a20459';
  $pane = new stdClass();
  $pane->pid = 'new-37d6aba9-46a1-4e93-9337-b51c5ea00f6e';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_atom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'title',
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
  $pane->uuid = '37d6aba9-46a1-4e93-9337-b51c5ea00f6e';
  $display->content['new-37d6aba9-46a1-4e93-9337-b51c5ea00f6e'] = $pane;
  $display->panels['contentmain'][1] = 'new-37d6aba9-46a1-4e93-9337-b51c5ea00f6e';
  $pane = new stdClass();
  $pane->pid = 'new-ef8b8021-fdae-40d9-ae45-4756df9d1953';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_caption';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
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
  $pane->uuid = 'ef8b8021-fdae-40d9-ae45-4756df9d1953';
  $display->content['new-ef8b8021-fdae-40d9-ae45-4756df9d1953'] = $pane;
  $display->panels['contentmain'][2] = 'new-ef8b8021-fdae-40d9-ae45-4756df9d1953';
  $pane = new stdClass();
  $pane->pid = 'new-157d554b-8c88-487f-8af3-371c7982c42f';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '157d554b-8c88-487f-8af3-371c7982c42f';
  $display->content['new-157d554b-8c88-487f-8af3-371c7982c42f'] = $pane;
  $display->panels['contentmain'][3] = 'new-157d554b-8c88-487f-8af3-371c7982c42f';
  $pane = new stdClass();
  $pane->pid = 'new-031bac4a-c671-432a-8528-8c94ea71f2f6';
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
  $pane->uuid = '031bac4a-c671-432a-8528-8c94ea71f2f6';
  $display->content['new-031bac4a-c671-432a-8528-8c94ea71f2f6'] = $pane;
  $display->panels['contentmain'][4] = 'new-031bac4a-c671-432a-8528-8c94ea71f2f6';
  $pane = new stdClass();
  $pane->pid = 'new-753ca8f0-ea79-4793-923d-58b3d0b8fe26';
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
  $pane->uuid = '753ca8f0-ea79-4793-923d-58b3d0b8fe26';
  $display->content['new-753ca8f0-ea79-4793-923d-58b3d0b8fe26'] = $pane;
  $display->panels['contentmain'][5] = 'new-753ca8f0-ea79-4793-923d-58b3d0b8fe26';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_service_group_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_service_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_service_page:default';
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
  $display->uuid = 'cabb3d7d-7d38-40a2-9d2d-76fd553f86ca';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_service_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-59281415-a8ba-4d16-a45c-205f95bc9830';
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
  $pane->uuid = '59281415-a8ba-4d16-a45c-205f95bc9830';
  $display->content['new-59281415-a8ba-4d16-a45c-205f95bc9830'] = $pane;
  $display->panels['column1'][0] = 'new-59281415-a8ba-4d16-a45c-205f95bc9830';
  $pane = new stdClass();
  $pane->pid = 'new-ecbe3f7a-c8cb-4b39-986c-b2374089d415';
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
  $pane->uuid = 'ecbe3f7a-c8cb-4b39-986c-b2374089d415';
  $display->content['new-ecbe3f7a-c8cb-4b39-986c-b2374089d415'] = $pane;
  $display->panels['column2'][0] = 'new-ecbe3f7a-c8cb-4b39-986c-b2374089d415';
  $pane = new stdClass();
  $pane->pid = 'new-b2efe630-562a-481d-bbca-ad74ba34cec4';
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
  $pane->uuid = 'b2efe630-562a-481d-bbca-ad74ba34cec4';
  $display->content['new-b2efe630-562a-481d-bbca-ad74ba34cec4'] = $pane;
  $display->panels['column2'][1] = 'new-b2efe630-562a-481d-bbca-ad74ba34cec4';
  $pane = new stdClass();
  $pane->pid = 'new-e5e746d8-0ed4-4eef-be48-4c578bc8ea6f';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-news';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_service_page:field_side_elements',
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
  $pane->uuid = 'e5e746d8-0ed4-4eef-be48-4c578bc8ea6f';
  $display->content['new-e5e746d8-0ed4-4eef-be48-4c578bc8ea6f'] = $pane;
  $display->panels['column2'][2] = 'new-e5e746d8-0ed4-4eef-be48-4c578bc8ea6f';
  $pane = new stdClass();
  $pane->pid = 'new-46beb9bc-4652-47c2-9266-698038afe4b8';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_service_page:field_side_elements',
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
  $pane->uuid = '46beb9bc-4652-47c2-9266-698038afe4b8';
  $display->content['new-46beb9bc-4652-47c2-9266-698038afe4b8'] = $pane;
  $display->panels['column2'][3] = 'new-46beb9bc-4652-47c2-9266-698038afe4b8';
  $pane = new stdClass();
  $pane->pid = 'new-c43f15dd-b38d-4b78-bfb7-055881cf2888';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-top_stories';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_service_page:field_side_elements',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c43f15dd-b38d-4b78-bfb7-055881cf2888';
  $display->content['new-c43f15dd-b38d-4b78-bfb7-055881cf2888'] = $pane;
  $display->panels['column2'][4] = 'new-c43f15dd-b38d-4b78-bfb7-055881cf2888';
  $pane = new stdClass();
  $pane->pid = 'new-708b98ab-22dc-4232-8c3c-fba6b3ec2bcf';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tieto_highlights-insights_and_opinions';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:tieto_service_page:field_side_elements',
        'settings' => array(
          'field_side_elements' => array(
            'und' => array(
              0 => array(
                'value' => 'insights_and_opinions',
              ),
            ),
          ),
          'field_side_elements_value' => array(
            0 => 'insights_and_opinions',
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
  $pane->uuid = '708b98ab-22dc-4232-8c3c-fba6b3ec2bcf';
  $display->content['new-708b98ab-22dc-4232-8c3c-fba6b3ec2bcf'] = $pane;
  $display->panels['column2'][5] = 'new-708b98ab-22dc-4232-8c3c-fba6b3ec2bcf';
  $pane = new stdClass();
  $pane->pid = 'new-b053e6fb-14b2-40d9-8a69-3e848cab5c9c';
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
  $pane->uuid = 'b053e6fb-14b2-40d9-8a69-3e848cab5c9c';
  $display->content['new-b053e6fb-14b2-40d9-8a69-3e848cab5c9c'] = $pane;
  $display->panels['contentmain'][0] = 'new-b053e6fb-14b2-40d9-8a69-3e848cab5c9c';
  $pane = new stdClass();
  $pane->pid = 'new-0942ee72-4cbc-4612-819f-968a6d582999';
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
  $pane->uuid = '0942ee72-4cbc-4612-819f-968a6d582999';
  $display->content['new-0942ee72-4cbc-4612-819f-968a6d582999'] = $pane;
  $display->panels['contentmain'][1] = 'new-0942ee72-4cbc-4612-819f-968a6d582999';
  $pane = new stdClass();
  $pane->pid = 'new-75845baa-6240-4f73-bbaa-8f1995dc78c6';
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
  $pane->uuid = '75845baa-6240-4f73-bbaa-8f1995dc78c6';
  $display->content['new-75845baa-6240-4f73-bbaa-8f1995dc78c6'] = $pane;
  $display->panels['contentmain'][2] = 'new-75845baa-6240-4f73-bbaa-8f1995dc78c6';
  $pane = new stdClass();
  $pane->pid = 'new-3b9c5625-2c68-49b1-9a41-07f9fff425e7';
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
  $pane->uuid = '3b9c5625-2c68-49b1-9a41-07f9fff425e7';
  $display->content['new-3b9c5625-2c68-49b1-9a41-07f9fff425e7'] = $pane;
  $display->panels['contentmain'][3] = 'new-3b9c5625-2c68-49b1-9a41-07f9fff425e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_service_page:default'] = $panelizer;

  return $export;
}
