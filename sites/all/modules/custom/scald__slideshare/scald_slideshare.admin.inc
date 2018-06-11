<?php
/**
 * @file
 * Provides admin forms for slideshare's Scald Provider.
 */

/**
 * Settings form.
 */
function scald_slideshare_form() {
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('API Key'),
    '#collapsible' => TRUE,
    '#description' => t('<a href="http://www.slideshare.net/developers/applyforapi" target="_blank">Apply for an API key</a>'),
  );

  $form['settings']['scald_slideshare_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('API Key'),
    '#default_value' => variable_get('scald_slideshare_api_key', ''),
    '#required' => TRUE,
  );

  $form['settings']['scald_slideshare_shared_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Shared Secret'),
    '#default_value' => variable_get('scald_slideshare_shared_secret', ''),
    '#required' => TRUE,
  );

  $form['settings']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Handles the submission of the whole form.
 */
function scald_slideshare_form_submit($form, &$form_state) {
  variable_set('scald_slideshare_api_key', $form_state['values']['scald_slideshare_api_key']);
  variable_set('scald_slideshare_shared_secret', $form_state['values']['scald_slideshare_shared_secret']);
  drupal_set_message(t('The configuration options have been saved.'));
}

/**
 * Import form.
 */
function scald_slideshare_imports_form() {
  $types = array(
    'slideshow' => t('Identifier'),
    'user' => t('User'),
    'tag' => t('Tag'),
  );

  $imports = variable_get('scald_slideshare_imports', array());

  if (count($imports)) {
    $form['imports'] = array(
      '#type' => 'fieldset',
      '#title' => t('Current imports'),
      '#collapsible' => TRUE,
      '#tree' => TRUE,
      '#theme' => 'scald_slideshare_imports_table',
    );

    foreach ($imports as $import) {
      $form['imports'][] = array(
        'type' => array(
          '#type' => 'select',
          '#title' => t('Type'),
          '#options' => array('delete' => t('<Delete>')) + $types,
          '#default_value' => $import['type'],
          '#required' => TRUE,
        ),
        'value' => array(
          '#type' => 'textfield',
          '#title' => t('Identifier'),
          '#default_value' => $import['value'],
          '#required' => TRUE,
        ),
        'limit' => array(
          '#type' => 'textfield',
          '#title' => t('Limit'),
          '#default_value' => $import['limit'],
          '#required' => TRUE,
        ),
      );
    }

    $form['imports']['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save configuration'),
    );

    return $form;
  }
}

/**
 * Handles the submission of the whole form.
 */
function scald_slideshare_imports_form_submit($form, &$form_state) {
  $imports = array();

  foreach ($form_state['values']['imports'] as $key => $import) {
    if (is_array($import) && $import['type'] != 'delete') {
      $imports[$key] = $import;
    }
  }

  variable_set('scald_slideshare_imports', $imports);
  drupal_set_message(t('The import options have been saved.'));
}

/**
 * Import add form.
 */
function scald_slideshare_import_form_add() {
  $types = array(
    'slideshow' => t('Identifier'),
    'user' => t('User'),
    'tag' => t('Tag'),
  );

  $form['add'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add import'),
    '#collapsible' => TRUE,
  );

  $form['add']['type'] = array(
    '#type' => 'select',
    '#title' => t('Type'),
    '#options' => $types,
    '#required' => TRUE,
  );

  $form['add']['value'] = array(
    '#type' => 'textfield',
    '#title' => t('Identifier'),
    '#description' => t("This field value meaning depends on the Type field defined above :<ul><li>For a <em>slideshow</em> import, put the URL or the slideshow ID</li><li>For a <em>User</em> import, put the username whose slideshows you'd love to import here</li><li>For a <i>Tag</i> import, use the tag name.</li></ul>"),
    '#required' => TRUE,
  );

  $form['add']['limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Limit'),
    '#default_value' => 10,
    '#description' => t('The maximum number of items you want to import at each cron run.'),
    '#required' => TRUE,
  );

  $form['add']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add this import'),
  );

  return $form;
}

/**
 * Handles the submission of the form that adds a new import.
 */
function scald_slideshare_import_form_add_submit($form, &$form_state) {
  $imports = variable_get('scald_slideshare_imports', array());

  $key = $form_state['values']['type'] . '-' . $form_state['values']['value'];
  $imports[$key] = array(
    'type' => $form_state['values']['type'],
    'value' => $form_state['values']['value'],
    'limit' => $form_state['values']['limit'],
  );

  variable_set('scald_slideshare_imports', $imports);
  drupal_set_message(t('Import added'));
}

/**
 * Themes the current imports form.
 */
function theme_scald_slideshare_imports_table($variables) {
  $form = $variables['form'];

  foreach (element_children($form) as $key) {
    if (is_int($key)) {
      $rows[] = array(
        'data' => array(
          drupal_render($form[$key]['type']),
          drupal_render($form[$key]['value']),
          drupal_render($form[$key]['limit']),
        ),
      );
    }
  }

  return theme('table',
      array(
        'header' => array(t('Type'), t('Identifier'), t('Limit')),
        'rows' => $rows,
      )
    ) . drupal_render_children($form);
}
