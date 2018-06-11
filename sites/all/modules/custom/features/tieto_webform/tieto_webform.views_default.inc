<?php
/**
 * @file
 * tieto_webform.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_webform_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'travel_india_webform_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Travel India webform reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Travel India webform reports';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User Email */
  $handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
  $handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data_1']['field'] = 'data';
  $handler->display->display_options['relationships']['data_1']['ui_name'] = 'User Email';
  $handler->display->display_options['relationships']['data_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['data_1']['webform_nid'] = '114131';
  $handler->display->display_options['relationships']['data_1']['webform_cid'] = 24;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Sr.No.';
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = '';
  $handler->display->display_options['fields']['value_7']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_7']['webform_cid'] = '31';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Guest Name';
  $handler->display->display_options['fields']['value']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value']['webform_cid'] = 3;
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = 'Email';
  $handler->display->display_options['fields']['value_9']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_9']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_9']['webform_cid'] = 24;
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Travel date from';
  $handler->display->display_options['fields']['value_1']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_1']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_1']['webform_cid'] = '17';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Travel date to';
  $handler->display->display_options['fields']['value_2']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_2']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_2']['webform_cid'] = 18;
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = '';
  $handler->display->display_options['fields']['value_8']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_8']['webform_cid'] = '4';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Guest Contact';
  $handler->display->display_options['fields']['value_3']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_3']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_3']['webform_cid'] = '25';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'Host Name';
  $handler->display->display_options['fields']['value_4']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_4']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_4']['webform_cid'] = 20;
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'Host Contact';
  $handler->display->display_options['fields']['value_5']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_5']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_5']['webform_cid'] = 23;
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = '';
  $handler->display->display_options['fields']['value_6']['empty'] = 'open';
  $handler->display->display_options['fields']['value_6']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_6']['webform_cid'] = 30;
  /* Field: Webform submissions: Download PDF */
  $handler->display->display_options['fields']['download_pdf']['id'] = 'download_pdf';
  $handler->display->display_options['fields']['download_pdf']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['download_pdf']['field'] = 'download_pdf';
  $handler->display->display_options['fields']['download_pdf']['label'] = 'PDF link';
  $handler->display->display_options['fields']['download_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['download_pdf']['text'] = 'PDF';
  $handler->display->display_options['fields']['download_pdf']['access_check'] = 1;
  /* Field: Webform submissions: Edit link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_submission']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_submission']['access_check'] = 1;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data']['exclude'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['exclude'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_2']['label'] = 'status';
  $handler->display->display_options['fields']['data_2']['exclude'] = TRUE;
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_10']['id'] = 'value_10';
  $handler->display->display_options['fields']['value_10']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_10']['field'] = 'value';
  $handler->display->display_options['fields']['value_10']['label'] = 'Passport Copy';
  $handler->display->display_options['fields']['value_10']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_10']['webform_cid'] = '36';
  /* Sort criterion: Webform submissions: Sid */
  $handler->display->display_options['sorts']['sid']['id'] = 'sid';
  $handler->display->display_options['sorts']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['sorts']['sid']['field'] = 'sid';
  $handler->display->display_options['sorts']['sid']['order'] = 'DESC';
  /* Filter criterion: Webform submissions: Node */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '114131';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'starts',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'starts',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'starts',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'data' => 'data',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href=\'/travel_india_webform_xls\'>Download excel sheet report</a>';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['path'] = 'admin/traveling-india-report';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'xls';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Sr.No.';
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = '';
  $handler->display->display_options['fields']['value_7']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_7']['webform_cid'] = '31';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Guest Name';
  $handler->display->display_options['fields']['value']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value']['webform_cid'] = '3';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = 'Email';
  $handler->display->display_options['fields']['value_9']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_9']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_9']['webform_cid'] = '24';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Travel date from';
  $handler->display->display_options['fields']['value_1']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_1']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_1']['webform_cid'] = '17';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Travel date to';
  $handler->display->display_options['fields']['value_2']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_2']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_2']['webform_cid'] = '18';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = '1.Passport Details:';
  $handler->display->display_options['fields']['value_8']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_8']['webform_cid'] = '4';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Guest Contact';
  $handler->display->display_options['fields']['value_3']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_3']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_3']['webform_cid'] = '25';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'Host Name';
  $handler->display->display_options['fields']['value_4']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_4']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_4']['webform_cid'] = '20';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'Host Contact';
  $handler->display->display_options['fields']['value_5']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_5']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_5']['webform_cid'] = '23';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = '';
  $handler->display->display_options['fields']['value_6']['empty'] = 'open';
  $handler->display->display_options['fields']['value_6']['webform_nid'] = '114131';
  $handler->display->display_options['fields']['value_6']['webform_cid'] = '30';
  /* Field: Webform submissions: Download PDF */
  $handler->display->display_options['fields']['download_pdf']['id'] = 'download_pdf';
  $handler->display->display_options['fields']['download_pdf']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['download_pdf']['field'] = 'download_pdf';
  $handler->display->display_options['fields']['download_pdf']['label'] = 'PDF link';
  $handler->display->display_options['fields']['download_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['download_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['download_pdf']['text'] = 'PDF';
  $handler->display->display_options['fields']['download_pdf']['access_check'] = 1;
  /* Field: Webform submissions: Edit link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_submission']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_submission']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_submission']['access_check'] = 1;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data']['exclude'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_1']['id'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_1']['field'] = 'data';
  $handler->display->display_options['fields']['data_1']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_1']['exclude'] = TRUE;
  /* Field: Webform submission data: Value (raw) */
  $handler->display->display_options['fields']['data_2']['id'] = 'data_2';
  $handler->display->display_options['fields']['data_2']['table'] = 'webform_submitted_data';
  $handler->display->display_options['fields']['data_2']['field'] = 'data';
  $handler->display->display_options['fields']['data_2']['relationship'] = 'data_1';
  $handler->display->display_options['fields']['data_2']['label'] = 'Status';
  $handler->display->display_options['fields']['data_2']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'travel_india_webform_xls';
  $translatables['travel_india_webform_reports'] = array(
    t('Master'),
    t('Travel India webform reports'),
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
    t('Submission Data'),
    t('Sr.No.'),
    t('.'),
    t('Guest Name'),
    t('Email'),
    t('Travel date from'),
    t('Travel date to'),
    t('Guest Contact'),
    t('Host Name'),
    t('Host Contact'),
    t('open'),
    t('PDF link'),
    t('PDF'),
    t('Edit'),
    t('Value (raw)'),
    t('status'),
    t('Passport Copy'),
    t('Search'),
    t('Combine fields filter'),
    t('Page'),
    t('<a href=\'/travel_india_webform_xls\'>Download excel sheet report</a>'),
    t('Feed'),
    t('1.Passport Details:'),
    t('Status'),
  );
  $export['travel_india_webform_reports'] = $view;

  return $export;
}
