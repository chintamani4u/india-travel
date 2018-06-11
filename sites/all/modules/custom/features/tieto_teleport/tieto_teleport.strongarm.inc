<?php
/**
 * @file
 * tieto_teleport.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_teleport_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tieto_teleport';
  $strongarm->value = array(
    'view_modes' => array(
      'teleported' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
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
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_tieto_teleport';
  $strongarm->value = '1';
  $export['i18n_node_extended_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_tieto_teleport';
  $strongarm->value = array(
    0 => 'required',
  );
  $export['i18n_node_options_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_tieto_teleport';
  $strongarm->value = '1';
  $export['language_content_type_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tieto_teleport';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-china',
    2 => 'menu-czech',
    3 => 'menu-denmark',
    4 => 'menu-estonia',
    5 => 'menu-finland',
    6 => 'menu-germany',
    7 => 'menu-india',
    8 => 'menu-latvia',
    9 => 'menu-lithuania',
    10 => 'menu-malaysia',
    11 => 'menu-metherlands',
    12 => 'menu-norway',
    13 => 'menu-poland',
    14 => 'menu-russia',
    15 => 'menu-sweden',
    16 => 'menu-austria',
  );
  $export['menu_options_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tieto_teleport';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tieto_teleport';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tieto_teleport';
  $strongarm->value = '0';
  $export['node_preview_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tieto_teleport';
  $strongarm->value = 0;
  $export['node_submitted_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_tieto_teleport';
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
  $export['panelizer_defaults_node_tieto_teleport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:tieto_teleport_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:29:"panelizer_node:tieto_teleport";s:23:"allowed_layout_settings";a:40:{s:8:"flexible";b:0;s:13:"twocol_bricks";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:17:"threecol_33_34_33";b:0;s:6:"onecol";b:0;s:6:"twocol";b:0;s:14:"twocol_stacked";b:0;s:7:"moscone";b:0;s:8:"bartlett";b:0;s:5:"rolph";b:0;s:4:"pond";b:0;s:5:"geary";b:0;s:13:"selby_flipped";b:0;s:6:"phelan";b:0;s:16:"bartlett_flipped";b:0;s:22:"bryant_flipped_flipped";b:1;s:5:"sutro";b:0;s:5:"selby";b:0;s:12:"webb_flipped";b:0;s:8:"mccoppin";b:0;s:15:"moscone_flipped";b:0;s:17:"sanderson_flipped";b:0;s:7:"brenham";b:0;s:6:"whelan";b:1;s:6:"bryant";b:1;s:5:"brown";b:0;s:4:"webb";b:0;s:6:"harris";b:0;s:9:"sanderson";b:0;s:6:"taylor";b:0;s:15:"hewston_flipped";b:0;s:12:"burr_flipped";b:1;s:14:"taylor_flipped";b:0;s:4:"burr";b:1;s:7:"hewston";b:0;s:6:"boxton";b:1;s:15:"brenham_flipped";b:0;s:12:"sutro_double";b:0;}s:10:"form_state";N;}';
  $export['panelizer_node:tieto_teleport_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:tieto_teleport_default';
  $strongarm->value = array(
    'custom' => 'custom',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_form_field' => 'entity_form_field',
    'token' => 'token',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:tieto_teleport_default'] = $strongarm;

  return $export;
}
