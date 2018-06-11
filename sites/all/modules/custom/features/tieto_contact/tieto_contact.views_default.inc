<?php
/**
 * @file
 * tieto_contact.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tieto_contact_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tieto_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tieto Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Referencing page */
  $handler->display->display_options['relationships']['reverse_field_contact_reference_node']['id'] = 'reverse_field_contact_reference_node';
  $handler->display->display_options['relationships']['reverse_field_contact_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_contact_reference_node']['field'] = 'reverse_field_contact_reference_node';
  $handler->display->display_options['relationships']['reverse_field_contact_reference_node']['ui_name'] = 'Referencing page';
  $handler->display->display_options['relationships']['reverse_field_contact_reference_node']['label'] = 'Referencing page';
  $handler->display->display_options['relationships']['reverse_field_contact_reference_node']['required'] = TRUE;
  /* Relationship: Contact image */
  $handler->display->display_options['relationships']['field_image_atom_sid']['id'] = 'field_image_atom_sid';
  $handler->display->display_options['relationships']['field_image_atom_sid']['table'] = 'field_data_field_image_atom';
  $handler->display->display_options['relationships']['field_image_atom_sid']['field'] = 'field_image_atom_sid';
  $handler->display->display_options['relationships']['field_image_atom_sid']['ui_name'] = 'Contact image';
  $handler->display->display_options['relationships']['field_image_atom_sid']['label'] = 'Contact image';
  /* Field: Contact nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Contact nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Role */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['ui_name'] = 'Role';
  $handler->display->display_options['fields']['field_role']['label'] = '';
  $handler->display->display_options['fields']['field_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_role']['hide_empty'] = TRUE;
  /* Field: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['ui_name'] = 'Phone number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number']['hide_empty'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'Send a message';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'send-message';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['settings'] = array(
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
  /* Sort criterion: Content: Contact Reference (field_contact_reference:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_contact_reference';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content page */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_contact_reference_node';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Content page';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'contact' => 'contact',
  );

  /* Display: Sidebar contacts */
  $handler = $view->new_display('panel_pane', 'Sidebar contacts', 'sidebar');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Sidebar Contacts';
  $handler->display->display_options['pane_category']['name'] = 'Tieto Contacts';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content page',
    ),
  );

  /* Display: Country contacts */
  $handler = $view->new_display('panel_pane', 'Country contacts', 'country');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contact image */
  $handler->display->display_options['relationships']['field_image_atom_sid']['id'] = 'field_image_atom_sid';
  $handler->display->display_options['relationships']['field_image_atom_sid']['table'] = 'field_data_field_image_atom';
  $handler->display->display_options['relationships']['field_image_atom_sid']['field'] = 'field_image_atom_sid';
  $handler->display->display_options['relationships']['field_image_atom_sid']['ui_name'] = 'Contact image';
  $handler->display->display_options['relationships']['field_image_atom_sid']['label'] = 'Contact image';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Addresses (field_addresses_country) */
  $handler->display->display_options['arguments']['field_addresses_country_value']['id'] = 'field_addresses_country_value';
  $handler->display->display_options['arguments']['field_addresses_country_value']['table'] = 'field_data_field_addresses_country';
  $handler->display->display_options['arguments']['field_addresses_country_value']['field'] = 'field_addresses_country_value';
  $handler->display->display_options['arguments']['field_addresses_country_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_addresses_country_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_addresses_country_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_addresses_country_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_addresses_country_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_addresses_country_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'contact' => 'contact',
  );
  $handler->display->display_options['pane_category']['name'] = 'Tieto Addresses';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_addresses_country_value' => array(
      'type' => 'context',
      'context' => 'query_string.raw',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Addresses (field_addresses_country)',
    ),
  );

  /* Display: Sidebar contacts  UA pages */
  $handler = $view->new_display('panel_pane', 'Sidebar contacts  UA pages', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Контакти';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contact nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Contact nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Role */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['ui_name'] = 'Role';
  $handler->display->display_options['fields']['field_role']['label'] = '';
  $handler->display->display_options['fields']['field_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_role']['hide_empty'] = TRUE;
  /* Field: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['ui_name'] = 'Phone number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number']['hide_empty'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'Відправити повідомлення';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'send-message';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['settings'] = array(
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
  $handler->display->display_options['pane_title'] = 'Sidebar Contacts';
  $handler->display->display_options['pane_category']['name'] = 'Tieto Contacts';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content page',
    ),
  );
  $translatables['tieto_contacts'] = array(
    t('Master'),
    t('Contact'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Referencing page'),
    t('Contact image'),
    t('Send a message'),
    t('All'),
    t('Sidebar contacts'),
    t('Sidebar Contacts'),
    t('Tieto Contacts'),
    t('Country contacts'),
    t('Tieto Addresses'),
    t('Sidebar contacts  UA pages'),
    t('Контакти'),
    t('Відправити повідомлення'),
  );
  $export['tieto_contacts'] = $view;

  return $export;
}
