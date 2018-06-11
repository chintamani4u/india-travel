<?php

/**
 * Simple block to display iRec links.
 */
$plugin = array(
  'title' => 'iRec links',
  // Name of a function which will render the block.
  'render callback' => 'tieto_jobs_ireclinks_render',
  // The default context.
  'defaults' => array(
    'links_to_show' => array(
      'log_in' => TRUE,
      'sign_up' => TRUE,
      'send_open_application' => TRUE,
    ),
  ),
  'edit form' => 'tieto_jobs_ireclinks_edit_form',
  'category' => array('Tieto Jobs'),
);

/**
 * Helper; List of pre-defined irec links.
 */
function _tieto_jobs_ireclinks() {
  $irec_url = 'https://jobs.tieto.com/';
  $links = array(
    'log_in' => array(
      'title' => t('Log in'),
      'href' => "{$irec_url}public/login",
    ),
    'sign_up' => array(
      'title' => t('Sign up'),
      'href' => "{$irec_url}public/applicants/new",
    ),
    'send_open_application' => array(
      'title' => t('Send an open application'),
      'href' => "{$irec_url}public/general_applications/0/applicants/0/review_profile",
    ),
    'my_profile' => array(
      'title' => t('My profile'),
      'href' => "{$irec_url}public/applicants/0",
    ),
    'my_applications' => array(
      'title' => t('My applications'),
      'href' => "{$irec_url}public/applications",
    ),
  );
  return $links;
}

function tieto_jobs_ireclinks_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->title = NULL;

  $links = array();
  foreach (_tieto_jobs_ireclinks() as $key => $link) {
    if (!empty($conf['links_to_show'][$key])) {
      $links[] = array(
        'title' => $link['title'],
        'href' => $link['href'],
      );
    }
  }
  $block->content = theme('links', array('links' => $links));

  return $block;
}

function tieto_jobs_ireclinks_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['links_to_show'] = array(
    '#title' => 'Show links to',
    '#type' => 'checkboxes',
  );
  foreach (_tieto_jobs_ireclinks() as $key => $link) {
    $form['links_to_show']['#options'][$key] = $link['title'];
    if (!empty($conf['links_to_show'][$key])) {
      $form['links_to_show']['#default_value'][$key] = $key;
    }
  }

  return $form;
}

function tieto_jobs_ireclinks_edit_form_submit($form, &$form_state) {
  $form_state['conf']['links_to_show'] = array_filter($form_state['values']['links_to_show']);
}
