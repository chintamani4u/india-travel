<?php
/**
 * @file
 * tieto_key_topics.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_key_topics_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'key_topics_navigation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Key Topics Navigation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'sticky-navigation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Key topics sections */
  $handler->display->display_options['fields']['field_key_topics_sections']['id'] = 'field_key_topics_sections';
  $handler->display->display_options['fields']['field_key_topics_sections']['table'] = 'field_data_field_key_topics_sections';
  $handler->display->display_options['fields']['field_key_topics_sections']['field'] = 'field_key_topics_sections';
  $handler->display->display_options['fields']['field_key_topics_sections']['label'] = '';
  $handler->display->display_options['fields']['field_key_topics_sections']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_key_topics_sections']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_key_topics_sections']['alter']['path'] = '#[field_key_topics_sections]';
  $handler->display->display_options['fields']['field_key_topics_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_key_topics_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_key_topics_sections']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_key_topics_sections']['multi_type'] = 'ul';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'key_topics' => 'key_topics',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'key_topics_sections' => 'key_topics_sections',
    'domains' => 0,
    'product_development' => 0,
    'industry' => 0,
    'technologies' => 0,
    'scald_authors' => 0,
    'scald_tags' => 0,
    'material_types' => 0,
    'panopoly_categories' => 0,
    'tieto_event_types' => 0,
    'contact_type' => 0,
    'key_topics' => 0,
    'tieto_concepts' => 0,
    'tieto_jobs_jobarea' => 0,
    'tieto_jobs_locations' => 0,
    'tieto_jobs_tags' => 0,
    'magazine' => 0,
    'language' => 0,
    'tieto_times_issue' => 0,
    'tieto_news_types' => 0,
    'sites' => 0,
    'tieto_hugin' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Key topics sections */
  $handler->display->display_options['fields']['field_key_topics_sections']['id'] = 'field_key_topics_sections';
  $handler->display->display_options['fields']['field_key_topics_sections']['table'] = 'field_data_field_key_topics_sections';
  $handler->display->display_options['fields']['field_key_topics_sections']['field'] = 'field_key_topics_sections';
  $handler->display->display_options['fields']['field_key_topics_sections']['label'] = '';
  $handler->display->display_options['fields']['field_key_topics_sections']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_key_topics_sections']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_key_topics_sections']['alter']['path'] = '#[field_key_topics_sections]';
  $handler->display->display_options['fields']['field_key_topics_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_key_topics_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_key_topics_sections']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_key_topics_sections']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'key_topics' => 'key_topics',
  );
  $translatables['key_topics_navigation'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
    t('term'),
  );
  $export['key_topics_navigation'] = $view;

  $view = new view();
  $view->name = 'key_topics_phases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'key topics phases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'key topics phases';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'key_topics_sections' => 'key_topics_sections',
    'concepts' => 0,
    'domains' => 0,
    'product_development' => 0,
    'industry' => 0,
    'technologies' => 0,
    'scald_authors' => 0,
    'scald_tags' => 0,
    'material_types' => 0,
    'panopoly_categories' => 0,
    'tieto_event_types' => 0,
    'contact_type' => 0,
    'key_topics' => 0,
    'tieto_concept_pages_phases' => 0,
    'tieto_jobs_jobarea' => 0,
    'tieto_jobs_locations' => 0,
    'tieto_jobs_tags' => 0,
    'magazine' => 0,
    'language' => 0,
    'tieto_times_issue' => 0,
    'tieto_news_types' => 0,
    'sites' => 0,
    'tieto_hugin' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'tieto_terms';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'More';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cp-tile';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Tile label */
  $handler->display->display_options['fields']['field_tile_label']['id'] = 'field_tile_label';
  $handler->display->display_options['fields']['field_tile_label']['table'] = 'field_data_field_tile_label';
  $handler->display->display_options['fields']['field_tile_label']['field'] = 'field_tile_label';
  $handler->display->display_options['fields']['field_tile_label']['label'] = '';
  $handler->display->display_options['fields']['field_tile_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tile_label']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class= "tile-close"><a href="#">Close </a></div>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = '.key-topics-hidden';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Resource */
  $handler->display->display_options['fields']['field_image_atom']['id'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['table'] = 'field_data_field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['field'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['label'] = '';
  $handler->display->display_options['fields']['field_image_atom']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_atom']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_atom']['element_class'] = '.key-topics-visible';
  $handler->display->display_options['fields']['field_image_atom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_atom']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_atom']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_atom']['type'] = 'sdl_editor_representation';
  /* Field: Content: Punchline */
  $handler->display->display_options['fields']['field_punchline']['id'] = 'field_punchline';
  $handler->display->display_options['fields']['field_punchline']['table'] = 'field_data_field_punchline';
  $handler->display->display_options['fields']['field_punchline']['field'] = 'field_punchline';
  $handler->display->display_options['fields']['field_punchline']['label'] = '';
  $handler->display->display_options['fields']['field_punchline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_punchline']['alter']['text'] = '<small>[field_punchline]</small>';
  $handler->display->display_options['fields']['field_punchline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_punchline']['element_class'] = '.key-topics-visible';
  $handler->display->display_options['fields']['field_punchline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_punchline']['hide_empty'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video_atom']['id'] = 'field_video_atom';
  $handler->display->display_options['fields']['field_video_atom']['table'] = 'field_data_field_video_atom';
  $handler->display->display_options['fields']['field_video_atom']['field'] = 'field_video_atom';
  $handler->display->display_options['fields']['field_video_atom']['label'] = '';
  $handler->display->display_options['fields']['field_video_atom']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_atom']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_atom']['alter']['text'] = '
<span class="video-arrow"></span>
[field_video_atom]
';
  $handler->display->display_options['fields']['field_video_atom']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_video_atom']['element_class'] = '.key-topics-visible';
  $handler->display->display_options['fields']['field_video_atom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_atom']['type'] = 'concept_page_video_thumbnails';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video_atom_1']['id'] = 'field_video_atom_1';
  $handler->display->display_options['fields']['field_video_atom_1']['table'] = 'field_data_field_video_atom';
  $handler->display->display_options['fields']['field_video_atom_1']['field'] = 'field_video_atom';
  $handler->display->display_options['fields']['field_video_atom_1']['label'] = '';
  $handler->display->display_options['fields']['field_video_atom_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_atom_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_video_atom_1']['element_class'] = '.key-topics-hidden';
  $handler->display->display_options['fields']['field_video_atom_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_atom_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_atom_1']['type'] = 'sdl_editor_representation';
  /* Field: Content: Ingress */
  $handler->display->display_options['fields']['field_ingress']['id'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['table'] = 'field_data_field_ingress';
  $handler->display->display_options['fields']['field_ingress']['field'] = 'field_ingress';
  $handler->display->display_options['fields']['field_ingress']['label'] = '';
  $handler->display->display_options['fields']['field_ingress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ingress']['element_class'] = '.key-topics-hidden';
  $handler->display->display_options['fields']['field_ingress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ingress']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ingress']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = '.key-topics-hidden';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Sidebar reference content */
  $handler->display->display_options['fields']['field_sidebar_reference_content']['id'] = 'field_sidebar_reference_content';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['table'] = 'field_data_field_sidebar_reference_content';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['field'] = 'field_sidebar_reference_content';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidebar_reference_content']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['element_class'] = '.key-topics-hidden';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_reference_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sidebar_reference_content']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sidebar_reference_content']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sidebar_reference_content']['separator'] = '';
  /* Field: Content: Contact Reference */
  $handler->display->display_options['fields']['field_contact_reference_1']['id'] = 'field_contact_reference_1';
  $handler->display->display_options['fields']['field_contact_reference_1']['table'] = 'field_data_field_contact_reference';
  $handler->display->display_options['fields']['field_contact_reference_1']['field'] = 'field_contact_reference';
  $handler->display->display_options['fields']['field_contact_reference_1']['label'] = '';
  $handler->display->display_options['fields']['field_contact_reference_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_reference_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_reference_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_contact_reference_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_contact_reference_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contact_reference_1']['delta_offset'] = '0';
  /* Field: Content: Contact Reference */
  $handler->display->display_options['fields']['field_contact_reference']['id'] = 'field_contact_reference';
  $handler->display->display_options['fields']['field_contact_reference']['table'] = 'field_data_field_contact_reference';
  $handler->display->display_options['fields']['field_contact_reference']['field'] = 'field_contact_reference';
  $handler->display->display_options['fields']['field_contact_reference']['label'] = '';
  $handler->display->display_options['fields']['field_contact_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_reference']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_reference']['alter']['text'] = '<div class ="field-item article-author-contact">Contact </div> [field_contact_reference]
 <div class="views-field view-tieto-contacts">        
      <span class="field-content">
      <a href="/node/[field_contact_reference_1]">
      Send a message</a>
      </span>
 </div>';
  $handler->display->display_options['fields']['field_contact_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_contact_reference']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_contact_reference']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_contact_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_reference']['separator'] = '';
  /* Field: Content: Destination link */
  $handler->display->display_options['fields']['field_destination_link']['id'] = 'field_destination_link';
  $handler->display->display_options['fields']['field_destination_link']['table'] = 'field_data_field_destination_link';
  $handler->display->display_options['fields']['field_destination_link']['field'] = 'field_destination_link';
  $handler->display->display_options['fields']['field_destination_link']['label'] = '';
  $handler->display->display_options['fields']['field_destination_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_destination_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_destination_link']['element_class'] = '.key-topics-hidden';
  $handler->display->display_options['fields']['field_destination_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_link']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Content: AddToAny link */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['addtoany_link']['alter']['text'] = 'Share this on :[addtoany_link]';
  $handler->display->display_options['fields']['addtoany_link']['element_type'] = 'span';
  $handler->display->display_options['fields']['addtoany_link']['element_class'] = '.key-topics-hidden';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['addtoany_link']['hide_empty'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' <div class="key-topics-tiles-label">[field_tile_label]</div>
<div class="key-topics-tiles-container" id=[nid]>
	<div class = "[type] key-topics-visible">
		<div class="key-topics-tiles-title">[title]</div>
		<div class="key-topics-tiles-media">
                  [field_image_atom]
		  [field_video_atom]
                </div>
		<div class="key-topics-tiles-punchline">[field_punchline]</div>
                
	</div>
	<div class = "[type] key-topics-hidden">
		<div class= "tile-close"><a href="#">Close </a></div>
		<div class="key-topics-tiles-title">[title]</div>
                   <div class="key-topics-tiles-body">
		[field_video_atom_1]
		[field_ingress]
		[body] 
		[field_sidebar_reference_content]
		[field_contact_reference]
		[field_destination_link] 
		[addtoany_link]
</div>
		<div class= "tile-close"><a href="#">Close </a></div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tieto_carousel_content' => 'tieto_carousel_content',
    'insights_and_opinions_page' => 'insights_and_opinions_page',
    'tieto_news_article' => 'tieto_news_article',
    'tieto_top_story' => 'tieto_top_story',
    'video_article' => 'video_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:scald_atom.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Phase label */
  $handler = $view->new_display('panel_pane', 'Phase label', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cp-tile';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:scald_atom.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );
  $translatables['key_topics_phases'] = array(
    t('Master'),
    t('key topics phases'),
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
    t('term'),
    t('All'),
    t('Content pane'),
    t('<div class= "tile-close"><a href="#">Close </a></div>'),
    t('<small>[field_punchline]</small>'),
    t('
<span class="video-arrow"></span>
[field_video_atom]
'),
    t('<div class ="field-item article-author-contact">Contact </div> [field_contact_reference]
 <div class="views-field view-tieto-contacts">        
      <span class="field-content">
      <a href="/node/[field_contact_reference_1]">
      Send a message</a>
      </span>
 </div>'),
    t('Share this on :[addtoany_link]'),
    t(' <div class="key-topics-tiles-label">[field_tile_label]</div>
<div class="key-topics-tiles-container" id=[nid]>
	<div class = "[type] key-topics-visible">
		<div class="key-topics-tiles-title">[title]</div>
		<div class="key-topics-tiles-media">
                  [field_image_atom]
		  [field_video_atom]
                </div>
		<div class="key-topics-tiles-punchline">[field_punchline]</div>
                
	</div>
	<div class = "[type] key-topics-hidden">
		<div class= "tile-close"><a href="#">Close </a></div>
		<div class="key-topics-tiles-title">[title]</div>
                   <div class="key-topics-tiles-body">
		[field_video_atom_1]
		[field_ingress]
		[body] 
		[field_sidebar_reference_content]
		[field_contact_reference]
		[field_destination_link] 
		[addtoany_link]
</div>
		<div class= "tile-close"><a href="#">Close </a></div>
	</div>
</div>'),
    t('View panes'),
    t('Phase label'),
  );
  $export['key_topics_phases'] = $view;

  $view = new view();
  $view->name = 'key_topics_portfolio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Key topics - Portfolio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Offerings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Two column content */
  $handler = $view->new_display('panel_pane', 'Two column content', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Two column content */
  $handler->display->display_options['fields']['field_two_column_content']['id'] = 'field_two_column_content';
  $handler->display->display_options['fields']['field_two_column_content']['table'] = 'field_data_field_two_column_content';
  $handler->display->display_options['fields']['field_two_column_content']['field'] = 'field_two_column_content';
  $handler->display->display_options['fields']['field_two_column_content']['label'] = '';
  $handler->display->display_options['fields']['field_two_column_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_two_column_content']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_two_column_content']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_two_column_content']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_two_column_content']['separator'] = '';

  /* Display: Three column content */
  $handler = $view->new_display('panel_pane', 'Three column content', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Three column content */
  $handler->display->display_options['fields']['field_three_column_content']['id'] = 'field_three_column_content';
  $handler->display->display_options['fields']['field_three_column_content']['table'] = 'field_data_field_three_column_content';
  $handler->display->display_options['fields']['field_three_column_content']['field'] = 'field_three_column_content';
  $handler->display->display_options['fields']['field_three_column_content']['label'] = '';
  $handler->display->display_options['fields']['field_three_column_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_three_column_content']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_three_column_content']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_three_column_content']['separator'] = '';

  /* Display: Four column content */
  $handler = $view->new_display('panel_pane', 'Four column content', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Four column content */
  $handler->display->display_options['fields']['field_four_column_content']['id'] = 'field_four_column_content';
  $handler->display->display_options['fields']['field_four_column_content']['table'] = 'field_data_field_four_column_content';
  $handler->display->display_options['fields']['field_four_column_content']['field'] = 'field_four_column_content';
  $handler->display->display_options['fields']['field_four_column_content']['label'] = '';
  $handler->display->display_options['fields']['field_four_column_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_four_column_content']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_four_column_content']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_four_column_content']['separator'] = '';

  /* Display: Multi column content */
  $handler = $view->new_display('panel_pane', 'Multi column content', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'layout' => 'layout',
    'domains' => 0,
    'product_development' => 0,
    'industry' => 0,
    'technologies' => 0,
    'scald_authors' => 0,
    'scald_tags' => 0,
    'material_types' => 0,
    'panopoly_categories' => 0,
    'tieto_event_types' => 0,
    'contact_type' => 0,
    'key_topics' => 0,
    'key_topics_sections' => 0,
    'tieto_concepts' => 0,
    'tieto_jobs_jobarea' => 0,
    'tieto_jobs_locations' => 0,
    'tieto_jobs_tags' => 0,
    'magazine' => 0,
    'language' => 0,
    'tieto_times_issue' => 0,
    'tieto_news_types' => 0,
    'sites' => 0,
    'tieto_hugin' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Multi Columns */
  $handler->display->display_options['fields']['field_multi_columns']['id'] = 'field_multi_columns';
  $handler->display->display_options['fields']['field_multi_columns']['table'] = 'field_data_field_multi_columns';
  $handler->display->display_options['fields']['field_multi_columns']['field'] = 'field_multi_columns';
  $handler->display->display_options['fields']['field_multi_columns']['label'] = '';
  $handler->display->display_options['fields']['field_multi_columns']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multi_columns']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_multi_columns']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_multi_columns']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Layout (field_layout) */
  $handler->display->display_options['arguments']['field_layout_tid']['id'] = 'field_layout_tid';
  $handler->display->display_options['arguments']['field_layout_tid']['table'] = 'field_data_field_layout';
  $handler->display->display_options['arguments']['field_layout_tid']['field'] = 'field_layout_tid';
  $handler->display->display_options['arguments']['field_layout_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_layout_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_layout_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_layout_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_layout_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Key topics (field_concepts) */
  $handler->display->display_options['arguments']['field_concepts_tid']['id'] = 'field_concepts_tid';
  $handler->display->display_options['arguments']['field_concepts_tid']['table'] = 'field_data_field_concepts';
  $handler->display->display_options['arguments']['field_concepts_tid']['field'] = 'field_concepts_tid';
  $handler->display->display_options['arguments']['field_concepts_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_concepts_tid']['default_argument_type'] = 'tieto_terms';
  $handler->display->display_options['arguments']['field_concepts_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_concepts_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_concepts_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'multi_column_content' => 'multi_column_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'field_layout_tid' => array(
      'type' => 'user',
      'context' => 'entity:scald_atom.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Layout (field_layout)',
    ),
  );
  $translatables['key_topics_portfolio'] = array(
    t('Master'),
    t('Offerings'),
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
    t('All'),
    t('Two column content'),
    t('View panes'),
    t('Three column content'),
    t('Four column content'),
    t('Multi column content'),
    t('term'),
  );
  $export['key_topics_portfolio'] = $view;

  return $export;
}
