<?php
/**
 * @file
 * tieto_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tieto_events_solr_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_tieto_node_solr_index';
  $view->human_name = 'Tieto Events SOLR search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'search-results';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'tieto_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Postal Address */
  $handler->display->display_options['fields']['field_event_postal_address']['id'] = 'field_event_postal_address';
  $handler->display->display_options['fields']['field_event_postal_address']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_event_postal_address']['field'] = 'field_event_postal_address';
  $handler->display->display_options['fields']['field_event_postal_address']['label'] = '';
  $handler->display->display_options['fields']['field_event_postal_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Content: Ingress */
  $handler->display->display_options['fields']['field_ingress']['id'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_ingress']['field'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['label'] = '';
  $handler->display->display_options['fields']['field_ingress']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_ingress']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ingress']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Meta description */
  $handler->display->display_options['fields']['field_meta_description']['id'] = 'field_meta_description';
  $handler->display->display_options['fields']['field_meta_description']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_meta_description']['field'] = 'field_meta_description';
  $handler->display->display_options['fields']['field_meta_description']['label'] = '';
  $handler->display->display_options['fields']['field_meta_description']['element_class'] = 'replacement-field_ingress';
  $handler->display->display_options['fields']['field_meta_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meta_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_meta_description']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'replacement-field_ingress';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Sort criterion: Event Date: Start date (indexed) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_event' => 'tieto_event',
  );
  /* Filter criterion: Indexed Content: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  /* Filter criterion: Event Date: Start date (indexed) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['value'] = 'Today';

  /* Display: Event list */
  $handler = $view->new_display('panel_pane', 'Event list', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'search-results';
  $handler->display->display_options['style_options']['wrapper_class'] = 'cal-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'tieto_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Postal Address */
  $handler->display->display_options['fields']['field_event_postal_address']['id'] = 'field_event_postal_address';
  $handler->display->display_options['fields']['field_event_postal_address']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_event_postal_address']['field'] = 'field_event_postal_address';
  $handler->display->display_options['fields']['field_event_postal_address']['label'] = '';
  $handler->display->display_options['fields']['field_event_postal_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_postal_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Content: Ingress */
  $handler->display->display_options['fields']['field_ingress']['id'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_ingress']['field'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['label'] = '';
  $handler->display->display_options['fields']['field_ingress']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_ingress']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Meta description */
  $handler->display->display_options['fields']['field_meta_description']['id'] = 'field_meta_description';
  $handler->display->display_options['fields']['field_meta_description']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_meta_description']['field'] = 'field_meta_description';
  $handler->display->display_options['fields']['field_meta_description']['label'] = '';
  $handler->display->display_options['fields']['field_meta_description']['element_class'] = 'replacement-field_ingress';
  $handler->display->display_options['fields']['field_meta_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meta_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_meta_description']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'replacement-field_ingress';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['pane_category']['name'] = 'Tieto events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Event list */
  $handler = $view->new_display('panel_pane', 'Event list', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'item-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Tieto events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tieto calendar';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'calendar';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Events that Tieto arranges, sponsor or participates in.';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'nothing_1';
  $handler->display->display_options['row_options']['creator_field'] = 'nothing';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'url',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'tieto_short_date_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Postal Address */
  $handler->display->display_options['fields']['field_event_postal_address']['id'] = 'field_event_postal_address';
  $handler->display->display_options['fields']['field_event_postal_address']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_event_postal_address']['field'] = 'field_event_postal_address';
  $handler->display->display_options['fields']['field_event_postal_address']['label'] = '';
  $handler->display->display_options['fields']['field_event_postal_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Content: Ingress */
  $handler->display->display_options['fields']['field_ingress']['id'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_ingress']['field'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['label'] = '';
  $handler->display->display_options['fields']['field_ingress']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_ingress']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: creator */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'creator';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Tieto calendar';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: description */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'description';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_event_date][body]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'calendar/feed';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['tieto_events_solr_search'] = array(
    t('Master'),
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
    t('Event list'),
    t('Tieto events'),
    t('Feed'),
    t('Tieto calendar'),
    t('[field_event_date][body]'),
  );
  $export['tieto_events_solr_search'] = $view;

  return $export;
}
