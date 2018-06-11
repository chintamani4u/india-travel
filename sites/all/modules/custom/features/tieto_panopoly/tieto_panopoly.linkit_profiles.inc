<?php
/**
 * @file
 * tieto_panopoly.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function tieto_panopoly_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'normal_profile';
  $linkit_profile->admin_title = 'normal profile';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'tieto_addresses' => 0,
        'tieto_content_page' => 0,
        'tieto_campaign' => 0,
        'contact' => 0,
        'crisis_communication' => 0,
        'tieto_customer_reference_case' => 0,
        'tieto_event' => 0,
        'tieto_frontpage' => 0,
        'tieto_carousel_content' => 0,
        'tieto_hugin_feed' => 0,
        'industry_hub_page' => 0,
        'magazine_article' => 0,
        'tieto_nasdaq_feed' => 0,
        'tieto_news_context' => 0,
        'tieto_news_article' => 0,
        'tieto_protected_downloads' => 0,
        'tieto_landing_page' => 0,
        'tieto_service_group_page' => 0,
        'tieto_service_page' => 0,
        'tieto_teleport' => 0,
        'tieto_cv_page' => 0,
        'tieto_contact_form' => 0,
        'tieto_jobs_vacancy' => 0,
        'tieto_map' => 0,
        'tieto_top_story' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'panopoly_categories' => 0,
        'industry' => 0,
        'domains' => 0,
        'concepts' => 0,
        'technologies' => 0,
        'tieto_news_types' => 0,
        'tieto_event_types' => 0,
        'scald_authors' => 0,
        'scald_tags' => 0,
        'tieto_hugin' => 0,
        'language' => 0,
        'material_types' => 0,
        'sites' => 0,
        'tieto_jobs_jobarea' => 0,
        'tieto_jobs_locations' => 0,
        'tieto_jobs_tags' => 0,
        'contact_type' => 0,
        'tieto_times_issue' => 0,
        'product_development' => 0,
        'magazine' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'audio' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    7 => 1,
    3 => 1,
    9 => 1,
    5 => 1,
    26 => 1,
    8 => 1,
    11 => 1,
    16 => 1,
    21 => 1,
  );
  $linkit_profile->weight = 0;
  $export['normal_profile'] = $linkit_profile;

  return $export;
}
