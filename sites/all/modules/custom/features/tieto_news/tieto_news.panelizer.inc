<?php
/**
 * @file
 * tieto_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tieto_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_news_article';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_news_article:default';
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
      'center' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a8770b5a-8c6f-47aa-83db-e2f64812c11a';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_news_article:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ce47ee71-788a-41d5-8ad8-cd38a63dce82';
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
  $pane->uuid = 'ce47ee71-788a-41d5-8ad8-cd38a63dce82';
  $display->content['new-ce47ee71-788a-41d5-8ad8-cd38a63dce82'] = $pane;
  $display->panels['contentmain'][0] = 'new-ce47ee71-788a-41d5-8ad8-cd38a63dce82';
  $pane = new stdClass();
  $pane->pid = 'new-ee012c00-8a64-4f2c-8f69-5daf7b54ba93';
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
  $pane->uuid = 'ee012c00-8a64-4f2c-8f69-5daf7b54ba93';
  $display->content['new-ee012c00-8a64-4f2c-8f69-5daf7b54ba93'] = $pane;
  $display->panels['contentmain'][1] = 'new-ee012c00-8a64-4f2c-8f69-5daf7b54ba93';
  $pane = new stdClass();
  $pane->pid = 'new-256a1eed-5d39-4e05-b964-09890e6585c1';
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
  $pane->uuid = '256a1eed-5d39-4e05-b964-09890e6585c1';
  $display->content['new-256a1eed-5d39-4e05-b964-09890e6585c1'] = $pane;
  $display->panels['contentmain'][2] = 'new-256a1eed-5d39-4e05-b964-09890e6585c1';
  $pane = new stdClass();
  $pane->pid = 'new-6b928c0f-6094-46b5-9ca1-0ae77956266c';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_news_attachments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
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
  $pane->uuid = '6b928c0f-6094-46b5-9ca1-0ae77956266c';
  $display->content['new-6b928c0f-6094-46b5-9ca1-0ae77956266c'] = $pane;
  $display->panels['contentmain'][3] = 'new-6b928c0f-6094-46b5-9ca1-0ae77956266c';
  $pane = new stdClass();
  $pane->pid = 'new-c568e464-276c-4f3d-9d7a-71e3fc19b4bf';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_release_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'tieto_medium_date',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c568e464-276c-4f3d-9d7a-71e3fc19b4bf';
  $display->content['new-c568e464-276c-4f3d-9d7a-71e3fc19b4bf'] = $pane;
  $display->panels['contentmain'][4] = 'new-c568e464-276c-4f3d-9d7a-71e3fc19b4bf';
  $pane = new stdClass();
  $pane->pid = 'new-88ebd646-c569-4e62-b497-6339bb5be2b3';
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
  $pane->uuid = '88ebd646-c569-4e62-b497-6339bb5be2b3';
  $display->content['new-88ebd646-c569-4e62-b497-6339bb5be2b3'] = $pane;
  $display->panels['contentmain'][5] = 'new-88ebd646-c569-4e62-b497-6339bb5be2b3';
  $pane = new stdClass();
  $pane->pid = 'new-a37afe09-e56c-4e2e-b5f0-ccbfc02420a7';
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
  $pane->uuid = 'a37afe09-e56c-4e2e-b5f0-ccbfc02420a7';
  $display->content['new-a37afe09-e56c-4e2e-b5f0-ccbfc02420a7'] = $pane;
  $display->panels['sidebar'][0] = 'new-a37afe09-e56c-4e2e-b5f0-ccbfc02420a7';
  $pane = new stdClass();
  $pane->pid = 'new-2fb161d3-fed1-47f3-abc7-c0b9f06aedad';
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
  $pane->uuid = '2fb161d3-fed1-47f3-abc7-c0b9f06aedad';
  $display->content['new-2fb161d3-fed1-47f3-abc7-c0b9f06aedad'] = $pane;
  $display->panels['sidebar'][1] = 'new-2fb161d3-fed1-47f3-abc7-c0b9f06aedad';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_news_article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tieto_news_context';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:tieto_news_context:default';
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
  $display->uuid = '1342b1c6-23c8-49e9-b07f-047a92acd7b9';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:tieto_news_context:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-16cc7df3-be0c-4a6f-9209-bee41c0aa3eb';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'industry_news-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      1 => 'relationship_entity_from_field:field_industry-node-taxonomy_term_1',
    ),
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
    'view_settings' => 'nodes',
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
  $pane->uuid = '16cc7df3-be0c-4a6f-9209-bee41c0aa3eb';
  $display->content['new-16cc7df3-be0c-4a6f-9209-bee41c0aa3eb'] = $pane;
  $display->panels['contentmain'][0] = 'new-16cc7df3-be0c-4a6f-9209-bee41c0aa3eb';
  $pane = new stdClass();
  $pane->pid = 'new-0368f5ab-467f-487c-a816-b2c3f3312a3e';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'industry_news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'relationship_entity_from_field:field_industry-node-taxonomy_term_1',
      1 => 'panelizer',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0368f5ab-467f-487c-a816-b2c3f3312a3e';
  $display->content['new-0368f5ab-467f-487c-a816-b2c3f3312a3e'] = $pane;
  $display->panels['contentmain'][1] = 'new-0368f5ab-467f-487c-a816-b2c3f3312a3e';
  $pane = new stdClass();
  $pane->pid = 'new-bd743b25-feda-44a9-a1b6-cb20d4d9a674';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'industry_news-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'relationship_entity_from_field:field_industry-node-taxonomy_term_1',
      1 => 'panelizer',
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
  $pane->uuid = 'bd743b25-feda-44a9-a1b6-cb20d4d9a674';
  $display->content['new-bd743b25-feda-44a9-a1b6-cb20d4d9a674'] = $pane;
  $display->panels['sidebar'][0] = 'new-bd743b25-feda-44a9-a1b6-cb20d4d9a674';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tieto_news_context:default'] = $panelizer;

  return $export;
}
