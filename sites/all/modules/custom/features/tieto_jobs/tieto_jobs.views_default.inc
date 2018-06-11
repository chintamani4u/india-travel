<?php
/**
 * @file
 * tieto_jobs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_jobs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jobs_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'jobs feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'jobs feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Job Location (field_jobs_location) */
  $handler->display->display_options['relationships']['field_jobs_location_tid']['id'] = 'field_jobs_location_tid';
  $handler->display->display_options['relationships']['field_jobs_location_tid']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['relationships']['field_jobs_location_tid']['field'] = 'field_jobs_location_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = '';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  /* Field: Content: Application period */
  $handler->display->display_options['fields']['field_jobs_date']['id'] = 'field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['table'] = 'field_data_field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['field'] = 'field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_date']['settings'] = array(
    'format_type' => 'tieto_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_jobs_organization']['id'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['table'] = 'field_data_field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['field'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_organization']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'https://en.tietostage.tieto.com/careers/all-open-jobs?job=[guid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Job Location */
  $handler->display->display_options['fields']['field_jobs_location']['id'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['field'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_location']['delta_offset'] = '0';
  /* Field: Content: Apply URL */
  $handler->display->display_options['fields']['field_apply_url']['id'] = 'field_apply_url';
  $handler->display->display_options['fields']['field_apply_url']['table'] = 'field_data_field_apply_url';
  $handler->display->display_options['fields']['field_apply_url']['field'] = 'field_apply_url';
  $handler->display->display_options['fields']['field_apply_url']['label'] = '';
  $handler->display->display_options['fields']['field_apply_url']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_jobs_vacancy' => 'tieto_jobs_vacancy',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'jobs-feed';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'field_apply_url';
  $handler->display->display_options['row_options']['description_field'] = 'field_jobs_location';
  $handler->display->display_options['row_options']['creator_field'] = 'field_jobs_organization';
  $handler->display->display_options['row_options']['date_field'] = 'field_jobs_date';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'guid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['path'] = 'jobs-feed.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['jobs_feed'] = array(
    t('Master'),
    t('jobs feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_jobs_location'),
    t('https://en.tietostage.tieto.com/careers/all-open-jobs?job=[guid]'),
    t('Page'),
    t('Feed'),
  );
  $export['jobs_feed'] = $view;

  $view = new view();
  $view->name = 'tieto_jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'one-item-slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Järjestä';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Seuraava › ';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Viimeinen » ';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_jobs_id' => 0,
    'title' => 0,
    'field_jobs_organization' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_jobs_id' => 0,
    'title' => 0,
    'field_jobs_organization' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'All open jobs (@total)';
  /* Field: Content: Job ID */
  $handler->display->display_options['fields']['field_jobs_id']['id'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['table'] = 'field_data_field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['field'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_jobs_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '!1?job=[field_jobs_id]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_jobs_organization']['id'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['table'] = 'field_data_field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['field'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_organization']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Jobs Search Page */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Jobs Search Page';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'http://www.tieto.com/careers/all-open-jobs';
  $handler->display->display_options['arguments']['null']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'tieto_jobs_locations' => 'tieto_jobs_locations',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_jobs_vacancy' => 'tieto_jobs_vacancy',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest jobs';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job Area (field_jobs_jobareas) */
  $handler->display->display_options['relationships']['field_jobs_jobareas_tid']['id'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['relationships']['field_jobs_jobareas_tid']['table'] = 'field_data_field_jobs_jobareas';
  $handler->display->display_options['relationships']['field_jobs_jobareas_tid']['field'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Job ID */
  $handler->display->display_options['fields']['field_jobs_id']['id'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['table'] = 'field_data_field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['field'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_jobs_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '!1?job=[field_jobs_id]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_jobs_organization']['id'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['table'] = 'field_data_field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['field'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_organization']['type'] = 'text_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Tieto Jobs';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'null' => array(
      'type' => 'user',
      'context' => 'entity:scald_atom.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Jobs Search Path',
    ),
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:scald_atom.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Location',
    ),
  );
  $translatables['tieto_jobs'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Järjestä'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« Ensimmäinen'),
    t('‹ Edellinen'),
    t('Seuraava › '),
    t('Viimeinen » '),
    t('All open jobs (@total)'),
    t('All'),
    t('Content pane'),
    t('Latest jobs'),
    t('term from field_jobs_jobareas'),
    t('Tieto Jobs'),
  );
  $export['tieto_jobs'] = $view;

  $view = new view();
  $view->name = 'tieto_jobs_job';
  $view->description = 'View to display single job vacancy.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tieto Jobs Job';
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
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Järjestä';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Requested position was not found or application period is over.
';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Apply for this job */
  $handler->display->display_options['fields']['field_jobs_id']['id'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['table'] = 'field_data_field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['field'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['ui_name'] = 'Apply for this job';
  $handler->display->display_options['fields']['field_jobs_id']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['alter']['text'] = 'Apply for this job';
  $handler->display->display_options['fields']['field_jobs_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['alter']['path'] = 'http://jobs.tieto.com/public/vacancies/[field_jobs_id]/applicants/0/review_profile';
  $handler->display->display_options['fields']['field_jobs_id']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_jobs_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<!-- AddToAny BEGIN -->
<div class="a2a_kit a2a_default_style">
<a class="a2a_dd" href="https://www.addtoany.com/share_save">Share this on:</a>
<a class="a2a_button_linkedin"></a>
<a class="a2a_button_twitter"></a>
<a class="a2a_button_facebook"></a>
<a class="a2a_button_google_plus"></a>
</div>
<script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>
</br>
<!-- AddToAny END -->';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Job Location */
  $handler->display->display_options['fields']['field_jobs_location']['id'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['field'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_jobs_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_location']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_location']['delta_offset'] = '0';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_jobs_organization']['id'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['table'] = 'field_data_field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['field'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['hide_empty'] = TRUE;
  /* Field: Content: Form of employment */
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['id'] = 'field_jobs_form_of_employment';
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['table'] = 'field_data_field_jobs_form_of_employment';
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['field'] = 'field_jobs_form_of_employment';
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['hide_empty'] = TRUE;
  /* Field: Content: Application period */
  $handler->display->display_options['fields']['field_jobs_date']['id'] = 'field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['table'] = 'field_data_field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['field'] = 'field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_date']['settings'] = array(
    'format_type' => 'tieto_medium_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '  ';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Contact Information */
  $handler->display->display_options['fields']['field_jobs_contact_information']['id'] = 'field_jobs_contact_information';
  $handler->display->display_options['fields']['field_jobs_contact_information']['table'] = 'field_data_field_jobs_contact_information';
  $handler->display->display_options['fields']['field_jobs_contact_information']['field'] = 'field_jobs_contact_information';
  $handler->display->display_options['fields']['field_jobs_contact_information']['label'] = 'Contact for this job';
  $handler->display->display_options['fields']['field_jobs_contact_information']['hide_empty'] = TRUE;
  /* Field: Content: Organization Description */
  $handler->display->display_options['fields']['field_jobs_organization_desc']['id'] = 'field_jobs_organization_desc';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['table'] = 'field_data_field_jobs_organization_desc';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['field'] = 'field_jobs_organization_desc';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_organization_desc']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class ="views-field views-field-field-jobs-id view-id-tieto_jobs_job"><div class="view-footer">[field_jobs_id]
</div></div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<!-- AddToAny BEGIN -->
<div class="a2a_kit a2a_default_style">
<a class="a2a_dd" href="https://www.addtoany.com/share_save">Share this on:</a>
<a class="a2a_button_linkedin"></a>
<a class="a2a_button_twitter"></a>
<a class="a2a_button_facebook"></a>
<a class="a2a_button_google_plus"></a>
</div>
<script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>
</br>
<!-- AddToAny END -->';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Content: AddToAny link */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Job query string value */
  $handler->display->display_options['arguments']['field_jobs_id_value']['id'] = 'field_jobs_id_value';
  $handler->display->display_options['arguments']['field_jobs_id_value']['table'] = 'field_data_field_jobs_id';
  $handler->display->display_options['arguments']['field_jobs_id_value']['field'] = 'field_jobs_id_value';
  $handler->display->display_options['arguments']['field_jobs_id_value']['ui_name'] = 'Job query string value';
  $handler->display->display_options['arguments']['field_jobs_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_jobs_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_jobs_id_value']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_jobs_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_jobs_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_jobs_id_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_jobs_vacancy' => 'tieto_jobs_vacancy',
  );

  /* Display: Job view */
  $handler = $view->new_display('panel_pane', 'Job view', 'view');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Apply URL */
  $handler->display->display_options['fields']['field_apply_url']['id'] = 'field_apply_url';
  $handler->display->display_options['fields']['field_apply_url']['table'] = 'field_data_field_apply_url';
  $handler->display->display_options['fields']['field_apply_url']['field'] = 'field_apply_url';
  $handler->display->display_options['fields']['field_apply_url']['label'] = '';
  $handler->display->display_options['fields']['field_apply_url']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<!-- AddToAny BEGIN -->
<div class="a2a_kit a2a_default_style">
<a class="a2a_dd" href="https://www.addtoany.com/share_save">Share this on:</a>
<a class="a2a_button_linkedin"></a>
<a class="a2a_button_twitter"></a>
<a class="a2a_button_facebook"></a>
<a class="a2a_button_google_plus"></a>
</div>
<script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>
</br>
<!-- AddToAny END -->';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Job Location */
  $handler->display->display_options['fields']['field_jobs_location']['id'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['field'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_jobs_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_location']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_location']['delta_offset'] = '0';
  /* Field: Content: Job Area */
  $handler->display->display_options['fields']['field_jobs_jobareas']['id'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['table'] = 'field_data_field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['field'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_jobareas']['delta_offset'] = '0';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_jobs_organization']['id'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['table'] = 'field_data_field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['field'] = 'field_jobs_organization';
  $handler->display->display_options['fields']['field_jobs_organization']['hide_empty'] = TRUE;
  /* Field: Content: Form of employment */
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['id'] = 'field_jobs_form_of_employment';
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['table'] = 'field_data_field_jobs_form_of_employment';
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['field'] = 'field_jobs_form_of_employment';
  $handler->display->display_options['fields']['field_jobs_form_of_employment']['hide_empty'] = TRUE;
  /* Field: Content: Application period */
  $handler->display->display_options['fields']['field_jobs_date']['id'] = 'field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['table'] = 'field_data_field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['field'] = 'field_jobs_date';
  $handler->display->display_options['fields']['field_jobs_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_date']['settings'] = array(
    'format_type' => 'tieto_medium_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: info box */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'info box';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '    <div class="left">
        <div class="location">
            <span class="label">Location: </span>
            <div class="content">[field_jobs_location]</div>
        </div>
        <div class="jobareas">
            <span class="label">Job Area: </span>
            <div class="content">[field_jobs_jobareas]</div>
        </div>
        <div class="organization">
            <span class="label">Organization: </span>
            <div class="content">[field_jobs_organization]</div>
        </div>
    </div>
    <div class="right">
        <div class="form-of-employment">
            <span class="label">Form of employment: </span>
            <div class="content">[field_jobs_form_of_employment]</div>
        </div>
        <div class="date">
            <span class="label">Application period: </span>
            <div class="content">[field_jobs_date]</div>
        </div>
    </div>';
  $handler->display->display_options['fields']['nothing_3']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'info-box clearfix';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '  ';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Contact Information */
  $handler->display->display_options['fields']['field_jobs_contact_information']['id'] = 'field_jobs_contact_information';
  $handler->display->display_options['fields']['field_jobs_contact_information']['table'] = 'field_data_field_jobs_contact_information';
  $handler->display->display_options['fields']['field_jobs_contact_information']['field'] = 'field_jobs_contact_information';
  $handler->display->display_options['fields']['field_jobs_contact_information']['label'] = 'Contact for this job';
  $handler->display->display_options['fields']['field_jobs_contact_information']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class ="views-field views-field-field-jobs-id view-id-tieto_jobs_job"><div class="view-footer">[field_jobs_id]
</div></div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<!-- AddToAny BEGIN -->
<div class="a2a_kit a2a_default_style">
<a class="a2a_dd" href="https://www.addtoany.com/share_save">Share this on:</a>
<a class="a2a_button_linkedin"></a>
<a class="a2a_button_twitter"></a>
<a class="a2a_button_facebook"></a>
<a class="a2a_button_google_plus"></a>
</div>
<script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>
</br>
<!-- AddToAny END -->';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Content: AddToAny link */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  /* Field: Content: Organization Description */
  $handler->display->display_options['fields']['field_jobs_organization_desc']['id'] = 'field_jobs_organization_desc';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['table'] = 'field_data_field_jobs_organization_desc';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['field'] = 'field_jobs_organization_desc';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_organization_desc']['element_wrapper_class'] = 'org-desc';
  $handler->display->display_options['fields']['field_jobs_organization_desc']['hide_empty'] = TRUE;
  /* Field: Apply for this job */
  $handler->display->display_options['fields']['field_jobs_id']['id'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['table'] = 'field_data_field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['field'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['ui_name'] = 'Apply for this job';
  $handler->display->display_options['fields']['field_jobs_id']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['alter']['text'] = 'Apply for this job';
  $handler->display->display_options['fields']['field_jobs_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['alter']['path'] = '[field_apply_url]/apply';
  $handler->display->display_options['fields']['field_jobs_id']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_jobs_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: job location text */
  $handler->display->display_options['fields']['field_job_location_text']['id'] = 'field_job_location_text';
  $handler->display->display_options['fields']['field_job_location_text']['table'] = 'field_data_field_job_location_text';
  $handler->display->display_options['fields']['field_job_location_text']['field'] = 'field_job_location_text';
  $handler->display->display_options['fields']['field_job_location_text']['label'] = '';
  $handler->display->display_options['fields']['field_job_location_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_location_text']['alter']['text'] = 'Apply for this job with LinkedIn';
  $handler->display->display_options['fields']['field_job_location_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_job_location_text']['alter']['path'] = '[field_apply_url]';
  $handler->display->display_options['fields']['field_job_location_text']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_job_location_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Tieto Jobs';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_jobs_id_value' => array(
      'type' => 'context',
      'context' => 'query_string.raw',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Job query string value',
    ),
  );
  $translatables['tieto_jobs_job'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Järjestä'),
    t('Asc'),
    t('Desc'),
    t('Requested position was not found or application period is over.
'),
    t('Apply for this job'),
    t('<!-- AddToAny BEGIN -->
<div class="a2a_kit a2a_default_style">
<a class="a2a_dd" href="https://www.addtoany.com/share_save">Share this on:</a>
<a class="a2a_button_linkedin"></a>
<a class="a2a_button_twitter"></a>
<a class="a2a_button_facebook"></a>
<a class="a2a_button_google_plus"></a>
</div>
<script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>
</br>
<!-- AddToAny END -->'),
    t('Location'),
    t('Organization'),
    t('Form of employment'),
    t('Application period'),
    t('  '),
    t('Contact for this job'),
    t('<div class ="views-field views-field-field-jobs-id view-id-tieto_jobs_job"><div class="view-footer">[field_jobs_id]
</div></div>
'),
    t('All'),
    t('Job view'),
    t('Job Area'),
    t('    <div class="left">
        <div class="location">
            <span class="label">Location: </span>
            <div class="content">[field_jobs_location]</div>
        </div>
        <div class="jobareas">
            <span class="label">Job Area: </span>
            <div class="content">[field_jobs_jobareas]</div>
        </div>
        <div class="organization">
            <span class="label">Organization: </span>
            <div class="content">[field_jobs_organization]</div>
        </div>
    </div>
    <div class="right">
        <div class="form-of-employment">
            <span class="label">Form of employment: </span>
            <div class="content">[field_jobs_form_of_employment]</div>
        </div>
        <div class="date">
            <span class="label">Application period: </span>
            <div class="content">[field_jobs_date]</div>
        </div>
    </div>'),
    t('Apply for this job with LinkedIn'),
    t('Tieto Jobs'),
  );
  $export['tieto_jobs_job'] = $view;

  $view = new view();
  $view->name = 'tieto_jobs_solr_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_tieto_node_solr_index';
  $view->human_name = 'Tieto Jobs SOLR search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Järjestä';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_jobs_location' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_jobs_jobareas' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'search_api_views_fulltext' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = ' « first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = ' ‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = ' next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = ' last »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_jobs_location' => 'field_jobs_location',
    'field_jobs_organization' => 'field_jobs_organization',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jobs_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jobs_organization' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Indexed Content: Job ID */
  $handler->display->display_options['fields']['field_jobs_id']['id'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_jobs_id']['field'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_jobs_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Job title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/!1?job=[field_jobs_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Job Area */
  $handler->display->display_options['fields']['field_jobs_jobareas']['id'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_jobs_jobareas']['field'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['label'] = 'Job area';
  $handler->display->display_options['fields']['field_jobs_jobareas']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jobs_jobareas']['view_mode'] = 'full';
  /* Field: Indexed Content: Job Location */
  $handler->display->display_options['fields']['field_jobs_location']['id'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_jobs_location']['field'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['label'] = 'Job location';
  $handler->display->display_options['fields']['field_jobs_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_location']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jobs_location']['view_mode'] = 'full';
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Current Node */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Current Node';
  $handler->display->display_options['arguments']['null']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['null']['title'] = '%1';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['null']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['null']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['fail'] = 'ignore';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_jobs_vacancy' => 'tieto_jobs_vacancy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Indexed Content: Job Area */
  $handler->display->display_options['filters']['field_jobs_jobareas']['id'] = 'field_jobs_jobareas';
  $handler->display->display_options['filters']['field_jobs_jobareas']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['field_jobs_jobareas']['field'] = 'field_jobs_jobareas';
  $handler->display->display_options['filters']['field_jobs_jobareas']['value'] = array();
  $handler->display->display_options['filters']['field_jobs_jobareas']['group'] = 1;
  $handler->display->display_options['filters']['field_jobs_jobareas']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_jobareas']['expose']['operator_id'] = 'field_jobs_jobareas_op';
  $handler->display->display_options['filters']['field_jobs_jobareas']['expose']['label'] = 'Job area';
  $handler->display->display_options['filters']['field_jobs_jobareas']['expose']['operator'] = 'field_jobs_jobareas_op';
  $handler->display->display_options['filters']['field_jobs_jobareas']['expose']['identifier'] = 'field_jobs_jobareas';
  $handler->display->display_options['filters']['field_jobs_jobareas']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_jobareas']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    8 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_jobs_jobareas']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_jobs_jobareas']['group_info']['label'] = 'Tehtäväalue';
  $handler->display->display_options['filters']['field_jobs_jobareas']['group_info']['identifier'] = 'field_jobs_jobareas';
  $handler->display->display_options['filters']['field_jobs_jobareas']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_jobs_jobareas']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Indexed Content: Job Location */
  $handler->display->display_options['filters']['field_jobs_location']['id'] = 'field_jobs_location';
  $handler->display->display_options['filters']['field_jobs_location']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['field_jobs_location']['field'] = 'field_jobs_location';
  $handler->display->display_options['filters']['field_jobs_location']['value'] = array();
  $handler->display->display_options['filters']['field_jobs_location']['group'] = 1;
  $handler->display->display_options['filters']['field_jobs_location']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_location']['expose']['operator_id'] = 'field_jobs_location_op';
  $handler->display->display_options['filters']['field_jobs_location']['expose']['label'] = 'Job location';
  $handler->display->display_options['filters']['field_jobs_location']['expose']['operator'] = 'field_jobs_location_op';
  $handler->display->display_options['filters']['field_jobs_location']['expose']['identifier'] = 'field_jobs_location';
  $handler->display->display_options['filters']['field_jobs_location']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_location']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    8 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_jobs_location']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_jobs_location']['group_info']['label'] = 'Job Location';
  $handler->display->display_options['filters']['field_jobs_location']['group_info']['identifier'] = 'field_jobs_location';
  $handler->display->display_options['filters']['field_jobs_location']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_jobs_location']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Indexed Content: Apply URL */
  $handler->display->display_options['filters']['field_apply_url']['id'] = 'field_apply_url';
  $handler->display->display_options['filters']['field_apply_url']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['filters']['field_apply_url']['field'] = 'field_apply_url';
  $handler->display->display_options['filters']['field_apply_url']['operator'] = '<>';
  $handler->display->display_options['filters']['field_apply_url']['value'] = 'NULL';

  /* Display: Search result */
  $handler = $view->new_display('panel_pane', 'Search result', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Tieto jobs';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'null' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Current Node',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['tieto_jobs_solr_search'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Järjestä'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t(' « first'),
    t(' ‹ previous'),
    t(' next ›'),
    t(' last »'),
    t('No results'),
    t('.'),
    t('Job title'),
    t('Job area'),
    t('Job location'),
    t('All'),
    t('%1'),
    t('Tehtäväalue'),
    t('Job Location'),
    t('Search result'),
    t('Tieto jobs'),
  );
  $export['tieto_jobs_solr_search'] = $view;

  return $export;
}
