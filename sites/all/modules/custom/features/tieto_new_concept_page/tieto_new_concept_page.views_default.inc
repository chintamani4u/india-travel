<?php
/**
 * @file
 * tieto_new_concept_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_new_concept_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'career_cases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Career Cases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Career Cases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Video or Image */
  $handler->display->display_options['fields']['field_video_atom']['id'] = 'field_video_atom';
  $handler->display->display_options['fields']['field_video_atom']['table'] = 'field_data_field_video_atom';
  $handler->display->display_options['fields']['field_video_atom']['field'] = 'field_video_atom';
  $handler->display->display_options['fields']['field_video_atom']['label'] = '';
  $handler->display->display_options['fields']['field_video_atom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_atom']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_video_atom']['type'] = 'new_career_page_video';
  $handler->display->display_options['fields']['field_video_atom']['settings'] = array(
    'link' => '0',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Parent page (field_parent_page) */
  $handler->display->display_options['arguments']['field_parent_page_target_id']['id'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['table'] = 'field_data_field_parent_page';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['field'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary_options']['items_per_page'] = '25';
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
    'career_cases' => 'career_cases',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'career_cases' => 'career_cases',
  );
  /* Filter criterion: Content: Country */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['career_cases'] = array(
    t('Master'),
    t('Career Cases'),
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
    t('Title'),
    t('All'),
    t('Block'),
  );
  $export['career_cases'] = $view;

  $view = new view();
  $view->name = 'career_follow_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'aggregator_item';
  $view->human_name = 'Career Follow Us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'author' => 'author',
    'timestamp' => 'timestamp',
    'description' => 'description',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Aggregator: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['label'] = '';
  $handler->display->display_options['fields']['author']['element_label_colon'] = FALSE;
  /* Field: Aggregator: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'tieto_short_date_full';
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Sort criterion: Aggregator: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Aggregator feed: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  /* Filter criterion: Aggregator category: Category */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_category';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  $handler->display->display_options['filters']['title']['value'] = 'Tieto Blogs';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['career_follow_us'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['career_follow_us'] = $view;

  $view = new view();
  $view->name = 'career_highlight';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Career Highlight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Concept Highlight';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Resource */
  $handler->display->display_options['fields']['field_image_atom']['id'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['table'] = 'field_data_field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['field'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['label'] = '';
  $handler->display->display_options['fields']['field_image_atom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_atom']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_image_atom']['type'] = 'sdl_editor_representation';
  $handler->display->display_options['fields']['field_image_atom']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Content order (field_content_order) */
  $handler->display->display_options['sorts']['field_content_order_value']['id'] = 'field_content_order_value';
  $handler->display->display_options['sorts']['field_content_order_value']['table'] = 'field_data_field_content_order';
  $handler->display->display_options['sorts']['field_content_order_value']['field'] = 'field_content_order_value';
  /* Contextual filter: Content: Parent page (field_parent_page) */
  $handler->display->display_options['arguments']['field_parent_page_target_id']['id'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['table'] = 'field_data_field_parent_page';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['field'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary_options']['items_per_page'] = '25';
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
    'careers_highlight' => 'careers_highlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Country */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Concept Highlight */
  $handler = $view->new_display('block', 'Concept Highlight', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Destination url */
  $handler->display->display_options['fields']['field_destination_url']['id'] = 'field_destination_url';
  $handler->display->display_options['fields']['field_destination_url']['table'] = 'field_data_field_destination_url';
  $handler->display->display_options['fields']['field_destination_url']['field'] = 'field_destination_url';
  $handler->display->display_options['fields']['field_destination_url']['label'] = '';
  $handler->display->display_options['fields']['field_destination_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_url']['click_sort_column'] = 'url';
  /* Field: Content: Resource */
  $handler->display->display_options['fields']['field_image_atom']['id'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['table'] = 'field_data_field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['field'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['label'] = '';
  $handler->display->display_options['fields']['field_image_atom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_atom']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_image_atom']['type'] = 'sdl_editor_representation';
  $handler->display->display_options['fields']['field_image_atom']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_destination_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $translatables['career_highlight'] = array(
    t('Master'),
    t('Concept Highlight'),
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
    t('Title'),
    t('Body'),
    t('All'),
  );
  $export['career_highlight'] = $view;

  $view = new view();
  $view->name = 'careers_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Careers Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Amazing Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_careers_team_job_title' => 'field_careers_team_job_title',
    'field_twitter_link' => 'field_twitter_link',
    'field_linkedin_link' => 'field_linkedin_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_careers_team_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_twitter_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_linkedin_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_careers_team_job_title']['id'] = 'field_careers_team_job_title';
  $handler->display->display_options['fields']['field_careers_team_job_title']['table'] = 'field_data_field_careers_team_job_title';
  $handler->display->display_options['fields']['field_careers_team_job_title']['field'] = 'field_careers_team_job_title';
  /* Field: Content: Twitter Link */
  $handler->display->display_options['fields']['field_twitter_link']['id'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['table'] = 'field_data_field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['field'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_link']['element_label_colon'] = FALSE;
  /* Field: Content: Linkedin Link */
  $handler->display->display_options['fields']['field_linkedin_link']['id'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['table'] = 'field_data_field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['field'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_link']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Parent page (field_parent_page) */
  $handler->display->display_options['arguments']['field_parent_page_target_id']['id'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['table'] = 'field_data_field_parent_page';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['field'] = 'field_parent_page_target_id';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_page_target_id']['summary_options']['items_per_page'] = '25';
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
    'careers_team' => 'careers_team',
  );

  /* Display: Concept Team */
  $handler = $view->new_display('block', 'Concept Team', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'three_item_carousel';
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
    'field_image_atom' => 0,
    'title' => 0,
    'field_careers_team_job_title' => 0,
    'field_linkedin_link' => 0,
    'field_twitter_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_atom' => 0,
    'title' => 0,
    'field_careers_team_job_title' => 0,
    'field_linkedin_link' => 0,
    'field_twitter_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Resource */
  $handler->display->display_options['fields']['field_image_atom']['id'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['table'] = 'field_data_field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['field'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['label'] = '';
  $handler->display->display_options['fields']['field_image_atom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_atom']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_image_atom']['type'] = 'sdl_editor_representation';
  $handler->display->display_options['fields']['field_image_atom']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_careers_team_job_title']['id'] = 'field_careers_team_job_title';
  $handler->display->display_options['fields']['field_careers_team_job_title']['table'] = 'field_data_field_careers_team_job_title';
  $handler->display->display_options['fields']['field_careers_team_job_title']['field'] = 'field_careers_team_job_title';
  /* Field: Content: Linkedin Link */
  $handler->display->display_options['fields']['field_linkedin_link']['id'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['table'] = 'field_data_field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['field'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_link']['element_label_colon'] = FALSE;
  /* Field: Content: Twitter Link */
  $handler->display->display_options['fields']['field_twitter_link']['id'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['table'] = 'field_data_field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['field'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'careers_team' => 'careers_team',
  );
  /* Filter criterion: Content: Country */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['careers_team'] = array(
    t('Master'),
    t('Our Amazing Team'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Job Title'),
    t('All'),
    t('Concept Team'),
  );
  $export['careers_team'] = $view;

  $view = new view();
  $view->name = 'concept_page_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Concept Page Menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Concept Page Menu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_references' => 'field_references',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_references' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: References */
  $handler->display->display_options['fields']['field_references']['id'] = 'field_references';
  $handler->display->display_options['fields']['field_references']['table'] = 'field_data_field_references';
  $handler->display->display_options['fields']['field_references']['field'] = 'field_references';
  $handler->display->display_options['fields']['field_references']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_references']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_references']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_references']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'concept_page' => 'concept_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['concept_page_menu'] = array(
    t('Master'),
    t('Concept Page Menu'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('References'),
    t('All'),
    t('Block'),
  );
  $export['concept_page_menu'] = $view;

  $view = new view();
  $view->name = 'job_suggestion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_tieto_node_solr_index';
  $view->human_name = 'job_suggestion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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

  /* Display: new */
  $handler = $view->new_display('panel_pane', 'new', 'panel_pane_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['query']['options']['parse_mode'] = 'single';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Järjestä';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_jobs_jobareas' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_jobs_location' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is not job available in [field_jobs_location] for [field_jobs_jobareas] ';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Job ID */
  $handler->display->display_options['fields']['field_jobs_id']['id'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['field_jobs_id']['field'] = 'field_jobs_id';
  $handler->display->display_options['fields']['field_jobs_id']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_tieto_node_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Job title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'careers/all-open-jobs?job=[field_jobs_id]';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    26 => 0,
    8 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Tieto jobs';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'latest_jobs');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['path'] = 'careers/all-open-jobs?job=[field_jobs_id]';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $translatables['job_suggestion'] = array(
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
    t('Job Location'),
    t('Tehtäväalue'),
    t('Search result'),
    t('Tieto jobs'),
    t('new'),
    t('There is not job available in [field_jobs_location] for [field_jobs_jobareas] '),
    t('Block'),
  );
  $export['job_suggestion'] = $view;

  $view = new view();
  $view->name = 'job_suggestions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Job suggestions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_jobs_jobareas_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'any job area',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_jobs_location_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'any country',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_jobs_jobareas' => 'field_jobs_jobareas',
    'field_jobs_location' => 'field_jobs_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jobs_jobareas' => array(
      'align' => '',
      'separator' => ',',
      'empty_column' => 0,
    ),
    'field_jobs_location' => array(
      'align' => '',
      'separator' => ',',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Currently we don\'t have any job opening for this location, Stay tunned.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Job Area */
  $handler->display->display_options['fields']['field_jobs_jobareas']['id'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['table'] = 'field_data_field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['field'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_jobareas']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_jobs_jobareas']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_jobareas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_jobareas']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_jobareas']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_jobs_jobareas']['delta_offset'] = '0';
  /* Field: Content: Job Location */
  $handler->display->display_options['fields']['field_jobs_location']['id'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['field'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_location']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_jobs_location']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_location']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_jobs_location']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Job Area (field_jobs_jobareas) */
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['id'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['table'] = 'field_data_field_jobs_jobareas';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['field'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['operator_id'] = 'field_jobs_jobareas_tid_op';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['label'] = 'Job Area (field_jobs_jobareas)';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['operator'] = 'field_jobs_jobareas_tid_op';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['identifier'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    26 => 0,
    8 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['vocabulary'] = 'tieto_jobs_jobarea';
  /* Filter criterion: Content: Job Location (field_jobs_location) */
  $handler->display->display_options['filters']['field_jobs_location_tid']['id'] = 'field_jobs_location_tid';
  $handler->display->display_options['filters']['field_jobs_location_tid']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['filters']['field_jobs_location_tid']['field'] = 'field_jobs_location_tid';
  $handler->display->display_options['filters']['field_jobs_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['operator_id'] = 'field_jobs_location_tid_op';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['label'] = 'Job Location (field_jobs_location)';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['operator'] = 'field_jobs_location_tid_op';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['identifier'] = 'field_jobs_location_tid';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    26 => 0,
    8 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_jobs_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jobs_location_tid']['vocabulary'] = 'tieto_jobs_locations';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'careers/all-open-jobs?job=[field_jobs_id]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Job Area */
  $handler->display->display_options['fields']['field_jobs_jobareas']['id'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['table'] = 'field_data_field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['field'] = 'field_jobs_jobareas';
  $handler->display->display_options['fields']['field_jobs_jobareas']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_jobareas']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_jobs_jobareas']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_jobareas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_jobareas']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_jobareas']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_jobs_jobareas']['delta_offset'] = '0';
  /* Field: Content: Job Location */
  $handler->display->display_options['fields']['field_jobs_location']['id'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['field'] = 'field_jobs_location';
  $handler->display->display_options['fields']['field_jobs_location']['label'] = '';
  $handler->display->display_options['fields']['field_jobs_location']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['field_jobs_location']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_location']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_location']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_jobs_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobs_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jobs_location']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_jobs_location']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_jobs_vacancy' => 'tieto_jobs_vacancy',
  );
  /* Filter criterion: Content: Job Area (field_jobs_jobareas) */
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['id'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['table'] = 'field_data_field_jobs_jobareas';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['field'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['operator_id'] = 'field_jobs_jobareas_tid_op';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['label'] = 'Job Area (field_jobs_jobareas)';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['operator'] = 'field_jobs_jobareas_tid_op';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['identifier'] = 'field_jobs_jobareas_tid';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    26 => 0,
    8 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jobs_jobareas_tid']['vocabulary'] = 'tieto_jobs_jobarea';
  /* Filter criterion: Content: Job Location (field_jobs_location) */
  $handler->display->display_options['filters']['field_jobs_location_tid']['id'] = 'field_jobs_location_tid';
  $handler->display->display_options['filters']['field_jobs_location_tid']['table'] = 'field_data_field_jobs_location';
  $handler->display->display_options['filters']['field_jobs_location_tid']['field'] = 'field_jobs_location_tid';
  $handler->display->display_options['filters']['field_jobs_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['operator_id'] = 'field_jobs_location_tid_op';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['label'] = 'Job Location (field_jobs_location)';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['operator'] = 'field_jobs_location_tid_op';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['identifier'] = 'field_jobs_location_tid';
  $handler->display->display_options['filters']['field_jobs_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    26 => 0,
    8 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_jobs_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jobs_location_tid']['vocabulary'] = 'tieto_jobs_locations';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_jobs_vacancy' => 'tieto_jobs_vacancy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
    9 => 0,
    5 => 0,
    26 => 0,
    8 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'latest_jobs');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['job_suggestions'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('any job area'),
    t('any country'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Currently we don\'t have any job opening for this location, Stay tunned.'),
    t('Job Area (field_jobs_jobareas)'),
    t('Job Location (field_jobs_location)'),
    t('Block'),
    t('Content pane'),
    t('Search Terms'),
    t('View panes'),
    t('Block 2'),
  );
  $export['job_suggestions'] = $view;

  $view = new view();
  $view->name = 'tieto_new_concept_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tieto new concept page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tieto new concept page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '%';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Sub title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Header */
  $handler = $view->new_display('block', 'Header', 'header');
  $translatables['tieto_new_concept_page'] = array(
    t('Master'),
    t('Tieto new concept page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Header'),
  );
  $export['tieto_new_concept_page'] = $view;

  return $export;
}
