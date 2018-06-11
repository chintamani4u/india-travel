<?php
/**
 * @file
 * tieto_cv_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_cv_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cv_pages';
  $view->description = 'Listings of CV\'s';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CV pages';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'cv_leadership_team' => 'cv_leadership_team',
    'about_us' => 0,
    'careers' => 0,
    'front_page_highlight_1' => 0,
    'front_page_highlight_2' => 0,
    'front_page_ir_corner' => 0,
    'front_page_top_stories' => 0,
    'india_front_page_highlight_1_' => 0,
    'india_front_page_highlight_2' => 0,
    'ru_frontpage_highlight_1' => 0,
    'ru_frontpage_highlight_2' => 0,
    'ru_frontpage_top_story_highlight' => 0,
    'ru_frontpage_ir_corner_highlight' => 0,
    'ru_frontpage_highlight_3' => 0,
    'china_frontpage_highlights' => 0,
    'china_frontpage_top_stories' => 0,
    'czech_frontpage_highlights' => 0,
    'czech_frontpage_ir_corner' => 0,
    'czech_frontpage_top_stories' => 0,
    'estonia_frontpage_highlights' => 0,
    'estonia_frontpage_top_stories' => 0,
    'estonia_frontpage_ir_corner' => 0,
    'latvia_frontpage_highlights' => 0,
    'latvia_frontpage_top_stories' => 0,
    'latvia_frontpage_ir_corner' => 0,
    'lithuania_frontpage_highlight_1' => 0,
    'lithuania_frontpage_highlight_2' => 0,
    'sweden_front_page_highlight_1' => 0,
    'sweden_front_page_highlight_2' => 0,
    'sweden_front_page_top_stories' => 0,
    'sweden_frontpage_ir_corner' => 0,
    'finland_front_page_highlight_1' => 0,
    'finland_front_page_highlight_2' => 0,
    'finland_frontpage_top_stories' => 0,
    'finland_frontpage_ir_corner' => 0,
    'netherlands_front_page_highlight' => 0,
    'nl_front_page_highlight_2' => 0,
    'nl_frontpage_top_stories' => 0,
    'norway_front_page_highlight_1' => 0,
    'norway_front_page_highlight_2' => 0,
    'norway_frontpage_top_stories' => 0,
    'norway_frontpage_ir_corner' => 0,
    'poland_front_page_highlight_1' => 0,
    'poland_front_page_highlight_2' => 0,
    'poland_frontpage_ir_corner' => 0,
    'lithuania_frontpage_top_stories' => 0,
    'germany_front_page_highlight_1' => 0,
    'germany_front_page_highlight_2' => 0,
    'germany_front_page_top_stories' => 0,
    'board_of_directors' => 0,
  );
  /* Field: Content: Resource */
  $handler->display->display_options['fields']['field_image_atom']['id'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['table'] = 'field_data_field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['field'] = 'field_image_atom';
  $handler->display->display_options['fields']['field_image_atom']['label'] = '';
  $handler->display->display_options['fields']['field_image_atom']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_atom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_atom']['type'] = 'sdl_editor_representation';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'cvbody';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'tieto_cv_page' => 'tieto_cv_page',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Pane: Board of directors */
  $handler = $view->new_display('panel_pane', 'Pane: Board of directors', 'cv_board_of_directors');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'board_of_directors' => 'board_of_directors',
    'about_us' => 0,
    'careers' => 0,
    'front_page_highlight_1' => 0,
    'front_page_highlight_2' => 0,
    'front_page_ir_corner' => 0,
    'front_page_top_stories' => 0,
    'india_front_page_highlight_1_' => 0,
    'india_front_page_highlight_2' => 0,
    'ru_frontpage_highlight_1' => 0,
    'ru_frontpage_highlight_2' => 0,
    'ru_frontpage_top_story_highlight' => 0,
    'ru_frontpage_ir_corner_highlight' => 0,
    'ru_frontpage_highlight_3' => 0,
    'china_frontpage_highlights' => 0,
    'china_frontpage_top_stories' => 0,
    'czech_frontpage_highlights' => 0,
    'czech_frontpage_ir_corner' => 0,
    'czech_frontpage_top_stories' => 0,
    'estonia_frontpage_highlights' => 0,
    'estonia_frontpage_top_stories' => 0,
    'estonia_frontpage_ir_corner' => 0,
    'latvia_frontpage_highlights' => 0,
    'latvia_frontpage_top_stories' => 0,
    'latvia_frontpage_ir_corner' => 0,
    'lithuania_frontpage_highlight_1' => 0,
    'lithuania_frontpage_highlight_2' => 0,
    'sweden_front_page_highlight_1' => 0,
    'sweden_front_page_highlight_2' => 0,
    'sweden_front_page_top_stories' => 0,
    'sweden_frontpage_ir_corner' => 0,
    'finland_front_page_highlight_1' => 0,
    'finland_front_page_highlight_2' => 0,
    'finland_frontpage_top_stories' => 0,
    'finland_frontpage_ir_corner' => 0,
    'netherlands_front_page_highlight' => 0,
    'nl_front_page_highlight_2' => 0,
    'nl_frontpage_top_stories' => 0,
    'norway_front_page_highlight_1' => 0,
    'norway_front_page_highlight_2' => 0,
    'norway_frontpage_top_stories' => 0,
    'norway_frontpage_ir_corner' => 0,
    'poland_front_page_highlight_1' => 0,
    'poland_front_page_highlight_2' => 0,
    'poland_frontpage_ir_corner' => 0,
    'lithuania_frontpage_top_stories' => 0,
    'germany_front_page_highlight_1' => 0,
    'germany_front_page_highlight_2' => 0,
    'germany_front_page_top_stories' => 0,
    'cv_leadership_team' => 0,
  );

  /* Display: Pane: Leadership team */
  $handler = $view->new_display('panel_pane', 'Pane: Leadership team', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Pane: Proposed New Members */
  $handler = $view->new_display('panel_pane', 'Pane: Proposed New Members', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'proposed_new_members' => 'proposed_new_members',
    'about_us' => 0,
    'careers' => 0,
    'front_page_highlight_1' => 0,
    'front_page_highlight_2' => 0,
    'front_page_ir_corner' => 0,
    'front_page_top_stories' => 0,
    'india_front_page_highlight_1_' => 0,
    'india_front_page_highlight_2' => 0,
    'ru_frontpage_highlight_1' => 0,
    'ru_frontpage_highlight_2' => 0,
    'ru_frontpage_top_story_highlight' => 0,
    'ru_frontpage_ir_corner_highlight' => 0,
    'ru_frontpage_highlight_3' => 0,
    'china_frontpage_highlights' => 0,
    'china_frontpage_top_stories' => 0,
    'czech_frontpage_highlights' => 0,
    'czech_frontpage_ir_corner' => 0,
    'czech_frontpage_top_stories' => 0,
    'estonia_frontpage_highlights' => 0,
    'estonia_frontpage_top_stories' => 0,
    'estonia_frontpage_ir_corner' => 0,
    'latvia_frontpage_highlights' => 0,
    'latvia_frontpage_top_stories' => 0,
    'latvia_frontpage_ir_corner' => 0,
    'lithuania_frontpage_highlight_1' => 0,
    'lithuania_frontpage_highlight_2' => 0,
    'sweden_front_page_highlight_1' => 0,
    'sweden_front_page_highlight_2' => 0,
    'sweden_front_page_top_stories' => 0,
    'sweden_frontpage_ir_corner' => 0,
    'finland_front_page_highlight_1' => 0,
    'finland_front_page_highlight_2' => 0,
    'finland_frontpage_top_stories' => 0,
    'finland_frontpage_ir_corner' => 0,
    'netherlands_front_page_highlight' => 0,
    'nl_front_page_highlight_2' => 0,
    'nl_frontpage_top_stories' => 0,
    'norway_front_page_highlight_1' => 0,
    'norway_front_page_highlight_2' => 0,
    'norway_frontpage_top_stories' => 0,
    'norway_frontpage_ir_corner' => 0,
    'poland_front_page_highlight_1' => 0,
    'poland_front_page_highlight_2' => 0,
    'poland_frontpage_ir_corner' => 0,
    'lithuania_frontpage_top_stories' => 0,
    'germany_front_page_highlight_1' => 0,
    'germany_front_page_highlight_2' => 0,
    'germany_front_page_top_stories' => 0,
    'frontpage_highlights_2_estonia_' => 0,
    'board_of_directors' => 0,
    'cv_leadership_team' => 0,
    'frontpage_highlights_2_china_' => 0,
    'frontpage_highlight_1_austria_' => 0,
    'frontpage_highlight_2_austria_2' => 0,
    'frontpage_highlights_2_czech_rep' => 0,
  );
  $translatables['cv_pages'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Pane: Board of directors'),
    t('View panes'),
    t('Pane: Leadership team'),
    t('Pane: Proposed New Members'),
  );
  $export['cv_pages'] = $view;

  return $export;
}
