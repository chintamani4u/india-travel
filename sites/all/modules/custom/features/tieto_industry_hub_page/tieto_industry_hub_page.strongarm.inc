<?php
/**
 * @file
 * tieto_industry_hub_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_industry_hub_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__industry_hub_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_industry_hub_page';
  $strongarm->value = '1';
  $export['i18n_node_extended_industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_industry_hub_page';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_industry_hub_page';
  $strongarm->value = '1';
  $export['language_content_type_industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_industry_hub_page';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-austria',
    2 => 'menu-china',
    3 => 'menu-czech',
    4 => 'menu-denmark',
    5 => 'menu-estonia',
    6 => 'menu-finland',
    7 => 'menu-germany',
    8 => 'menu-india',
    9 => 'menu-italy',
    10 => 'menu-latvia',
    11 => 'menu-lithuania',
    12 => 'menu-malaysia',
    13 => 'menu-metherlands',
    14 => 'menu-norway',
    15 => 'menu-philippines',
    16 => 'menu-poland',
    17 => 'menu-russia',
    18 => 'menu-spain',
    19 => 'menu-sweden',
    20 => 'menu-uk',
    21 => 'menu-usa',
  );
  $export['menu_options_industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_industry_hub_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_industry_hub_page';
  $strongarm->value = '0';
  $export['node_preview_industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_industry_hub_page';
  $strongarm->value = 0;
  $export['node_submitted_industry_hub_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_industry_hub_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_industry_hub_page'] = $strongarm;

  return $export;
}
