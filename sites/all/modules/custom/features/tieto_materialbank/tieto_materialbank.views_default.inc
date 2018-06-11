<?php
/**
 * @file
 * tieto_materialbank.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_materialbank_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'materialbank';
  $view->description = 'Atom based public materialbank from SOLR atom index';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_tieto_atom_solr_index';
  $view->human_name = 'Public Materialbank';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Materials';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'sid' => 'sid',
    'title' => 'title',
    'field_material_type' => 'field_material_type',
    'field_date' => 'field_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_material_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Indexed Assets: Asset ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'search_api_index_tieto_atom_solr_index';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid']['link_to_entity'] = 1;
  /* Field: Asset: Rendered Assets */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_scald_atom';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'titlelink';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Indexed Assets: Material type */
  $handler->display->display_options['fields']['field_material_type']['id'] = 'field_material_type';
  $handler->display->display_options['fields']['field_material_type']['table'] = 'search_api_index_tieto_atom_solr_index';
  $handler->display->display_options['fields']['field_material_type']['field'] = 'field_material_type';
  $handler->display->display_options['fields']['field_material_type']['label'] = '';
  $handler->display->display_options['fields']['field_material_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_material_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_material_type']['view_mode'] = 'full';
  /* Field: Indexed Assets: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'search_api_index_tieto_atom_solr_index';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Indexed Assets: Date */
  $handler->display->display_options['sorts']['field_date']['id'] = 'field_date';
  $handler->display->display_options['sorts']['field_date']['table'] = 'search_api_index_tieto_atom_solr_index';
  $handler->display->display_options['sorts']['field_date']['field'] = 'field_date';
  $handler->display->display_options['sorts']['field_date']['order'] = 'DESC';
  /* Filter criterion: Indexed Assets: Publish in Investor material bank */
  $handler->display->display_options['filters']['field_publish_materialbank']['id'] = 'field_publish_materialbank';
  $handler->display->display_options['filters']['field_publish_materialbank']['table'] = 'search_api_index_tieto_atom_solr_index';
  $handler->display->display_options['filters']['field_publish_materialbank']['field'] = 'field_publish_materialbank';
  $handler->display->display_options['filters']['field_publish_materialbank']['value'] = array(
    1 => '1',
  );

  /* Display: Public Materialbank */
  $handler = $view->new_display('panel_pane', 'Public Materialbank', 'public_material_bank');
  $handler->display->display_options['display_description'] = 'Solr Atom based public material bank';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Material Bank';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Public for Investor section */
  $handler = $view->new_display('panel_pane', 'Public for Investor section', 'public_for_investors');
  $handler->display->display_options['display_description'] = 'Solr Atom based public material bank';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Assets: Publish in Investor material bank */
  $handler->display->display_options['filters']['field_publish_materialbank']['id'] = 'field_publish_materialbank';
  $handler->display->display_options['filters']['field_publish_materialbank']['table'] = 'search_api_index_tieto_atom_solr_index';
  $handler->display->display_options['filters']['field_publish_materialbank']['field'] = 'field_publish_materialbank';
  $handler->display->display_options['filters']['field_publish_materialbank']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Assets: Tags */
  $handler->display->display_options['filters']['scald_tags']['id'] = 'scald_tags';
  $handler->display->display_options['filters']['scald_tags']['table'] = 'search_api_index_tieto_atom_solr_index';
  $handler->display->display_options['filters']['scald_tags']['field'] = 'scald_tags';
  $handler->display->display_options['filters']['scald_tags']['value'] = '1387';
  $handler->display->display_options['pane_category']['name'] = 'Material Bank';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['materialbank'] = array(
    t('Master'),
    t('Materials'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('.'),
    t(','),
    t('Public Materialbank'),
    t('Solr Atom based public material bank'),
    t('Material Bank'),
    t('Public for Investor section'),
  );
  $export['materialbank'] = $view;

  return $export;
}
