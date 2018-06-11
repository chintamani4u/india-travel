<?php
/**
 * @file
 * tieto_crisis_communications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_crisis_communications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'crisis_communication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Crisis communication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Crisis message */
  $handler->display->display_options['fields']['field_crisis_message']['id'] = 'field_crisis_message';
  $handler->display->display_options['fields']['field_crisis_message']['table'] = 'field_data_field_crisis_message';
  $handler->display->display_options['fields']['field_crisis_message']['field'] = 'field_crisis_message';
  $handler->display->display_options['fields']['field_crisis_message']['label'] = '';
  $handler->display->display_options['fields']['field_crisis_message']['alter']['text'] = '<img src="sites/all/themes/tietocom/images/icons/crisis.png"> [field_crisis_message]';
  $handler->display->display_options['fields']['field_crisis_message']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_crisis_message']['alter']['path'] = '#top';
  $handler->display->display_options['fields']['field_crisis_message']['element_class'] = 'icons-crisis';
  $handler->display->display_options['fields']['field_crisis_message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_crisis_message']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_crisis_message']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Content: Crisis message */
  $handler->display->display_options['fields']['field_crisis_message_1']['id'] = 'field_crisis_message_1';
  $handler->display->display_options['fields']['field_crisis_message_1']['table'] = 'field_data_field_crisis_message';
  $handler->display->display_options['fields']['field_crisis_message_1']['field'] = 'field_crisis_message';
  $handler->display->display_options['fields']['field_crisis_message_1']['label'] = '';
  $handler->display->display_options['fields']['field_crisis_message_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_crisis_message_1']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_crisis_message_1']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '1500';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '900',
  );
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = 'Close';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'trigger_field';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  /* Field: Content: Open all the time */
  $handler->display->display_options['fields']['field_open_all_the_time']['id'] = 'field_open_all_the_time';
  $handler->display->display_options['fields']['field_open_all_the_time']['table'] = 'field_data_field_open_all_the_time';
  $handler->display->display_options['fields']['field_open_all_the_time']['field'] = 'field_open_all_the_time';
  $handler->display->display_options['fields']['field_open_all_the_time']['label'] = '';
  $handler->display->display_options['fields']['field_open_all_the_time']['element_label_colon'] = FALSE;
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
    'crisis_communication' => 'crisis_communication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['crisis_communication'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<img src="sites/all/themes/tietocom/images/icons/crisis.png"> [field_crisis_message]'),
    t('[body]'),
    t('Close'),
    t('Block'),
  );
  $export['crisis_communication'] = $view;

  return $export;
}
