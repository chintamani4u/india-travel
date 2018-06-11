<?php

function tieto_worldwide_admin_url_convert_form() {
  ctools_include('environment', 'tieto_worldwide');
  $default_to = tieto_worldwide_environment_get_env();
  $default_to_from = array(
    'local' => 'dev',
    'dev' => 'test',
    'test' => 'prod',
    'prod' => 'test',
  );
  $domains = tieto_worldwide_environment_get_domains('prod');
  $form['replace_to'] = array(
    '#type' => 'select',
    '#title' => 'Convert to',
    '#options' => array(
      'local' => 'Local',
      'dev' => 'Development',
      'test' => 'Staging',
      'prod' => 'Production',
    ),
    '#default_value' => $default_to,
  );
  $form['replace_from'] = array(
    '#type' => 'select',
    '#title' => 'Convert from',
    '#options' => array(
      'local' => 'Local',
      'dev' => 'Development',
      'test' => 'Staging',
      'prod' => 'Production',
    ),
    '#default_value' => $default_to_from[$default_to],
  );
  $form['replace_domains'] = array(
    '#type' => 'checkboxes',
    '#title' => 'Choose languages',
    '#options' => $domains,
  );
  $form['replace_fields'] = array(
    '#type' => 'checkboxes',
    '#title' => 'Choose fields to convert',
    '#options' => _tieto_worldwide_admin_url_convert_form_db_fields(),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Go',
  );
  return $form;
}

function _tieto_worldwide_admin_url_convert_form_db_fields() {
  $db_fields = array();

  $field_names = array(
    'body',
    'field_atom_customtext',
    'field_destination_link',
    'field_quick_links_links',
  );
  foreach ($field_names as $field_name) {
    $field = field_info_field($field_name);

    $tables = array();
    $tables['data'] = _field_sql_storage_tablename($field);
    $tables['revision'] = _field_sql_storage_revision_tablename($field);

    $columns = array();
    switch ($field['type']) {
      case 'text':
      case 'text_long':
        $columns['value'] = _field_sql_storage_columnname($field_name, 'value');
        break;
      case 'text_with_summary':
        $columns['value'] = _field_sql_storage_columnname($field_name, 'value');
        $columns['summary'] = _field_sql_storage_columnname($field_name, 'summary');
        break;
      case 'link_field':
        $columns['url'] = _field_sql_storage_columnname($field_name, 'url');
        break;
    }

    foreach ($tables as $tablekey => $tablename) {
      if (db_table_exists($tablename)) {
        foreach ($columns as $columnkey => $column) {
          if (db_field_exists($tablename, $column)) {
            $db_fields["{$tablename}.{$column}"] = "{$field_name}:{$tablekey}.{$columnkey}"; 
          }
        }
      }
    }
  }

  $db_fields['menu_links.link_path'] = "Menu links";
  $db_fields['panels_pane.configuration'] = "Pane configuration";

  return $db_fields;
}

function tieto_worldwide_admin_url_convert_form_submit($form, &$form_state) {
  $to = $form_state['values']['replace_to'];
  $from = $form_state['values']['replace_from'];
  $languages = array_filter($form_state['values']['replace_domains']);
  $fields = array_filter($form_state['values']['replace_fields']);
  $operations = array();
  foreach ($fields as $db_field) {
    foreach (tieto_worldwide_admin_url_convert_batch_db_field_ops($db_field, $to, $from, $languages) as $op) {
      $operations[] = array($op['callback'], $op['arguments']);
    }
  }
  $batch = array(
    'operations' => $operations,
    'finished' => 'tieto_worldwide_admin_url_convert_batch_finished',
    'file' => drupal_get_path('module', 'tieto_worldwide') . '/includes/url_convert.admin.inc',
  );
  batch_set($batch);
}

function tieto_worldwide_admin_url_convert_batch_db_field_ops($db_field, $to_env, $from_env, $languages) {
  ctools_include('environment', 'tieto_worldwide');
  $to_domains = tieto_worldwide_environment_get_domains($to_env);
  $from_domains = tieto_worldwide_environment_get_domains($from_env);
  $replace = array();
  foreach ($from_domains as $language => $domain) {
    if (isset($languages[$language])) {
      $replace['://' . $domain] = '://' . $to_domains[$language];
    }
  }

  $ops = array();
  list($tablename, $column) = explode('.', $db_field);
  foreach ($replace as $from => $to) {
    $q = new stdClass;
    $q->table = $tablename;
    $q->column = $column;
    $q->from_str = $from;
    $q->to_str = $to;

    $ops[] = array(
      'callback' => 'tieto_worldwide_admin_url_convert_batch_op_db_field',
      'arguments' => array($q),
    );
  }

  return $ops;
}

function tieto_worldwide_admin_url_convert_batch_op_db_field($q, &$context) {
  $seconds = microtime(TRUE);
  $updated = db_update($q->table)
    ->expression($q->column, "REPLACE({$q->column}, :from, :to)", array(
      ':from' => $q->from_str,
      ':to' => $q->to_str,
    ))
    ->condition($q->column, '%' . db_like($q->from_str) . '%', 'LIKE')
    ->execute();
  $seconds = microtime(TRUE) - $seconds;

  $context['message'] = t("replace(@table.@column, '@from', '@to') @count rows in @seconds s", array(
    '@table' => $q->table,
    '@column' => $q->column,
    '@from' => $q->from_str,
    '@to' => $q->to_str,
    '@seconds' => round($seconds, 1),
    '@count' => $updated,
  ));

  $context['results'][] = $context['message'];
}

function tieto_worldwide_admin_url_convert_batch_finished($success, $results, $operations) {
  if ($success) {
    $message = count($results) . ' processed.';
    if (count($results)) {
      drupal_set_message('Now, flush all caches.', 'warning');
    }
  }
  else {
    $error_operation = reset($operations);
    $message = 'An error occurred while processing ' . $error_operation[0] . ' with arguments :' . print_r($error_operation[0], TRUE);
  }
  drupal_set_message($message);
}
