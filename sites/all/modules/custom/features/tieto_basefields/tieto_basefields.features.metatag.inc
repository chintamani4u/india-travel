<?php
/**
 * @file
 * tieto_basefields.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function tieto_basefields_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => TRUE,
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:field_meta_title]',
      ),
      'description' => array(
        'value' => '[node:field-meta-description]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:title' => array(
        'value' => '[node:field_meta_title]',
      ),
      'og:description' => array(
        'value' => '[node:field-meta-description]',
      ),
      'og:image' => array(
        'value' => '[node:field_image_download],http://www.tieto.com/sites/default/files/thumbnails/image/tieto-100mm-rgb-blue_0.png',
      ),
    ),
  );

  // Exported Metatag config instance: node:tieto_campaign.
  $config['node:tieto_campaign'] = array(
    'instance' => 'node:tieto_campaign',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
    ),
  );

  // Exported Metatag config instance: node:tieto_contact_form.
  $config['node:tieto_contact_form'] = array(
    'instance' => 'node:tieto_contact_form',
    'config' => array(
      'title' => array(
        'value' => 'Contact [node:title] | Tieto',
      ),
    ),
  );

  // Exported Metatag config instance: node:tieto_jobs_vacancy.
  $config['node:tieto_jobs_vacancy'] = array(
    'instance' => 'node:tieto_jobs_vacancy',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
      'og:type' => array(
        'value' => 'profile',
      ),
      'og:title' => array(
        'value' => '[user:name]',
      ),
    ),
  );

  return $config;
}
