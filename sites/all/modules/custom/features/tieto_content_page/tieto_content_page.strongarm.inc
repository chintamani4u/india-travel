<?php
/**
 * @file
 * tieto_content_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_content_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tieto_content_page';
  $strongarm->value = array(
    'view_modes' => array(
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
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'teleported' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'teleported' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_tieto_content_page';
  $strongarm->value = '1';
  $export['i18n_node_extended_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_tieto_content_page';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_tieto_content_page';
  $strongarm->value = '1';
  $export['language_content_type_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tieto_content_page';
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
    10 => 'menu-metherlands',
    11 => 'menu-norway',
    12 => 'menu-philippines',
    13 => 'menu-poland',
    14 => 'menu-russia',
    15 => 'menu-sweden',
    16 => 'menu-uk',
    17 => 'menu-austria',
  );
  $export['menu_options_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tieto_content_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tieto_content_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tieto_content_page';
  $strongarm->value = '0';
  $export['node_preview_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tieto_content_page';
  $strongarm->value = 0;
  $export['node_submitted_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_tieto_content_page';
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
  $export['panelizer_defaults_node_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:tieto_content_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:33:"panelizer_node:tieto_content_page";s:23:"allowed_layout_settings";a:40:{s:8:"flexible";b:0;s:13:"twocol_bricks";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:17:"threecol_33_34_33";b:0;s:6:"onecol";b:0;s:6:"twocol";b:0;s:14:"twocol_stacked";b:0;s:7:"moscone";b:0;s:8:"bartlett";b:0;s:5:"rolph";b:0;s:4:"pond";b:0;s:5:"geary";b:0;s:13:"selby_flipped";b:0;s:6:"phelan";b:0;s:16:"bartlett_flipped";b:0;s:22:"bryant_flipped_flipped";b:1;s:5:"sutro";b:0;s:5:"selby";b:0;s:12:"webb_flipped";b:0;s:8:"mccoppin";b:0;s:15:"moscone_flipped";b:0;s:17:"sanderson_flipped";b:0;s:7:"brenham";b:0;s:6:"whelan";b:1;s:6:"bryant";b:1;s:5:"brown";b:0;s:4:"webb";b:0;s:6:"harris";b:0;s:9:"sanderson";b:0;s:6:"taylor";b:0;s:15:"hewston_flipped";b:0;s:12:"burr_flipped";b:1;s:14:"taylor_flipped";b:0;s:4:"burr";b:1;s:7:"hewston";b:0;s:6:"boxton";b:1;s:15:"brenham_flipped";b:0;s:12:"sutro_double";b:0;}s:10:"form_state";N;}';
  $export['panelizer_node:tieto_content_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:tieto_content_page_allowed_types';
  $strongarm->value = array(
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node-node' => 'node-node',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'node_title-node_title' => 'node_title-node_title',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_author-node_author' => 'node_author-node_author',
    'node_body-node_body' => 'node_body-node_body',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_links-node_links' => 'node_links-node_links',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node_created-node_created' => 'node_created-node_created',
    'node_content-node_content' => 'node_content-node_content',
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'form-form' => 'form-form',
    'search_result-search_result' => 'search_result-search_result',
    'search_form-search_form' => 'search_form-search_form',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_title-page_title' => 'page_title-page_title',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_help-page_help' => 'page_help-page_help',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'theme-theme' => 'theme-theme',
    'custom_layouts-custom_layouts' => 'custom_layouts-custom_layouts',
    'general_widgets-general_widgets' => 'general_widgets-general_widgets',
    'menus-menus' => 'menus-menus',
    'taxonomy-taxonomy' => 'taxonomy-taxonomy',
    'page_templates-page_templates' => 'page_templates-page_templates',
    'overridden_page_templates-overridden_page_templates' => 'overridden_page_templates-overridden_page_templates',
    'content-content' => 'content-content',
    'panels_layouts-panels_layouts' => 'panels_layouts-panels_layouts',
    'general_panes-general_panes' => 'general_panes-general_panes',
    'users-users' => 'users-users',
    'panopoly_layouts-panopoly_layouts' => 'panopoly_layouts-panopoly_layouts',
    'flexible_layouts-flexible_layouts' => 'flexible_layouts-flexible_layouts',
    'landing_pages-landing_pages' => 'landing_pages-landing_pages',
    'reusable_widgets-reusable_widgets' => 'reusable_widgets-reusable_widgets',
    'responsive_layouts-responsive_layouts' => 'responsive_layouts-responsive_layouts',
    'pm_existing_pages-pm_existing_pages' => 'pm_existing_pages-pm_existing_pages',
    'views_view-views_view' => 'views_view-views_view',
    'views_footer-views_footer' => 'views_footer-views_footer',
    'views_attachments-views_attachments' => 'views_attachments-views_attachments',
    'views_empty-views_empty' => 'views_empty-views_empty',
    'views_row-views_row' => 'views_row-views_row',
    'views_header-views_header' => 'views_header-views_header',
    'views_feed-views_feed' => 'views_feed-views_feed',
    'views_exposed-views_exposed' => 'views_exposed-views_exposed',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'custom-custom' => 'custom-custom',
    'entity_field-fieldable_panels_pane:field_quick_links_links' => 'entity_field-fieldable_panels_pane:field_quick_links_links',
    'entity_field-fieldable_panels_pane:field_basic_file_file' => 'entity_field-fieldable_panels_pane:field_basic_file_file',
    'entity_field-fieldable_panels_pane:field_basic_file_text' => 'entity_field-fieldable_panels_pane:field_basic_file_text',
    'entity_field-fieldable_panels_pane:field_basic_image_caption' => 'entity_field-fieldable_panels_pane:field_basic_image_caption',
    'entity_field-fieldable_panels_pane:field_basic_image_image' => 'entity_field-fieldable_panels_pane:field_basic_image_image',
    'entity_field-fieldable_panels_pane:field_basic_text_text' => 'entity_field-fieldable_panels_pane:field_basic_text_text',
    'entity_field-fieldable_panels_pane:field_map_address' => 'entity_field-fieldable_panels_pane:field_map_address',
    'entity_field-fieldable_panels_pane:field_map_information' => 'entity_field-fieldable_panels_pane:field_map_information',
    'entity_field-fieldable_panels_pane:field_basic_table_table' => 'entity_field-fieldable_panels_pane:field_basic_table_table',
    'entity_field-fieldable_panels_pane:field_video_video' => 'entity_field-fieldable_panels_pane:field_video_video',
    'entity_field-fieldable_panels_pane:field_basic_spotlight_items' => 'entity_field-fieldable_panels_pane:field_basic_spotlight_items',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_featured_categories' => 'entity_field-node:field_featured_categories',
    'entity_field-node:field_featured_image' => 'entity_field-node:field_featured_image',
    'entity_field-node:field_featured_status' => 'entity_field-node:field_featured_status',
    'entity_field-node:field_attachement' => 'entity_field-node:field_attachement',
    'entity_field-node:field_attachement_private' => 'entity_field-node:field_attachement_private',
    'entity_field-node:field_event_date' => 'entity_field-node:field_event_date',
    'entity_field-node:field_event_postal_address' => 'entity_field-node:field_event_postal_address',
    'entity_field-node:field_event_type' => 'entity_field-node:field_event_type',
    'entity_field-node:field_news_type' => 'entity_field-node:field_news_type',
    'entity_field-node:field_hugin_id' => 'entity_field-node:field_hugin_id',
    'entity_field-node:field_nasdaq_id' => 'entity_field-node:field_nasdaq_id',
    'entity_field-node:field_release_date' => 'entity_field-node:field_release_date',
    'entity_field-node:field_news_attachments' => 'entity_field-node:field_news_attachments',
    'entity_field-node:field_industry' => 'entity_field-node:field_industry',
    'entity_field-node:field_protected_download' => 'entity_field-node:field_protected_download',
    'entity_field-node:field_ingress' => 'entity_field-node:field_ingress',
    'entity_field-node:field_punchline' => 'entity_field-node:field_punchline',
    'entity_field-node:field_concepts' => 'entity_field-node:field_concepts',
    'entity_field-node:field_domains' => 'entity_field-node:field_domains',
    'entity_field-node:field_technologies' => 'entity_field-node:field_technologies',
    'entity_field-node:field_teleported_content' => 'entity_field-node:field_teleported_content',
    'entity_field-file:field_file_image_alt_text' => 'entity_field-file:field_file_image_alt_text',
    'entity_field-file:field_file_image_title_text' => 'entity_field-file:field_file_image_title_text',
    'entity_field-taxonomy_term:field_featured_image' => 'entity_field-taxonomy_term:field_featured_image',
    'entity_field-user:field_user_about' => 'entity_field-user:field_user_about',
    'entity_field-user:field_user_picture' => 'entity_field-user:field_user_picture',
    'entity_field_extra-fieldable_panels_pane:title' => 'entity_field_extra-fieldable_panels_pane:title',
    'entity_field_extra-node:language' => 'entity_field_extra-node:language',
    'entity_field_extra-node:webform' => 'entity_field_extra-node:webform',
    'entity_field_extra-file:file' => 'entity_field_extra-file:file',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'entity_form_field-fieldable_panels_pane:field_quick_links_links' => 'entity_form_field-fieldable_panels_pane:field_quick_links_links',
    'entity_form_field-fieldable_panels_pane:field_basic_file_file' => 'entity_form_field-fieldable_panels_pane:field_basic_file_file',
    'entity_form_field-fieldable_panels_pane:field_basic_file_text' => 'entity_form_field-fieldable_panels_pane:field_basic_file_text',
    'entity_form_field-fieldable_panels_pane:field_basic_image_caption' => 'entity_form_field-fieldable_panels_pane:field_basic_image_caption',
    'entity_form_field-fieldable_panels_pane:field_basic_image_image' => 'entity_form_field-fieldable_panels_pane:field_basic_image_image',
    'entity_form_field-fieldable_panels_pane:field_basic_text_text' => 'entity_form_field-fieldable_panels_pane:field_basic_text_text',
    'entity_form_field-fieldable_panels_pane:field_map_address' => 'entity_form_field-fieldable_panels_pane:field_map_address',
    'entity_form_field-fieldable_panels_pane:field_map_information' => 'entity_form_field-fieldable_panels_pane:field_map_information',
    'entity_form_field-fieldable_panels_pane:field_basic_table_table' => 'entity_form_field-fieldable_panels_pane:field_basic_table_table',
    'entity_form_field-fieldable_panels_pane:field_video_video' => 'entity_form_field-fieldable_panels_pane:field_video_video',
    'entity_form_field-fieldable_panels_pane:field_basic_spotlight_items' => 'entity_form_field-fieldable_panels_pane:field_basic_spotlight_items',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_featured_categories' => 'entity_form_field-node:field_featured_categories',
    'entity_form_field-node:field_featured_image' => 'entity_form_field-node:field_featured_image',
    'entity_form_field-node:field_featured_status' => 'entity_form_field-node:field_featured_status',
    'entity_form_field-node:field_attachement' => 'entity_form_field-node:field_attachement',
    'entity_form_field-node:field_attachement_private' => 'entity_form_field-node:field_attachement_private',
    'entity_form_field-node:field_event_date' => 'entity_form_field-node:field_event_date',
    'entity_form_field-node:field_event_postal_address' => 'entity_form_field-node:field_event_postal_address',
    'entity_form_field-node:field_event_type' => 'entity_form_field-node:field_event_type',
    'entity_form_field-node:field_news_type' => 'entity_form_field-node:field_news_type',
    'entity_form_field-node:field_hugin_id' => 'entity_form_field-node:field_hugin_id',
    'entity_form_field-node:field_nasdaq_id' => 'entity_form_field-node:field_nasdaq_id',
    'entity_form_field-node:field_release_date' => 'entity_form_field-node:field_release_date',
    'entity_form_field-node:field_news_attachments' => 'entity_form_field-node:field_news_attachments',
    'entity_form_field-node:field_industry' => 'entity_form_field-node:field_industry',
    'entity_form_field-node:field_protected_download' => 'entity_form_field-node:field_protected_download',
    'entity_form_field-node:field_ingress' => 'entity_form_field-node:field_ingress',
    'entity_form_field-node:field_punchline' => 'entity_form_field-node:field_punchline',
    'entity_form_field-node:field_concepts' => 'entity_form_field-node:field_concepts',
    'entity_form_field-node:field_domains' => 'entity_form_field-node:field_domains',
    'entity_form_field-node:field_technologies' => 'entity_form_field-node:field_technologies',
    'entity_form_field-node:field_teleported_content' => 'entity_form_field-node:field_teleported_content',
    'entity_form_field-file:field_file_image_alt_text' => 'entity_form_field-file:field_file_image_alt_text',
    'entity_form_field-file:field_file_image_title_text' => 'entity_form_field-file:field_file_image_title_text',
    'entity_form_field-taxonomy_term:field_featured_image' => 'entity_form_field-taxonomy_term:field_featured_image',
    'entity_form_field-user:field_user_about' => 'entity_form_field-user:field_user_about',
    'entity_form_field-user:field_user_picture' => 'entity_form_field-user:field_user_picture',
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:feed-source' => 'token-node:feed-source',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:uuid' => 'token-node:uuid',
    'token-node:vuuid' => 'token-node:vuuid',
    'token-node:original' => 'token-node:original',
    'token-node:field_featured_image' => 'token-node:field_featured_image',
    'token-node:field_featured_categories' => 'token-node:field_featured_categories',
    'token-node:field_featured_status' => 'token-node:field_featured_status',
    'token-node:field_hugin_id' => 'token-node:field_hugin_id',
    'token-node:field_nasdaq_id' => 'token-node:field_nasdaq_id',
    'token-node:field_release_date' => 'token-node:field_release_date',
    'token-node:field_attachement' => 'token-node:field_attachement',
    'token-node:field_attachement_private' => 'token-node:field_attachement_private',
    'token-node:field_concepts' => 'token-node:field_concepts',
    'token-node:field_domains' => 'token-node:field_domains',
    'token-node:field_industry' => 'token-node:field_industry',
    'token-node:field_technologies' => 'token-node:field_technologies',
    'token-node:field_news_type' => 'token-node:field_news_type',
    'token-node:field_news_attachments' => 'token-node:field_news_attachments',
    'token-node:field_ingress' => 'token-node:field_ingress',
    'token-node:field_punchline' => 'token-node:field_punchline',
    'token-node:field_teleported_content' => 'token-node:field_teleported_content',
    'token-node:field_event_date' => 'token-node:field_event_date',
    'token-node:field_event_postal_address' => 'token-node:field_event_postal_address',
    'token-node:field_event_type' => 'token-node:field_event_type',
    'token-node:field_protected_download' => 'token-node:field_protected_download',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:uuid' => 'token-term:uuid',
    'token-term:i18n-name' => 'token-term:i18n-name',
    'token-term:i18n-description' => 'token-term:i18n-description',
    'token-term:i18n-vocabulary' => 'token-term:i18n-vocabulary',
    'token-term:i18n-parent' => 'token-term:i18n-parent',
    'token-term:original' => 'token-term:original',
    'token-term:field_featured_image' => 'token-term:field_featured_image',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:i18n-name' => 'token-vocabulary:i18n-name',
    'token-vocabulary:i18n-description' => 'token-vocabulary:i18n-description',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:type' => 'token-file:type',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:uuid' => 'token-file:uuid',
    'token-file:original' => 'token-file:original',
    'token-file:field_file_image_alt_text' => 'token-file:field_file_image_alt_text',
    'token-file:field_file_image_title_text' => 'token-file:field_file_image_title_text',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:roles' => 'token-user:roles',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:uuid' => 'token-user:uuid',
    'token-user:original' => 'token-user:original',
    'token-user:field_user_about' => 'token-user:field_user_about',
    'token-user:field_user_picture' => 'token-user:field_user_picture',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-array:join-path' => 'token-array:join-path',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-date-field-value:date' => 'token-date-field-value:date',
    'token-date-field-value:to-date' => 'token-date-field-value:to-date',
    'token-facetapi_results:keys' => 'token-facetapi_results:keys',
    'token-facetapi_results:page-number' => 'token-facetapi_results:page-number',
    'token-facetapi_results:page-limit' => 'token-facetapi_results:page-limit',
    'token-facetapi_results:page-total' => 'token-facetapi_results:page-total',
    'token-facetapi_results:offset' => 'token-facetapi_results:offset',
    'token-facetapi_results:start-count' => 'token-facetapi_results:start-count',
    'token-facetapi_results:end-count' => 'token-facetapi_results:end-count',
    'token-facetapi_results:result-count' => 'token-facetapi_results:result-count',
    'token-facetapi_active:active-value' => 'token-facetapi_active:active-value',
    'token-facetapi_active:active-value-raw' => 'token-facetapi_active:active-value-raw',
    'token-facetapi_active:active-pos' => 'token-facetapi_active:active-pos',
    'token-facetapi_active:facet-label' => 'token-facetapi_active:facet-label',
    'token-facetapi_active:facet-name' => 'token-facetapi_active:facet-name',
    'token-facetapi_facet:facet-label' => 'token-facetapi_facet:facet-label',
    'token-facetapi_facet:facet-name' => 'token-facetapi_facet:facet-name',
    'token-file-type:name' => 'token-file-type:name',
    'token-file-type:machine-name' => 'token-file-type:machine-name',
    'token-file-type:count' => 'token-file-type:count',
    'token-file-type:edit-url' => 'token-file-type:edit-url',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-date:panopoly_time' => 'token-date:panopoly_time',
    'token-date:panopoly_day' => 'token-date:panopoly_day',
    'token-fieldable_panels_pane:uuid' => 'token-fieldable_panels_pane:uuid',
    'token-fieldable_panels_pane:vuuid' => 'token-fieldable_panels_pane:vuuid',
    'token-variable:site_name' => 'token-variable:site_name',
    'token-variable:site_mail' => 'token-variable:site_mail',
    'token-variable:site_slogan' => 'token-variable:site_slogan',
    'token-variable:anonymous' => 'token-variable:anonymous',
    'token-variable:feed_description' => 'token-variable:feed_description',
    'token-variable:maintenance_mode_message' => 'token-variable:maintenance_mode_message',
    'token-variable:user_registration_help' => 'token-variable:user_registration_help',
    'token-variable:user_picture_default' => 'token-variable:user_picture_default',
    'token-variable:user_picture_dimensions' => 'token-variable:user_picture_dimensions',
    'token-variable:user_picture_file_size' => 'token-variable:user_picture_file_size',
    'token-variable:user_picture_guidelines' => 'token-variable:user_picture_guidelines',
    'token-protected-downloads:download-url' => 'token-protected-downloads:download-url',
    'token-protected-downloads:download-expires' => 'token-protected-downloads:download-expires',
    'token-protected-downloads:file-list' => 'token-protected-downloads:file-list',
    'token-protected-downloads:file-list-checksum' => 'token-protected-downloads:file-list-checksum',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'block-admin_language-admin_language_switcher' => 'block-admin_language-admin_language_switcher',
    'block-apachesolr_search-mlt-001' => 'block-apachesolr_search-mlt-001',
    'block-apachesolr_search-sort' => 'block-apachesolr_search-sort',
    'block-apps-manage_apps__panopoly' => 'block-apps-manage_apps__panopoly',
    'block-calendar-calendar_legend' => 'block-calendar-calendar_legend',
    'block-current_search-standard' => 'block-current_search-standard',
    'block-diff-inline' => 'block-diff-inline',
    'block-facetapi-oMpaBCMwfbDqB3HaUObmDVbvo1L7bydL' => 'block-facetapi-oMpaBCMwfbDqB3HaUObmDVbvo1L7bydL',
    'block-facetapi-JF1ktZywD1nWwTZi45sVmxE1W01bmI4U' => 'block-facetapi-JF1ktZywD1nWwTZi45sVmxE1W01bmI4U',
    'block-facetapi-nOOIF0PifIXuuMY0vUK6LzpxupjCkQoV' => 'block-facetapi-nOOIF0PifIXuuMY0vUK6LzpxupjCkQoV',
    'block-locale-language' => 'block-locale-language',
    'block-menu-devel' => 'block-menu-devel',
    'block-menu-menu-main-menu-fi' => 'block-menu-menu-main-menu-fi',
    'block-menu-menu-main-menu-sv' => 'block-menu-menu-main-menu-sv',
    'block-menu_block-1' => 'block-menu_block-1',
    'block-menu_block-2' => 'block-menu_block-2',
    'block-menu_block-3' => 'block-menu_block-3',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-tieto_megamenus-megamenu' => 'block-tieto_megamenus-megamenu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'block-admin-create' => 'block-admin-create',
    'block-admin-theme' => 'block-admin-theme',
    'block-admin-account' => 'block-admin-account',
    'block-admin-menu' => 'block-admin-menu',
    'block-admin-devel' => 'block-admin-devel',
    'block-views-f70630eb185af89eb3828655ea15bad4' => 'block-views-f70630eb185af89eb3828655ea15bad4',
    'block-devel-execute_php' => 'block-devel-execute_php',
    'block-devel-switch_user' => 'block-devel-switch_user',
    'entity_view-fieldable_panels_pane' => 'entity_view-fieldable_panels_pane',
    'entity_view-node' => 'entity_view-node',
    'entity_view-file' => 'entity_view-file',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'fieldable_panels_pane-fieldable_panels_pane' => 'fieldable_panels_pane-fieldable_panels_pane',
    'fieldable_panels_pane-quick_links' => 'fieldable_panels_pane-quick_links',
    'fieldable_panels_pane-basic_file' => 'fieldable_panels_pane-basic_file',
    'fieldable_panels_pane-image' => 'fieldable_panels_pane-image',
    'fieldable_panels_pane-text' => 'fieldable_panels_pane-text',
    'fieldable_panels_pane-map' => 'fieldable_panels_pane-map',
    'fieldable_panels_pane-table' => 'fieldable_panels_pane-table',
    'fieldable_panels_pane-video' => 'fieldable_panels_pane-video',
    'fieldable_panels_pane-spotlight' => 'fieldable_panels_pane-spotlight',
    'fieldable_panels_pane-uuid:c1c21d5b-3e05-3bb4-49a4-c6851bfa8fc4' => 'fieldable_panels_pane-uuid:c1c21d5b-3e05-3bb4-49a4-c6851bfa8fc4',
    'fieldable_panels_pane-uuid:50b3c8c1-7b31-6554-a5a8-ce9aa87d4867' => 'fieldable_panels_pane-uuid:50b3c8c1-7b31-6554-a5a8-ce9aa87d4867',
    'fieldable_panels_pane-uuid:f36dcfd1-6e12-d2a4-992f-bed59c0690a2' => 'fieldable_panels_pane-uuid:f36dcfd1-6e12-d2a4-992f-bed59c0690a2',
    'menu_tree-_active' => 'menu_tree-_active',
    'menu_tree-devel' => 'menu_tree-devel',
    'menu_tree-menu-main-menu-fi' => 'menu_tree-menu-main-menu-fi',
    'menu_tree-menu-main-menu-sv' => 'menu_tree-menu-main-menu-sv',
    'menu_tree-main-menu' => 'menu_tree-main-menu',
    'menu_tree-management' => 'menu_tree-management',
    'menu_tree-navigation' => 'menu_tree-navigation',
    'menu_tree-user-menu' => 'menu_tree-user-menu',
    'views_panes-panopoly_taxonomy-taxonomy_content' => 'views_panes-panopoly_taxonomy-taxonomy_content',
    'views_panes-panopoly_widgets_general_content-list_of_content' => 'views_panes-panopoly_widgets_general_content-list_of_content',
    'views_panes-panopoly_widgets_general_content-piece_of_content' => 'views_panes-panopoly_widgets_general_content-piece_of_content',
    'views_panes-tieto_event_calendar-panel_pane_1' => 'views_panes-tieto_event_calendar-panel_pane_1',
  );
  $export['panelizer_node:tieto_content_page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:tieto_content_page_default';
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
  $export['panelizer_node:tieto_content_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_tieto_content_page';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_tieto_content_page';
  $strongarm->value = 0;
  $export['scheduler_publish_required_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_tieto_content_page';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_tieto_content_page';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_tieto_content_page';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_tieto_content_page';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_tieto_content_page';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_tieto_content_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_tieto_content_page';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_tieto_content_page'] = $strongarm;

  return $export;
}
