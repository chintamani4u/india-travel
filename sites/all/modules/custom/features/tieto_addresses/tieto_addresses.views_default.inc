<?php
/**
 * @file
 * tieto_addresses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_addresses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'addresses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Addresses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_office_address_country' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_office_address_locality' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'getlocations';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '450px';
  $handler->display->display_options['style_options']['node_map_marker'] = 'lblue';
  $handler->display->display_options['style_options']['term_map_marker'] = 'lblue';
  $handler->display->display_options['style_options']['zoom'] = '3';
  $handler->display->display_options['style_options']['minzoom_map'] = '2';
  $handler->display->display_options['style_options']['maxzoom_map'] = '18';
  $handler->display->display_options['style_options']['controltype'] = 'large';
  $handler->display->display_options['style_options']['pancontrol'] = 0;
  $handler->display->display_options['style_options']['mtc'] = 'none';
  $handler->display->display_options['style_options']['sv_show'] = 1;
  $handler->display->display_options['style_options']['fullscreen'] = 1;
  $handler->display->display_options['style_options']['show_bubble_on_one_marker'] = 1;
  $handler->display->display_options['style_options']['nodezoom'] = '12';
  $handler->display->display_options['style_options']['markeraction'] = '2';
  $handler->display->display_options['style_options']['markeractiontype'] = '1';
  $handler->display->display_options['style_options']['usemarkermanager'] = 0;
  $handler->display->display_options['style_options']['useclustermanager'] = 0;
  $handler->display->display_options['style_options']['pansetting'] = '2';
  $handler->display->display_options['style_options']['custom_content_enable'] = 1;
  $handler->display->display_options['style_options']['custom_content_source'] = 'field_office_address';
  $handler->display->display_options['style_options']['rectangles_dist'] = '0';
  $handler->display->display_options['style_options']['circles_radius'] = '0';
  $handler->display->display_options['style_options']['search_places_size'] = '40';
  $handler->display->display_options['style_options']['category_method'] = '0';
  $handler->display->display_options['style_options']['category_term_reference_field'] = 'field_concepts';
  $handler->display->display_options['style_options']['highlight_radius'] = '10';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['id'] = 'reverse_field_office_addresses_node';
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['field'] = 'reverse_field_office_addresses_node';
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['label'] = 'map-field_office_addresses';
  /* Field: Getlocations Fields: Glid */
  $handler->display->display_options['fields']['glid']['id'] = 'glid';
  $handler->display->display_options['fields']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['glid']['field'] = 'glid';
  $handler->display->display_options['fields']['glid']['label'] = '';
  $handler->display->display_options['fields']['glid']['element_label_colon'] = FALSE;
  /* Field: Getlocations Fields: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Getlocations Fields: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Getlocations Fields: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Getlocations Fields: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['alter']['text'] = '[field_html5geolocation] ';
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  /* Field: Getlocations Fields: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['alter']['text'] = '[field_html5geolocation_1]';
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  /* Field: Getlocations Fields: Marker */
  $handler->display->display_options['fields']['marker']['id'] = 'marker';
  $handler->display->display_options['fields']['marker']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['marker']['field'] = 'marker';
  $handler->display->display_options['fields']['marker']['label'] = '';
  $handler->display->display_options['fields']['marker']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'P.';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<b>p.</b>[field_phone]';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = 'f.';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<b>f.</b>[field_fax]';
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address']['id'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address']['label'] = '';
  $handler->display->display_options['fields']['field_office_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address']['alter']['text'] = '[field_office_address]</br>
[field_phone]</br>
[field_fax]';
  $handler->display->display_options['fields']['field_office_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Address_map */
  $handler->display->display_options['fields']['field_office_address1']['id'] = 'field_office_address1';
  $handler->display->display_options['fields']['field_office_address1']['table'] = 'field_data_field_office_address1';
  $handler->display->display_options['fields']['field_office_address1']['field'] = 'field_office_address1';
  $handler->display->display_options['fields']['field_office_address1']['label'] = '';
  $handler->display->display_options['fields']['field_office_address1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_address1']['settings'] = array(
    'display_showmap' => 1,
    'display_maplink' => 1,
    'display_mapwidth' => '300px',
    'display_mapheight' => '200px',
    'display_latlong' => 1,
    'display_dms' => 0,
    'display_onemap' => 0,
    'display_name' => 1,
    'display_street' => 1,
    'display_additional' => 1,
    'display_city' => 1,
    'display_province' => 1,
    'display_postal_code' => 1,
    'display_country' => 1,
    'country_full' => 1,
    'nodezoom' => '12',
    'minzoom_map' => '-1',
    'maxzoom_map' => '-1',
    'controltype' => 'small',
    'pancontrol' => 1,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 1,
      'Hybrid' => 1,
      'Physical' => 1,
      'OpenStreetMap' => 0,
    ),
    'behavior' => array(
      'scale' => 0,
      'overview' => 0,
      'overview_opened' => 0,
      'scrollwheel' => 0,
    ),
    'draggable' => 1,
    'map_backgroundcolor' => '',
    'visual_refresh' => 0,
    'show_maplinks' => 0,
    'show_bubble_on_one_marker' => 0,
    'fullscreen' => 0,
    'streetview_show' => 0,
    'trafficinfo' => 0,
    'trafficinfo_state' => 0,
    'bicycleinfo' => 0,
    'bicycleinfo_state' => 0,
    'transitinfo' => 0,
    'transitinfo_state' => 0,
    'poi_show' => 1,
    'transit_show' => 1,
    'polygons_enable' => 0,
    'polygons_strokecolor' => '#FF0000',
    'polygons_strokeopacity' => '0.8',
    'polygons_strokeweight' => '3',
    'polygons_fillcolor' => '#FF0000',
    'polygons_fillopacity' => '0.35',
    'polygons_clickable' => 0,
    'polygons_message' => '',
    'polygons_coords' => '',
    'rectangles_enable' => 0,
    'rectangles_strokecolor' => '#FF0000',
    'rectangles_strokeopacity' => '0.8',
    'rectangles_strokeweight' => '3',
    'rectangles_fillcolor' => '#FF0000',
    'rectangles_fillopacity' => '0.35',
    'rectangles_clickable' => 0,
    'rectangles_message' => '',
    'rectangles_coords' => '',
    'circles_enable' => 0,
    'circles_strokecolor' => '#FF0000',
    'circles_strokeopacity' => '0.8',
    'circles_strokeweight' => '3',
    'circles_fillcolor' => '#FF0000',
    'circles_fillopacity' => '0.35',
    'circles_radius' => '0',
    'circles_clickable' => 0,
    'circles_message' => '',
    'circles_coords' => '',
    'polylines_enable' => 0,
    'polylines_strokecolor' => '#FF0000',
    'polylines_strokeopacity' => '0.8',
    'polylines_strokeweight' => '3',
    'polylines_clickable' => 0,
    'polylines_message' => '',
    'polylines_coords' => '',
    'search_places' => 0,
    'search_places_size' => '40',
    'search_places_position' => 'outside_above',
    'search_places_label' => 'Google Places Search',
    'search_places_placeholder' => '',
    'search_places_list' => 0,
    'search_places_dd' => 0,
    'markeractiontype' => '1',
    'markeraction' => '0',
  );
  /* Sort criterion: Content: Office Address - Country */
  $handler->display->display_options['sorts']['field_office_address_country']['id'] = 'field_office_address_country';
  $handler->display->display_options['sorts']['field_office_address_country']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['sorts']['field_office_address_country']['field'] = 'field_office_address_country';
  /* Sort criterion: Getlocations Fields: City */
  $handler->display->display_options['sorts']['city']['id'] = 'city';
  $handler->display->display_options['sorts']['city']['table'] = 'getlocations_fields';
  $handler->display->display_options['sorts']['city']['field'] = 'city';
  $handler->display->display_options['sorts']['city']['relationship'] = 'reverse_field_office_addresses_node';
  /* Sort criterion: Content: Office Address - Locality (i.e. City) */
  $handler->display->display_options['sorts']['field_office_address_locality']['id'] = 'field_office_address_locality';
  $handler->display->display_options['sorts']['field_office_address_locality']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['sorts']['field_office_address_locality']['field'] = 'field_office_address_locality';
  /* Sort criterion: Content: Office Address - Postal code */
  $handler->display->display_options['sorts']['field_office_address_postal_code']['id'] = 'field_office_address_postal_code';
  $handler->display->display_options['sorts']['field_office_address_postal_code']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['sorts']['field_office_address_postal_code']['field'] = 'field_office_address_postal_code';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_office_addresses_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = 'if (!empty($_GET[\'country\'])) {
  return false;
}
return true;';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'tieto_addresses' => 'tieto_addresses',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Office Address - Country */
  $handler->display->display_options['filters']['field_office_address_country']['id'] = 'field_office_address_country';
  $handler->display->display_options['filters']['field_office_address_country']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['filters']['field_office_address_country']['field'] = 'field_office_address_country';
  $handler->display->display_options['filters']['field_office_address_country']['group'] = 1;
  $handler->display->display_options['filters']['field_office_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_office_address_country']['expose']['operator_id'] = 'field_office_address_country_op';
  $handler->display->display_options['filters']['field_office_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_office_address_country']['expose']['operator'] = 'field_office_address_country_op';
  $handler->display->display_options['filters']['field_office_address_country']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_office_address_country']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Office Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_office_address_locality']['id'] = 'field_office_address_locality';
  $handler->display->display_options['filters']['field_office_address_locality']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['filters']['field_office_address_locality']['field'] = 'field_office_address_locality';
  $handler->display->display_options['filters']['field_office_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_office_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_office_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['operator_id'] = 'field_office_address_locality_op';
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['operator'] = 'field_office_address_locality_op';
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['identifier'] = 'city';
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['autocomplete_items'] = '0';
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['autocomplete_field'] = 'field_office_address';
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_office_address_locality']['expose']['autocomplete_dependent'] = 0;

  /* Display: Addresses */
  $handler = $view->new_display('panel_pane', 'Addresses', 'panel_pane_addresses');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Tieto Addresses';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Address list */
  $handler = $view->new_display('attachment', 'Address list', 'office_addresses');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['id'] = 'reverse_field_office_addresses_node';
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['field'] = 'reverse_field_office_addresses_node';
  $handler->display->display_options['relationships']['reverse_field_office_addresses_node']['label'] = 'map-field_office_addresses';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Html5geolocation */
  $handler->display->display_options['fields']['field_html5geolocation']['id'] = 'field_html5geolocation';
  $handler->display->display_options['fields']['field_html5geolocation']['table'] = 'field_data_field_html5geolocation';
  $handler->display->display_options['fields']['field_html5geolocation']['field'] = 'field_html5geolocation';
  $handler->display->display_options['fields']['field_html5geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_html5geolocation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_html5geolocation']['element_label_colon'] = FALSE;
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address']['id'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address']['label'] = '';
  $handler->display->display_options['fields']['field_office_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Business ID */
  $handler->display->display_options['fields']['field_business_id']['id'] = 'field_business_id';
  $handler->display->display_options['fields']['field_business_id']['table'] = 'field_data_field_business_id';
  $handler->display->display_options['fields']['field_business_id']['field'] = 'field_business_id';
  $handler->display->display_options['fields']['field_business_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_business_id']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_1']['id'] = 'field_office_address_1';
  $handler->display->display_options['fields']['field_office_address_1']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_1']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_office_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_1']['alter']['text'] = '[field_office_address_1-locality] ';
  $handler->display->display_options['fields']['field_office_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_address_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_office_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_1']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_2']['id'] = 'field_office_address_2';
  $handler->display->display_options['fields']['field_office_address_2']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_2']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_office_address_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_2']['alter']['text'] = '[field_office_address_2-country]';
  $handler->display->display_options['fields']['field_office_address_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_address_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_office_address_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_2']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'p. ';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_phone']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_class'] = 'field-label-inline';
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = 'f. ';
  $handler->display->display_options['fields']['field_fax']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_fax']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_fax']['element_wrapper_class'] = 'field-label-inline';
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'panel_pane_addresses' => 'panel_pane_addresses',
    'panel_addresses' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $translatables['addresses'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('map-field_office_addresses'),
    t('City'),
    t('Country'),
    t('Name'),
    t('[field_html5geolocation] '),
    t('[field_html5geolocation_1]'),
    t('P.'),
    t('<b>p.</b>[field_phone]'),
    t('f.'),
    t('<b>f.</b>[field_fax]'),
    t('[field_office_address]</br>
[field_phone]</br>
[field_fax]'),
    t('All'),
    t('Addresses'),
    t('Tieto Addresses'),
    t('Address list'),
    t('Business ID'),
    t('[field_office_address_1-locality] '),
    t('[field_office_address_2-country]'),
    t('p. '),
    t('f. '),
  );
  $export['addresses'] = $view;

  $view = new view();
  $view->name = 'administer_addresses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administer Addresses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administer Addresses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    9 => '9',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_office_address_1' => 'field_office_address_1',
    'title' => 'title',
    'field_office_address' => 'field_office_address',
    'field_html5geolocation' => 'field_html5geolocation',
    'field_phone' => 'field_phone',
    'field_fax' => 'field_fax',
    'view_node' => 'view_node',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_office_address_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_html5geolocation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'h1 headline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Business ID */
  $handler->display->display_options['fields']['field_business_id']['id'] = 'field_business_id';
  $handler->display->display_options['fields']['field_business_id']['table'] = 'field_data_field_business_id';
  $handler->display->display_options['fields']['field_business_id']['field'] = 'field_business_id';
  $handler->display->display_options['fields']['field_business_id']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_6']['id'] = 'field_office_address_6';
  $handler->display->display_options['fields']['field_office_address_6']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_6']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_6']['label'] = 'Company';
  $handler->display->display_options['fields']['field_office_address_6']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_6']['alter']['text'] = '[field_office_address_6-organisation_name] ';
  $handler->display->display_options['fields']['field_office_address_6']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_6']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_4']['id'] = 'field_office_address_4';
  $handler->display->display_options['fields']['field_office_address_4']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_4']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_4']['label'] = 'Address';
  $handler->display->display_options['fields']['field_office_address_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_4']['alter']['text'] = '[field_office_address_4-thoroughfare]';
  $handler->display->display_options['fields']['field_office_address_4']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_4']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_3']['id'] = 'field_office_address_3';
  $handler->display->display_options['fields']['field_office_address_3']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_3']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_3']['label'] = 'Address 2';
  $handler->display->display_options['fields']['field_office_address_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_3']['alter']['text'] = '[field_office_address_3-premise] [field_office_address_3-sub_premise]';
  $handler->display->display_options['fields']['field_office_address_3']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_3']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address']['id'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address']['label'] = 'Postal code';
  $handler->display->display_options['fields']['field_office_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address']['alter']['text'] = '[field_office_address-postal_code] ';
  $handler->display->display_options['fields']['field_office_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_2']['id'] = 'field_office_address_2';
  $handler->display->display_options['fields']['field_office_address_2']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_2']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_2']['label'] = 'City';
  $handler->display->display_options['fields']['field_office_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_2']['alter']['text'] = '[field_office_address_2-locality]';
  $handler->display->display_options['fields']['field_office_address_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_2']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_5']['id'] = 'field_office_address_5';
  $handler->display->display_options['fields']['field_office_address_5']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_5']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_5']['label'] = 'State';
  $handler->display->display_options['fields']['field_office_address_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_5']['alter']['text'] = '[field_office_address_5-administrative_area] ';
  $handler->display->display_options['fields']['field_office_address_5']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_5']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_1']['id'] = 'field_office_address_1';
  $handler->display->display_options['fields']['field_office_address_1']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_1']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_1']['label'] = 'Address';
  $handler->display->display_options['fields']['field_office_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_1']['alter']['text'] = '[field_office_address_1-thoroughfare]';
  $handler->display->display_options['fields']['field_office_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Address */
  $handler->display->display_options['fields']['field_office_address_7']['id'] = 'field_office_address_7';
  $handler->display->display_options['fields']['field_office_address_7']['table'] = 'field_data_field_office_address';
  $handler->display->display_options['fields']['field_office_address_7']['field'] = 'field_office_address';
  $handler->display->display_options['fields']['field_office_address_7']['label'] = 'Country';
  $handler->display->display_options['fields']['field_office_address_7']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_office_address_7']['alter']['text'] = '[field_office_address_7-country]';
  $handler->display->display_options['fields']['field_office_address_7']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_office_address_7']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
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
    'tieto_addresses' => 'tieto_addresses',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/all-addresses';
  $translatables['administer_addresses'] = array(
    t('Master'),
    t('Administer Addresses'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('h1 headline'),
    t('Business ID'),
    t('Phone'),
    t('Fax'),
    t('Company'),
    t('[field_office_address_6-organisation_name] '),
    t('Address'),
    t('[field_office_address_4-thoroughfare]'),
    t('Address 2'),
    t('[field_office_address_3-premise] [field_office_address_3-sub_premise]'),
    t('Postal code'),
    t('[field_office_address-postal_code] '),
    t('City'),
    t('[field_office_address_2-locality]'),
    t('State'),
    t('[field_office_address_5-administrative_area] '),
    t('[field_office_address_1-thoroughfare]'),
    t('Country'),
    t('[field_office_address_7-country]'),
    t('Page'),
  );
  $export['administer_addresses'] = $view;

  return $export;
}
