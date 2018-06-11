<?php
/**
 * @file
 * tieto_key_topics.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tieto_key_topics_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-key_topics_navigation-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'key_topics_navigation-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'key-topics/*
fokusomraden/*
kjerneomrader/*
fokusalueet/*
pagrindines-temos/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'tietocom' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'tietocom',
        'weight' => -62,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
