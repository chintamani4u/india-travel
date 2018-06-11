<?php
/**
 * @file
 * panopoly_users.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function panopoly_users_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'user:user:default';
  $panelizer->css_id = 'user-panel';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'phelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e6b7d470-adee-4bae-8471-35141a69dfec';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'user:user:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e82e0c09-9607-46d4-96a6-9d6873141deb';
  $pane->panel = 'column1';
  $pane->type = 'user_profile';
  $pane->subtype = 'user_profile';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e82e0c09-9607-46d4-96a6-9d6873141deb';
  $display->content['new-e82e0c09-9607-46d4-96a6-9d6873141deb'] = $pane;
  $display->panels['column1'][0] = 'new-e82e0c09-9607-46d4-96a6-9d6873141deb';
  $pane = new stdClass();
  $pane->pid = 'new-dfe72b16-71ca-475d-a051-bb198c0e78ff';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_full',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfe72b16-71ca-475d-a051-bb198c0e78ff';
  $display->content['new-dfe72b16-71ca-475d-a051-bb198c0e78ff'] = $pane;
  $display->panels['column2'][0] = 'new-dfe72b16-71ca-475d-a051-bb198c0e78ff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'user:user:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'user-default';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2049bf34-ead9-4b31-9eae-142a24a719db';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'user:user:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7728e843-788e-48c6-ae10-8b0f8bc68ec9';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7728e843-788e-48c6-ae10-8b0f8bc68ec9';
  $display->content['new-7728e843-788e-48c6-ae10-8b0f8bc68ec9'] = $pane;
  $display->panels['contentmain'][0] = 'new-7728e843-788e-48c6-ae10-8b0f8bc68ec9';
  $pane = new stdClass();
  $pane->pid = 'new-9da8f46d-0686-4a60-8eaa-eb609e95950f';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_about';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9da8f46d-0686-4a60-8eaa-eb609e95950f';
  $display->content['new-9da8f46d-0686-4a60-8eaa-eb609e95950f'] = $pane;
  $display->panels['contentmain'][1] = 'new-9da8f46d-0686-4a60-8eaa-eb609e95950f';
  $pane = new stdClass();
  $pane->pid = 'new-304737ab-e459-4434-9e0c-def6483bf924';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'user:summary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '304737ab-e459-4434-9e0c-def6483bf924';
  $display->content['new-304737ab-e459-4434-9e0c-def6483bf924'] = $pane;
  $display->panels['contentmain'][2] = 'new-304737ab-e459-4434-9e0c-def6483bf924';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->name = 'user:user:default:featured';
  $panelizer->css_id = '';
  $panelizer->css_class = 'user-featured';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'phelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1982681c-01f3-4567-bf02-d7e9e83cf6f5';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'user:user:default:featured';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-659ee33e-e33b-4949-8a24-a1d62c33eb78';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_half',
      'image_link' => 'content',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '659ee33e-e33b-4949-8a24-a1d62c33eb78';
  $display->content['new-659ee33e-e33b-4949-8a24-a1d62c33eb78'] = $pane;
  $display->panels['column1'][0] = 'new-659ee33e-e33b-4949-8a24-a1d62c33eb78';
  $pane = new stdClass();
  $pane->pid = 'new-e3765fe9-be5e-48e3-aa8d-6e01dfb142f8';
  $pane->panel = 'column2';
  $pane->type = 'token';
  $pane->subtype = 'user:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e3765fe9-be5e-48e3-aa8d-6e01dfb142f8';
  $display->content['new-e3765fe9-be5e-48e3-aa8d-6e01dfb142f8'] = $pane;
  $display->panels['column2'][0] = 'new-e3765fe9-be5e-48e3-aa8d-6e01dfb142f8';
  $pane = new stdClass();
  $pane->pid = 'new-1d2f962d-109e-48c0-aeaf-e2561fe62883';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_about';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '300',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1d2f962d-109e-48c0-aeaf-e2561fe62883';
  $display->content['new-1d2f962d-109e-48c0-aeaf-e2561fe62883'] = $pane;
  $display->panels['column2'][1] = 'new-1d2f962d-109e-48c0-aeaf-e2561fe62883';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:featured'] = $panelizer;

  return $export;
}
