<?php
/**
 * @file
 * tieto_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tieto_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access environment indicator default_environment'.
  $permissions['access environment indicator default_environment'] = array(
    'name' => 'access environment indicator default_environment',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access getlocations'.
  $permissions['access getlocations'] = array(
    'name' => 'access getlocations',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'getlocations',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access scald dnd library'.
  $permissions['access scald dnd library'] = array(
    'name' => 'access scald dnd library',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald_dnd_library',
  );

  // Exported permission: 'access selected languages'.
  $permissions['access selected languages'] = array(
    'name' => 'access selected languages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'i18n_access',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user getlocations'.
  $permissions['access user getlocations'] = array(
    'name' => 'access user getlocations',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'getlocations',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer apps'.
  $permissions['administer apps'] = array(
    'name' => 'administer apps',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'apps',
  );

  // Exported permission: 'administer background image'.
  $permissions['administer background image'] = array(
    'name' => 'administer background image',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer cer settings'.
  $permissions['administer cer settings'] = array(
    'name' => 'administer cer settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'cer',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer default config'.
  $permissions['administer default config'] = array(
    'name' => 'administer default config',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'defaultconfig',
  );

  // Exported permission: 'administer dnd'.
  $permissions['administer dnd'] = array(
    'name' => 'administer dnd',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'dnd',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact breadcrumbs'.
  $permissions['administer panelizer node contact breadcrumbs'] = array(
    'name' => 'administer panelizer node contact breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact content'.
  $permissions['administer panelizer node contact content'] = array(
    'name' => 'administer panelizer node contact content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact context'.
  $permissions['administer panelizer node contact context'] = array(
    'name' => 'administer panelizer node contact context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact defaults'.
  $permissions['administer panelizer node contact defaults'] = array(
    'name' => 'administer panelizer node contact defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact layout'.
  $permissions['administer panelizer node contact layout'] = array(
    'name' => 'administer panelizer node contact layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact overview'.
  $permissions['administer panelizer node contact overview'] = array(
    'name' => 'administer panelizer node contact overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact settings'.
  $permissions['administer panelizer node contact settings'] = array(
    'name' => 'administer panelizer node contact settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node industry_hub_page breadcrumbs'.
  $permissions['administer panelizer node industry_hub_page breadcrumbs'] = array(
    'name' => 'administer panelizer node industry_hub_page breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node industry_hub_page content'.
  $permissions['administer panelizer node industry_hub_page content'] = array(
    'name' => 'administer panelizer node industry_hub_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node industry_hub_page context'.
  $permissions['administer panelizer node industry_hub_page context'] = array(
    'name' => 'administer panelizer node industry_hub_page context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node industry_hub_page defaults'.
  $permissions['administer panelizer node industry_hub_page defaults'] = array(
    'name' => 'administer panelizer node industry_hub_page defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node industry_hub_page layout'.
  $permissions['administer panelizer node industry_hub_page layout'] = array(
    'name' => 'administer panelizer node industry_hub_page layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node industry_hub_page overview'.
  $permissions['administer panelizer node industry_hub_page overview'] = array(
    'name' => 'administer panelizer node industry_hub_page overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node industry_hub_page settings'.
  $permissions['administer panelizer node industry_hub_page settings'] = array(
    'name' => 'administer panelizer node industry_hub_page settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node magazine_article breadcrumbs'.
  $permissions['administer panelizer node magazine_article breadcrumbs'] = array(
    'name' => 'administer panelizer node magazine_article breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node magazine_article content'.
  $permissions['administer panelizer node magazine_article content'] = array(
    'name' => 'administer panelizer node magazine_article content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node magazine_article context'.
  $permissions['administer panelizer node magazine_article context'] = array(
    'name' => 'administer panelizer node magazine_article context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node magazine_article defaults'.
  $permissions['administer panelizer node magazine_article defaults'] = array(
    'name' => 'administer panelizer node magazine_article defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node magazine_article layout'.
  $permissions['administer panelizer node magazine_article layout'] = array(
    'name' => 'administer panelizer node magazine_article layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node magazine_article overview'.
  $permissions['administer panelizer node magazine_article overview'] = array(
    'name' => 'administer panelizer node magazine_article overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node magazine_article settings'.
  $permissions['administer panelizer node magazine_article settings'] = array(
    'name' => 'administer panelizer node magazine_article settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_addresses defaults'.
  $permissions['administer panelizer node tieto_addresses defaults'] = array(
    'name' => 'administer panelizer node tieto_addresses defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_campaign breadcrumbs'.
  $permissions['administer panelizer node tieto_campaign breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_campaign breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_campaign content'.
  $permissions['administer panelizer node tieto_campaign content'] = array(
    'name' => 'administer panelizer node tieto_campaign content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_campaign context'.
  $permissions['administer panelizer node tieto_campaign context'] = array(
    'name' => 'administer panelizer node tieto_campaign context',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_campaign defaults'.
  $permissions['administer panelizer node tieto_campaign defaults'] = array(
    'name' => 'administer panelizer node tieto_campaign defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_campaign layout'.
  $permissions['administer panelizer node tieto_campaign layout'] = array(
    'name' => 'administer panelizer node tieto_campaign layout',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_campaign overview'.
  $permissions['administer panelizer node tieto_campaign overview'] = array(
    'name' => 'administer panelizer node tieto_campaign overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_campaign settings'.
  $permissions['administer panelizer node tieto_campaign settings'] = array(
    'name' => 'administer panelizer node tieto_campaign settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_carousel_content defaults'.
  $permissions['administer panelizer node tieto_carousel_content defaults'] = array(
    'name' => 'administer panelizer node tieto_carousel_content defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_contact_form defaults'.
  $permissions['administer panelizer node tieto_contact_form defaults'] = array(
    'name' => 'administer panelizer node tieto_contact_form defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_content_page breadcrumbs'.
  $permissions['administer panelizer node tieto_content_page breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_content_page breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_content_page content'.
  $permissions['administer panelizer node tieto_content_page content'] = array(
    'name' => 'administer panelizer node tieto_content_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_content_page context'.
  $permissions['administer panelizer node tieto_content_page context'] = array(
    'name' => 'administer panelizer node tieto_content_page context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_content_page defaults'.
  $permissions['administer panelizer node tieto_content_page defaults'] = array(
    'name' => 'administer panelizer node tieto_content_page defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_content_page layout'.
  $permissions['administer panelizer node tieto_content_page layout'] = array(
    'name' => 'administer panelizer node tieto_content_page layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_content_page overview'.
  $permissions['administer panelizer node tieto_content_page overview'] = array(
    'name' => 'administer panelizer node tieto_content_page overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_content_page settings'.
  $permissions['administer panelizer node tieto_content_page settings'] = array(
    'name' => 'administer panelizer node tieto_content_page settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_customer_reference_case breadcrumbs'.
  $permissions['administer panelizer node tieto_customer_reference_case breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_customer_reference_case breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_customer_reference_case content'.
  $permissions['administer panelizer node tieto_customer_reference_case content'] = array(
    'name' => 'administer panelizer node tieto_customer_reference_case content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_customer_reference_case context'.
  $permissions['administer panelizer node tieto_customer_reference_case context'] = array(
    'name' => 'administer panelizer node tieto_customer_reference_case context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_customer_reference_case defaults'.
  $permissions['administer panelizer node tieto_customer_reference_case defaults'] = array(
    'name' => 'administer panelizer node tieto_customer_reference_case defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_customer_reference_case layout'.
  $permissions['administer panelizer node tieto_customer_reference_case layout'] = array(
    'name' => 'administer panelizer node tieto_customer_reference_case layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_customer_reference_case overview'.
  $permissions['administer panelizer node tieto_customer_reference_case overview'] = array(
    'name' => 'administer panelizer node tieto_customer_reference_case overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_customer_reference_case settings'.
  $permissions['administer panelizer node tieto_customer_reference_case settings'] = array(
    'name' => 'administer panelizer node tieto_customer_reference_case settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_cv_page breadcrumbs'.
  $permissions['administer panelizer node tieto_cv_page breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_cv_page breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_cv_page content'.
  $permissions['administer panelizer node tieto_cv_page content'] = array(
    'name' => 'administer panelizer node tieto_cv_page content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_cv_page context'.
  $permissions['administer panelizer node tieto_cv_page context'] = array(
    'name' => 'administer panelizer node tieto_cv_page context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_cv_page defaults'.
  $permissions['administer panelizer node tieto_cv_page defaults'] = array(
    'name' => 'administer panelizer node tieto_cv_page defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_cv_page layout'.
  $permissions['administer panelizer node tieto_cv_page layout'] = array(
    'name' => 'administer panelizer node tieto_cv_page layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_cv_page overview'.
  $permissions['administer panelizer node tieto_cv_page overview'] = array(
    'name' => 'administer panelizer node tieto_cv_page overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_cv_page settings'.
  $permissions['administer panelizer node tieto_cv_page settings'] = array(
    'name' => 'administer panelizer node tieto_cv_page settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_event breadcrumbs'.
  $permissions['administer panelizer node tieto_event breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_event breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_event content'.
  $permissions['administer panelizer node tieto_event content'] = array(
    'name' => 'administer panelizer node tieto_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_event context'.
  $permissions['administer panelizer node tieto_event context'] = array(
    'name' => 'administer panelizer node tieto_event context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_event defaults'.
  $permissions['administer panelizer node tieto_event defaults'] = array(
    'name' => 'administer panelizer node tieto_event defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_event layout'.
  $permissions['administer panelizer node tieto_event layout'] = array(
    'name' => 'administer panelizer node tieto_event layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_event overview'.
  $permissions['administer panelizer node tieto_event overview'] = array(
    'name' => 'administer panelizer node tieto_event overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_event settings'.
  $permissions['administer panelizer node tieto_event settings'] = array(
    'name' => 'administer panelizer node tieto_event settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_frontpage breadcrumbs'.
  $permissions['administer panelizer node tieto_frontpage breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_frontpage breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_frontpage content'.
  $permissions['administer panelizer node tieto_frontpage content'] = array(
    'name' => 'administer panelizer node tieto_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_frontpage context'.
  $permissions['administer panelizer node tieto_frontpage context'] = array(
    'name' => 'administer panelizer node tieto_frontpage context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_frontpage defaults'.
  $permissions['administer panelizer node tieto_frontpage defaults'] = array(
    'name' => 'administer panelizer node tieto_frontpage defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_frontpage layout'.
  $permissions['administer panelizer node tieto_frontpage layout'] = array(
    'name' => 'administer panelizer node tieto_frontpage layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_frontpage overview'.
  $permissions['administer panelizer node tieto_frontpage overview'] = array(
    'name' => 'administer panelizer node tieto_frontpage overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_frontpage settings'.
  $permissions['administer panelizer node tieto_frontpage settings'] = array(
    'name' => 'administer panelizer node tieto_frontpage settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_jobs_vacancy defaults'.
  $permissions['administer panelizer node tieto_jobs_vacancy defaults'] = array(
    'name' => 'administer panelizer node tieto_jobs_vacancy defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_landing_page breadcrumbs'.
  $permissions['administer panelizer node tieto_landing_page breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_landing_page breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_landing_page content'.
  $permissions['administer panelizer node tieto_landing_page content'] = array(
    'name' => 'administer panelizer node tieto_landing_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_landing_page context'.
  $permissions['administer panelizer node tieto_landing_page context'] = array(
    'name' => 'administer panelizer node tieto_landing_page context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_landing_page defaults'.
  $permissions['administer panelizer node tieto_landing_page defaults'] = array(
    'name' => 'administer panelizer node tieto_landing_page defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_landing_page layout'.
  $permissions['administer panelizer node tieto_landing_page layout'] = array(
    'name' => 'administer panelizer node tieto_landing_page layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_landing_page overview'.
  $permissions['administer panelizer node tieto_landing_page overview'] = array(
    'name' => 'administer panelizer node tieto_landing_page overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_landing_page settings'.
  $permissions['administer panelizer node tieto_landing_page settings'] = array(
    'name' => 'administer panelizer node tieto_landing_page settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_map breadcrumbs'.
  $permissions['administer panelizer node tieto_map breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_map breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_map content'.
  $permissions['administer panelizer node tieto_map content'] = array(
    'name' => 'administer panelizer node tieto_map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_map context'.
  $permissions['administer panelizer node tieto_map context'] = array(
    'name' => 'administer panelizer node tieto_map context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_map defaults'.
  $permissions['administer panelizer node tieto_map defaults'] = array(
    'name' => 'administer panelizer node tieto_map defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_map layout'.
  $permissions['administer panelizer node tieto_map layout'] = array(
    'name' => 'administer panelizer node tieto_map layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_map overview'.
  $permissions['administer panelizer node tieto_map overview'] = array(
    'name' => 'administer panelizer node tieto_map overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_map settings'.
  $permissions['administer panelizer node tieto_map settings'] = array(
    'name' => 'administer panelizer node tieto_map settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_article breadcrumbs'.
  $permissions['administer panelizer node tieto_news_article breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_news_article breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_article content'.
  $permissions['administer panelizer node tieto_news_article content'] = array(
    'name' => 'administer panelizer node tieto_news_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_article context'.
  $permissions['administer panelizer node tieto_news_article context'] = array(
    'name' => 'administer panelizer node tieto_news_article context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_article defaults'.
  $permissions['administer panelizer node tieto_news_article defaults'] = array(
    'name' => 'administer panelizer node tieto_news_article defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_article layout'.
  $permissions['administer panelizer node tieto_news_article layout'] = array(
    'name' => 'administer panelizer node tieto_news_article layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_article overview'.
  $permissions['administer panelizer node tieto_news_article overview'] = array(
    'name' => 'administer panelizer node tieto_news_article overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_article settings'.
  $permissions['administer panelizer node tieto_news_article settings'] = array(
    'name' => 'administer panelizer node tieto_news_article settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_context breadcrumbs'.
  $permissions['administer panelizer node tieto_news_context breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_news_context breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_context content'.
  $permissions['administer panelizer node tieto_news_context content'] = array(
    'name' => 'administer panelizer node tieto_news_context content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_context context'.
  $permissions['administer panelizer node tieto_news_context context'] = array(
    'name' => 'administer panelizer node tieto_news_context context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_context defaults'.
  $permissions['administer panelizer node tieto_news_context defaults'] = array(
    'name' => 'administer panelizer node tieto_news_context defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_context layout'.
  $permissions['administer panelizer node tieto_news_context layout'] = array(
    'name' => 'administer panelizer node tieto_news_context layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_context overview'.
  $permissions['administer panelizer node tieto_news_context overview'] = array(
    'name' => 'administer panelizer node tieto_news_context overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_news_context settings'.
  $permissions['administer panelizer node tieto_news_context settings'] = array(
    'name' => 'administer panelizer node tieto_news_context settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_group_page breadcrumbs'.
  $permissions['administer panelizer node tieto_service_group_page breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_service_group_page breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_group_page content'.
  $permissions['administer panelizer node tieto_service_group_page content'] = array(
    'name' => 'administer panelizer node tieto_service_group_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_group_page context'.
  $permissions['administer panelizer node tieto_service_group_page context'] = array(
    'name' => 'administer panelizer node tieto_service_group_page context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_group_page defaults'.
  $permissions['administer panelizer node tieto_service_group_page defaults'] = array(
    'name' => 'administer panelizer node tieto_service_group_page defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_group_page layout'.
  $permissions['administer panelizer node tieto_service_group_page layout'] = array(
    'name' => 'administer panelizer node tieto_service_group_page layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_group_page overview'.
  $permissions['administer panelizer node tieto_service_group_page overview'] = array(
    'name' => 'administer panelizer node tieto_service_group_page overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_group_page settings'.
  $permissions['administer panelizer node tieto_service_group_page settings'] = array(
    'name' => 'administer panelizer node tieto_service_group_page settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_page breadcrumbs'.
  $permissions['administer panelizer node tieto_service_page breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_service_page breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_page content'.
  $permissions['administer panelizer node tieto_service_page content'] = array(
    'name' => 'administer panelizer node tieto_service_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_page context'.
  $permissions['administer panelizer node tieto_service_page context'] = array(
    'name' => 'administer panelizer node tieto_service_page context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_page defaults'.
  $permissions['administer panelizer node tieto_service_page defaults'] = array(
    'name' => 'administer panelizer node tieto_service_page defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_page layout'.
  $permissions['administer panelizer node tieto_service_page layout'] = array(
    'name' => 'administer panelizer node tieto_service_page layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_page overview'.
  $permissions['administer panelizer node tieto_service_page overview'] = array(
    'name' => 'administer panelizer node tieto_service_page overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_service_page settings'.
  $permissions['administer panelizer node tieto_service_page settings'] = array(
    'name' => 'administer panelizer node tieto_service_page settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_teleport breadcrumbs'.
  $permissions['administer panelizer node tieto_teleport breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_teleport breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_teleport content'.
  $permissions['administer panelizer node tieto_teleport content'] = array(
    'name' => 'administer panelizer node tieto_teleport content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_teleport context'.
  $permissions['administer panelizer node tieto_teleport context'] = array(
    'name' => 'administer panelizer node tieto_teleport context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_teleport defaults'.
  $permissions['administer panelizer node tieto_teleport defaults'] = array(
    'name' => 'administer panelizer node tieto_teleport defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_teleport layout'.
  $permissions['administer panelizer node tieto_teleport layout'] = array(
    'name' => 'administer panelizer node tieto_teleport layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_teleport overview'.
  $permissions['administer panelizer node tieto_teleport overview'] = array(
    'name' => 'administer panelizer node tieto_teleport overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_teleport settings'.
  $permissions['administer panelizer node tieto_teleport settings'] = array(
    'name' => 'administer panelizer node tieto_teleport settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_top_story breadcrumbs'.
  $permissions['administer panelizer node tieto_top_story breadcrumbs'] = array(
    'name' => 'administer panelizer node tieto_top_story breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_top_story content'.
  $permissions['administer panelizer node tieto_top_story content'] = array(
    'name' => 'administer panelizer node tieto_top_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_top_story context'.
  $permissions['administer panelizer node tieto_top_story context'] = array(
    'name' => 'administer panelizer node tieto_top_story context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_top_story defaults'.
  $permissions['administer panelizer node tieto_top_story defaults'] = array(
    'name' => 'administer panelizer node tieto_top_story defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_top_story layout'.
  $permissions['administer panelizer node tieto_top_story layout'] = array(
    'name' => 'administer panelizer node tieto_top_story layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_top_story overview'.
  $permissions['administer panelizer node tieto_top_story overview'] = array(
    'name' => 'administer panelizer node tieto_top_story overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tieto_top_story settings'.
  $permissions['administer panelizer node tieto_top_story settings'] = array(
    'name' => 'administer panelizer node tieto_top_story settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform breadcrumbs'.
  $permissions['administer panelizer node webform breadcrumbs'] = array(
    'name' => 'administer panelizer node webform breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform content'.
  $permissions['administer panelizer node webform content'] = array(
    'name' => 'administer panelizer node webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform context'.
  $permissions['administer panelizer node webform context'] = array(
    'name' => 'administer panelizer node webform context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform defaults'.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform layout'.
  $permissions['administer panelizer node webform layout'] = array(
    'name' => 'administer panelizer node webform layout',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform overview'.
  $permissions['administer panelizer node webform overview'] = array(
    'name' => 'administer panelizer node webform overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform settings'.
  $permissions['administer panelizer node webform settings'] = array(
    'name' => 'administer panelizer node webform settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term domains defaults'.
  $permissions['administer panelizer taxonomy_term domains defaults'] = array(
    'name' => 'administer panelizer taxonomy_term domains defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term industry defaults'.
  $permissions['administer panelizer taxonomy_term industry defaults'] = array(
    'name' => 'administer panelizer taxonomy_term industry defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term magazine defaults'.
  $permissions['administer panelizer taxonomy_term magazine defaults'] = array(
    'name' => 'administer panelizer taxonomy_term magazine defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories breadcrumbs'.
  $permissions['administer panelizer taxonomy_term panopoly_categories breadcrumbs'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories content'.
  $permissions['administer panelizer taxonomy_term panopoly_categories content'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories context'.
  $permissions['administer panelizer taxonomy_term panopoly_categories context'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories defaults'.
  $permissions['administer panelizer taxonomy_term panopoly_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories layout'.
  $permissions['administer panelizer taxonomy_term panopoly_categories layout'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories overview'.
  $permissions['administer panelizer taxonomy_term panopoly_categories overview'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories settings'.
  $permissions['administer panelizer taxonomy_term panopoly_categories settings'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term product_development defaults'.
  $permissions['administer panelizer taxonomy_term product_development defaults'] = array(
    'name' => 'administer panelizer taxonomy_term product_development defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user breadcrumbs'.
  $permissions['administer panelizer user user breadcrumbs'] = array(
    'name' => 'administer panelizer user user breadcrumbs',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user content'.
  $permissions['administer panelizer user user content'] = array(
    'name' => 'administer panelizer user user content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user context'.
  $permissions['administer panelizer user user context'] = array(
    'name' => 'administer panelizer user user context',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user layout'.
  $permissions['administer panelizer user user layout'] = array(
    'name' => 'administer panelizer user user layout',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user overview'.
  $permissions['administer panelizer user user overview'] = array(
    'name' => 'administer panelizer user user overview',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user settings'.
  $permissions['administer panelizer user user settings'] = array(
    'name' => 'administer panelizer user user settings',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scald'.
  $permissions['administer scald'] = array(
    'name' => 'administer scald',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer scald atoms'.
  $permissions['administer scald atoms'] = array(
    'name' => 'administer scald atoms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search api exclude'.
  $permissions['administer search api exclude'] = array(
    'name' => 'administer search api exclude',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'search_api_exclude',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer search_api_saved_searches'.
  $permissions['administer search_api_saved_searches'] = array(
    'name' => 'administer search_api_saved_searches',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'search_api_saved_searches',
  );

  // Exported permission: 'administer shield'.
  $permissions['administer shield'] = array(
    'name' => 'administer shield',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'shield',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tieto contact'.
  $permissions['administer tieto contact'] = array(
    'name' => 'administer tieto contact',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'tieto_contact',
  );

  // Exported permission: 'administer tieto megamenus'.
  $permissions['administer tieto megamenus'] = array(
    'name' => 'administer tieto megamenus',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'tieto_megamenus',
  );

  // Exported permission: 'administer tieto menu structure'.
  $permissions['administer tieto menu structure'] = array(
    'name' => 'administer tieto menu structure',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'tieto_permissions',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer webform protected downloads'.
  $permissions['administer webform protected downloads'] = array(
    'name' => 'administer webform protected downloads',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'webform_protected_downloads',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass atom access restrictions'.
  $permissions['bypass atom access restrictions'] = array(
    'name' => 'bypass atom access restrictions',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear slideshare_asset feeds'.
  $permissions['clear slideshare_asset feeds'] = array(
    'name' => 'clear slideshare_asset feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear youtube feeds'.
  $permissions['clear youtube feeds'] = array(
    'name' => 'clear youtube feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create atom of any type'.
  $permissions['create atom of any type'] = array(
    'name' => 'create atom of any type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of customtext type'.
  $permissions['create atom of customtext type'] = array(
    'name' => 'create atom of customtext type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of file type'.
  $permissions['create atom of file type'] = array(
    'name' => 'create atom of file type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of flash type'.
  $permissions['create atom of flash type'] = array(
    'name' => 'create atom of flash type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of image type'.
  $permissions['create atom of image type'] = array(
    'name' => 'create atom of image type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of rss_channel type'.
  $permissions['create atom of rss_channel type'] = array(
    'name' => 'create atom of rss_channel type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of slideshow type'.
  $permissions['create atom of slideshow type'] = array(
    'name' => 'create atom of slideshow type',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of twitter type'.
  $permissions['create atom of twitter type'] = array(
    'name' => 'create atom of twitter type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of twitter_channel type'.
  $permissions['create atom of twitter_channel type'] = array(
    'name' => 'create atom of twitter_channel type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of video type'.
  $permissions['create atom of video type'] = array(
    'name' => 'create atom of video type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of webpage type'.
  $permissions['create atom of webpage type'] = array(
    'name' => 'create atom of webpage type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create contact content'.
  $permissions['create contact content'] = array(
    'name' => 'create contact content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create crisis_communication content'.
  $permissions['create crisis_communication content'] = array(
    'name' => 'create crisis_communication content',
    'roles' => array(
      'Corp and careers (Topic editor)' => 'Corp and careers (Topic editor)',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_landing_page'.
  $permissions['create field_landing_page'] = array(
    'name' => 'create field_landing_page',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_topic_editors'.
  $permissions['create field_topic_editors'] = array(
    'name' => 'create field_topic_editors',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create fieldable basic_file'.
  $permissions['create fieldable basic_file'] = array(
    'name' => 'create fieldable basic_file',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable image'.
  $permissions['create fieldable image'] = array(
    'name' => 'create fieldable image',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable map'.
  $permissions['create fieldable map'] = array(
    'name' => 'create fieldable map',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable quick_links'.
  $permissions['create fieldable quick_links'] = array(
    'name' => 'create fieldable quick_links',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable rss_channel'.
  $permissions['create fieldable rss_channel'] = array(
    'name' => 'create fieldable rss_channel',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable spotlight'.
  $permissions['create fieldable spotlight'] = array(
    'name' => 'create fieldable spotlight',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable table'.
  $permissions['create fieldable table'] = array(
    'name' => 'create fieldable table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable text'.
  $permissions['create fieldable text'] = array(
    'name' => 'create fieldable text',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable twitter_channel'.
  $permissions['create fieldable twitter_channel'] = array(
    'name' => 'create fieldable twitter_channel',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable video'.
  $permissions['create fieldable video'] = array(
    'name' => 'create fieldable video',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create industry_hub_page content'.
  $permissions['create industry_hub_page content'] = array(
    'name' => 'create industry_hub_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create magazine_article content'.
  $permissions['create magazine_article content'] = array(
    'name' => 'create magazine_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_addresses content'.
  $permissions['create tieto_addresses content'] = array(
    'name' => 'create tieto_addresses content',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_campaign content'.
  $permissions['create tieto_campaign content'] = array(
    'name' => 'create tieto_campaign content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_carousel_content content'.
  $permissions['create tieto_carousel_content content'] = array(
    'name' => 'create tieto_carousel_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_contact_form content'.
  $permissions['create tieto_contact_form content'] = array(
    'name' => 'create tieto_contact_form content',
    'roles' => array(
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_content_page content'.
  $permissions['create tieto_content_page content'] = array(
    'name' => 'create tieto_content_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_customer_reference_case content'.
  $permissions['create tieto_customer_reference_case content'] = array(
    'name' => 'create tieto_customer_reference_case content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_cv_page content'.
  $permissions['create tieto_cv_page content'] = array(
    'name' => 'create tieto_cv_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_event content'.
  $permissions['create tieto_event content'] = array(
    'name' => 'create tieto_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_frontpage content'.
  $permissions['create tieto_frontpage content'] = array(
    'name' => 'create tieto_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_hugin_feed content'.
  $permissions['create tieto_hugin_feed content'] = array(
    'name' => 'create tieto_hugin_feed content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_jobs_vacancy content'.
  $permissions['create tieto_jobs_vacancy content'] = array(
    'name' => 'create tieto_jobs_vacancy content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_landing_page content'.
  $permissions['create tieto_landing_page content'] = array(
    'name' => 'create tieto_landing_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_map content'.
  $permissions['create tieto_map content'] = array(
    'name' => 'create tieto_map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_nasdaq_feed content'.
  $permissions['create tieto_nasdaq_feed content'] = array(
    'name' => 'create tieto_nasdaq_feed content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_news_article content'.
  $permissions['create tieto_news_article content'] = array(
    'name' => 'create tieto_news_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_news_context content'.
  $permissions['create tieto_news_context content'] = array(
    'name' => 'create tieto_news_context content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_protected_downloads content'.
  $permissions['create tieto_protected_downloads content'] = array(
    'name' => 'create tieto_protected_downloads content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_service_group_page content'.
  $permissions['create tieto_service_group_page content'] = array(
    'name' => 'create tieto_service_group_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_service_page content'.
  $permissions['create tieto_service_page content'] = array(
    'name' => 'create tieto_service_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_teleport content'.
  $permissions['create tieto_teleport content'] = array(
    'name' => 'create tieto_teleport content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tieto_top_story content'.
  $permissions['create tieto_top_story content'] = array(
    'name' => 'create tieto_top_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any atom'.
  $permissions['delete any atom'] = array(
    'name' => 'delete any atom',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete any contact content'.
  $permissions['delete any contact content'] = array(
    'name' => 'delete any contact content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any crisis_communication content'.
  $permissions['delete any crisis_communication content'] = array(
    'name' => 'delete any crisis_communication content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any industry_hub_page content'.
  $permissions['delete any industry_hub_page content'] = array(
    'name' => 'delete any industry_hub_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any magazine_article content'.
  $permissions['delete any magazine_article content'] = array(
    'name' => 'delete any magazine_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_addresses content'.
  $permissions['delete any tieto_addresses content'] = array(
    'name' => 'delete any tieto_addresses content',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_campaign content'.
  $permissions['delete any tieto_campaign content'] = array(
    'name' => 'delete any tieto_campaign content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_carousel_content content'.
  $permissions['delete any tieto_carousel_content content'] = array(
    'name' => 'delete any tieto_carousel_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_contact_form content'.
  $permissions['delete any tieto_contact_form content'] = array(
    'name' => 'delete any tieto_contact_form content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_content_page content'.
  $permissions['delete any tieto_content_page content'] = array(
    'name' => 'delete any tieto_content_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_customer_reference_case content'.
  $permissions['delete any tieto_customer_reference_case content'] = array(
    'name' => 'delete any tieto_customer_reference_case content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_cv_page content'.
  $permissions['delete any tieto_cv_page content'] = array(
    'name' => 'delete any tieto_cv_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_event content'.
  $permissions['delete any tieto_event content'] = array(
    'name' => 'delete any tieto_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_frontpage content'.
  $permissions['delete any tieto_frontpage content'] = array(
    'name' => 'delete any tieto_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_hugin_feed content'.
  $permissions['delete any tieto_hugin_feed content'] = array(
    'name' => 'delete any tieto_hugin_feed content',
    'roles' => array(
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_jobs_vacancy content'.
  $permissions['delete any tieto_jobs_vacancy content'] = array(
    'name' => 'delete any tieto_jobs_vacancy content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_landing_page content'.
  $permissions['delete any tieto_landing_page content'] = array(
    'name' => 'delete any tieto_landing_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_map content'.
  $permissions['delete any tieto_map content'] = array(
    'name' => 'delete any tieto_map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_nasdaq_feed content'.
  $permissions['delete any tieto_nasdaq_feed content'] = array(
    'name' => 'delete any tieto_nasdaq_feed content',
    'roles' => array(
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_news_article content'.
  $permissions['delete any tieto_news_article content'] = array(
    'name' => 'delete any tieto_news_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_news_context content'.
  $permissions['delete any tieto_news_context content'] = array(
    'name' => 'delete any tieto_news_context content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_protected_downloads content'.
  $permissions['delete any tieto_protected_downloads content'] = array(
    'name' => 'delete any tieto_protected_downloads content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_service_group_page content'.
  $permissions['delete any tieto_service_group_page content'] = array(
    'name' => 'delete any tieto_service_group_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_service_page content'.
  $permissions['delete any tieto_service_page content'] = array(
    'name' => 'delete any tieto_service_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_teleport content'.
  $permissions['delete any tieto_teleport content'] = array(
    'name' => 'delete any tieto_teleport content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tieto_top_story content'.
  $permissions['delete any tieto_top_story content'] = array(
    'name' => 'delete any tieto_top_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete fieldable basic_file'.
  $permissions['delete fieldable basic_file'] = array(
    'name' => 'delete fieldable basic_file',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable image'.
  $permissions['delete fieldable image'] = array(
    'name' => 'delete fieldable image',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable map'.
  $permissions['delete fieldable map'] = array(
    'name' => 'delete fieldable map',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable quick_links'.
  $permissions['delete fieldable quick_links'] = array(
    'name' => 'delete fieldable quick_links',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable rss_channel'.
  $permissions['delete fieldable rss_channel'] = array(
    'name' => 'delete fieldable rss_channel',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable spotlight'.
  $permissions['delete fieldable spotlight'] = array(
    'name' => 'delete fieldable spotlight',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable table'.
  $permissions['delete fieldable table'] = array(
    'name' => 'delete fieldable table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable text'.
  $permissions['delete fieldable text'] = array(
    'name' => 'delete fieldable text',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable twitter_channel'.
  $permissions['delete fieldable twitter_channel'] = array(
    'name' => 'delete fieldable twitter_channel',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable video'.
  $permissions['delete fieldable video'] = array(
    'name' => 'delete fieldable video',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own atom'.
  $permissions['delete own atom'] = array(
    'name' => 'delete own atom',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete own contact content'.
  $permissions['delete own contact content'] = array(
    'name' => 'delete own contact content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own crisis_communication content'.
  $permissions['delete own crisis_communication content'] = array(
    'name' => 'delete own crisis_communication content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own industry_hub_page content'.
  $permissions['delete own industry_hub_page content'] = array(
    'name' => 'delete own industry_hub_page content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own magazine_article content'.
  $permissions['delete own magazine_article content'] = array(
    'name' => 'delete own magazine_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_addresses content'.
  $permissions['delete own tieto_addresses content'] = array(
    'name' => 'delete own tieto_addresses content',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_campaign content'.
  $permissions['delete own tieto_campaign content'] = array(
    'name' => 'delete own tieto_campaign content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_carousel_content content'.
  $permissions['delete own tieto_carousel_content content'] = array(
    'name' => 'delete own tieto_carousel_content content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_contact_form content'.
  $permissions['delete own tieto_contact_form content'] = array(
    'name' => 'delete own tieto_contact_form content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_content_page content'.
  $permissions['delete own tieto_content_page content'] = array(
    'name' => 'delete own tieto_content_page content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_customer_reference_case content'.
  $permissions['delete own tieto_customer_reference_case content'] = array(
    'name' => 'delete own tieto_customer_reference_case content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_cv_page content'.
  $permissions['delete own tieto_cv_page content'] = array(
    'name' => 'delete own tieto_cv_page content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_event content'.
  $permissions['delete own tieto_event content'] = array(
    'name' => 'delete own tieto_event content',
    'roles' => array(
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_frontpage content'.
  $permissions['delete own tieto_frontpage content'] = array(
    'name' => 'delete own tieto_frontpage content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_hugin_feed content'.
  $permissions['delete own tieto_hugin_feed content'] = array(
    'name' => 'delete own tieto_hugin_feed content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_jobs_vacancy content'.
  $permissions['delete own tieto_jobs_vacancy content'] = array(
    'name' => 'delete own tieto_jobs_vacancy content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_landing_page content'.
  $permissions['delete own tieto_landing_page content'] = array(
    'name' => 'delete own tieto_landing_page content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_map content'.
  $permissions['delete own tieto_map content'] = array(
    'name' => 'delete own tieto_map content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_nasdaq_feed content'.
  $permissions['delete own tieto_nasdaq_feed content'] = array(
    'name' => 'delete own tieto_nasdaq_feed content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_news_article content'.
  $permissions['delete own tieto_news_article content'] = array(
    'name' => 'delete own tieto_news_article content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_news_context content'.
  $permissions['delete own tieto_news_context content'] = array(
    'name' => 'delete own tieto_news_context content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_protected_downloads content'.
  $permissions['delete own tieto_protected_downloads content'] = array(
    'name' => 'delete own tieto_protected_downloads content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_service_group_page content'.
  $permissions['delete own tieto_service_group_page content'] = array(
    'name' => 'delete own tieto_service_group_page content',
    'roles' => array(
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_service_page content'.
  $permissions['delete own tieto_service_page content'] = array(
    'name' => 'delete own tieto_service_page content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_teleport content'.
  $permissions['delete own tieto_teleport content'] = array(
    'name' => 'delete own tieto_teleport content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tieto_top_story content'.
  $permissions['delete own tieto_top_story content'] = array(
    'name' => 'delete own tieto_top_story content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in contact_type'.
  $permissions['delete terms in contact_type'] = array(
    'name' => 'delete terms in contact_type',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in domains'.
  $permissions['delete terms in domains'] = array(
    'name' => 'delete terms in domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in industry'.
  $permissions['delete terms in industry'] = array(
    'name' => 'delete terms in industry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in language'.
  $permissions['delete terms in language'] = array(
    'name' => 'delete terms in language',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in magazine'.
  $permissions['delete terms in magazine'] = array(
    'name' => 'delete terms in magazine',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in material_types'.
  $permissions['delete terms in material_types'] = array(
    'name' => 'delete terms in material_types',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in panopoly_categories'.
  $permissions['delete terms in panopoly_categories'] = array(
    'name' => 'delete terms in panopoly_categories',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in product_development'.
  $permissions['delete terms in product_development'] = array(
    'name' => 'delete terms in product_development',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in scald_authors'.
  $permissions['delete terms in scald_authors'] = array(
    'name' => 'delete terms in scald_authors',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in scald_tags'.
  $permissions['delete terms in scald_tags'] = array(
    'name' => 'delete terms in scald_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sites'.
  $permissions['delete terms in sites'] = array(
    'name' => 'delete terms in sites',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in technologies'.
  $permissions['delete terms in technologies'] = array(
    'name' => 'delete terms in technologies',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tieto_event_types'.
  $permissions['delete terms in tieto_event_types'] = array(
    'name' => 'delete terms in tieto_event_types',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tieto_hugin'.
  $permissions['delete terms in tieto_hugin'] = array(
    'name' => 'delete terms in tieto_hugin',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tieto_jobs_jobarea'.
  $permissions['delete terms in tieto_jobs_jobarea'] = array(
    'name' => 'delete terms in tieto_jobs_jobarea',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tieto_jobs_locations'.
  $permissions['delete terms in tieto_jobs_locations'] = array(
    'name' => 'delete terms in tieto_jobs_locations',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tieto_jobs_tags'.
  $permissions['delete terms in tieto_jobs_tags'] = array(
    'name' => 'delete terms in tieto_jobs_tags',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tieto_news_types'.
  $permissions['delete terms in tieto_news_types'] = array(
    'name' => 'delete terms in tieto_news_types',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tieto_times_issue'.
  $permissions['delete terms in tieto_times_issue'] = array(
    'name' => 'delete terms in tieto_times_issue',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display admin pages in another language'.
  $permissions['display admin pages in another language'] = array(
    'name' => 'display admin pages in another language',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all tieto topics'.
  $permissions['edit all tieto topics'] = array(
    'name' => 'edit all tieto topics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'tieto_permissions',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any atom'.
  $permissions['edit any atom'] = array(
    'name' => 'edit any atom',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit any contact content'.
  $permissions['edit any contact content'] = array(
    'name' => 'edit any contact content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any crisis_communication content'.
  $permissions['edit any crisis_communication content'] = array(
    'name' => 'edit any crisis_communication content',
    'roles' => array(
      'Corp and careers (Topic editor)' => 'Corp and careers (Topic editor)',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any industry_hub_page content'.
  $permissions['edit any industry_hub_page content'] = array(
    'name' => 'edit any industry_hub_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any magazine_article content'.
  $permissions['edit any magazine_article content'] = array(
    'name' => 'edit any magazine_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_addresses content'.
  $permissions['edit any tieto_addresses content'] = array(
    'name' => 'edit any tieto_addresses content',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_campaign content'.
  $permissions['edit any tieto_campaign content'] = array(
    'name' => 'edit any tieto_campaign content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_carousel_content content'.
  $permissions['edit any tieto_carousel_content content'] = array(
    'name' => 'edit any tieto_carousel_content content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_contact_form content'.
  $permissions['edit any tieto_contact_form content'] = array(
    'name' => 'edit any tieto_contact_form content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_content_page content'.
  $permissions['edit any tieto_content_page content'] = array(
    'name' => 'edit any tieto_content_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_customer_reference_case content'.
  $permissions['edit any tieto_customer_reference_case content'] = array(
    'name' => 'edit any tieto_customer_reference_case content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_cv_page content'.
  $permissions['edit any tieto_cv_page content'] = array(
    'name' => 'edit any tieto_cv_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_event content'.
  $permissions['edit any tieto_event content'] = array(
    'name' => 'edit any tieto_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_frontpage content'.
  $permissions['edit any tieto_frontpage content'] = array(
    'name' => 'edit any tieto_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_hugin_feed content'.
  $permissions['edit any tieto_hugin_feed content'] = array(
    'name' => 'edit any tieto_hugin_feed content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_jobs_vacancy content'.
  $permissions['edit any tieto_jobs_vacancy content'] = array(
    'name' => 'edit any tieto_jobs_vacancy content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_landing_page content'.
  $permissions['edit any tieto_landing_page content'] = array(
    'name' => 'edit any tieto_landing_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_map content'.
  $permissions['edit any tieto_map content'] = array(
    'name' => 'edit any tieto_map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_nasdaq_feed content'.
  $permissions['edit any tieto_nasdaq_feed content'] = array(
    'name' => 'edit any tieto_nasdaq_feed content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_news_article content'.
  $permissions['edit any tieto_news_article content'] = array(
    'name' => 'edit any tieto_news_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_news_context content'.
  $permissions['edit any tieto_news_context content'] = array(
    'name' => 'edit any tieto_news_context content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_protected_downloads content'.
  $permissions['edit any tieto_protected_downloads content'] = array(
    'name' => 'edit any tieto_protected_downloads content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_service_group_page content'.
  $permissions['edit any tieto_service_group_page content'] = array(
    'name' => 'edit any tieto_service_group_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_service_page content'.
  $permissions['edit any tieto_service_page content'] = array(
    'name' => 'edit any tieto_service_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_teleport content'.
  $permissions['edit any tieto_teleport content'] = array(
    'name' => 'edit any tieto_teleport content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tieto_top_story content'.
  $permissions['edit any tieto_top_story content'] = array(
    'name' => 'edit any tieto_top_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_landing_page'.
  $permissions['edit field_landing_page'] = array(
    'name' => 'edit field_landing_page',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_topic_editors'.
  $permissions['edit field_topic_editors'] = array(
    'name' => 'edit field_topic_editors',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit fieldable basic_file'.
  $permissions['edit fieldable basic_file'] = array(
    'name' => 'edit fieldable basic_file',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable image'.
  $permissions['edit fieldable image'] = array(
    'name' => 'edit fieldable image',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable map'.
  $permissions['edit fieldable map'] = array(
    'name' => 'edit fieldable map',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable quick_links'.
  $permissions['edit fieldable quick_links'] = array(
    'name' => 'edit fieldable quick_links',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable rss_channel'.
  $permissions['edit fieldable rss_channel'] = array(
    'name' => 'edit fieldable rss_channel',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable spotlight'.
  $permissions['edit fieldable spotlight'] = array(
    'name' => 'edit fieldable spotlight',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable table'.
  $permissions['edit fieldable table'] = array(
    'name' => 'edit fieldable table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable text'.
  $permissions['edit fieldable text'] = array(
    'name' => 'edit fieldable text',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable twitter_channel'.
  $permissions['edit fieldable twitter_channel'] = array(
    'name' => 'edit fieldable twitter_channel',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable video'.
  $permissions['edit fieldable video'] = array(
    'name' => 'edit fieldable video',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit node machine name'.
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'defaultcontent',
  );

  // Exported permission: 'edit own atom'.
  $permissions['edit own atom'] = array(
    'name' => 'edit own atom',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit own contact content'.
  $permissions['edit own contact content'] = array(
    'name' => 'edit own contact content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own crisis_communication content'.
  $permissions['edit own crisis_communication content'] = array(
    'name' => 'edit own crisis_communication content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_landing_page'.
  $permissions['edit own field_landing_page'] = array(
    'name' => 'edit own field_landing_page',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_topic_editors'.
  $permissions['edit own field_topic_editors'] = array(
    'name' => 'edit own field_topic_editors',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own industry_hub_page content'.
  $permissions['edit own industry_hub_page content'] = array(
    'name' => 'edit own industry_hub_page content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own magazine_article content'.
  $permissions['edit own magazine_article content'] = array(
    'name' => 'edit own magazine_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_addresses content'.
  $permissions['edit own tieto_addresses content'] = array(
    'name' => 'edit own tieto_addresses content',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_campaign content'.
  $permissions['edit own tieto_campaign content'] = array(
    'name' => 'edit own tieto_campaign content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_carousel_content content'.
  $permissions['edit own tieto_carousel_content content'] = array(
    'name' => 'edit own tieto_carousel_content content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_contact_form content'.
  $permissions['edit own tieto_contact_form content'] = array(
    'name' => 'edit own tieto_contact_form content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_content_page content'.
  $permissions['edit own tieto_content_page content'] = array(
    'name' => 'edit own tieto_content_page content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_customer_reference_case content'.
  $permissions['edit own tieto_customer_reference_case content'] = array(
    'name' => 'edit own tieto_customer_reference_case content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_cv_page content'.
  $permissions['edit own tieto_cv_page content'] = array(
    'name' => 'edit own tieto_cv_page content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_event content'.
  $permissions['edit own tieto_event content'] = array(
    'name' => 'edit own tieto_event content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_frontpage content'.
  $permissions['edit own tieto_frontpage content'] = array(
    'name' => 'edit own tieto_frontpage content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_hugin_feed content'.
  $permissions['edit own tieto_hugin_feed content'] = array(
    'name' => 'edit own tieto_hugin_feed content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_jobs_vacancy content'.
  $permissions['edit own tieto_jobs_vacancy content'] = array(
    'name' => 'edit own tieto_jobs_vacancy content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_landing_page content'.
  $permissions['edit own tieto_landing_page content'] = array(
    'name' => 'edit own tieto_landing_page content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_map content'.
  $permissions['edit own tieto_map content'] = array(
    'name' => 'edit own tieto_map content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_nasdaq_feed content'.
  $permissions['edit own tieto_nasdaq_feed content'] = array(
    'name' => 'edit own tieto_nasdaq_feed content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_news_article content'.
  $permissions['edit own tieto_news_article content'] = array(
    'name' => 'edit own tieto_news_article content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_news_context content'.
  $permissions['edit own tieto_news_context content'] = array(
    'name' => 'edit own tieto_news_context content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_protected_downloads content'.
  $permissions['edit own tieto_protected_downloads content'] = array(
    'name' => 'edit own tieto_protected_downloads content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_service_group_page content'.
  $permissions['edit own tieto_service_group_page content'] = array(
    'name' => 'edit own tieto_service_group_page content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_service_page content'.
  $permissions['edit own tieto_service_page content'] = array(
    'name' => 'edit own tieto_service_page content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_teleport content'.
  $permissions['edit own tieto_teleport content'] = array(
    'name' => 'edit own tieto_teleport content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tieto_top_story content'.
  $permissions['edit own tieto_top_story content'] = array(
    'name' => 'edit own tieto_top_story content',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in contact_type'.
  $permissions['edit terms in contact_type'] = array(
    'name' => 'edit terms in contact_type',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in domains'.
  $permissions['edit terms in domains'] = array(
    'name' => 'edit terms in domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in industry'.
  $permissions['edit terms in industry'] = array(
    'name' => 'edit terms in industry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in language'.
  $permissions['edit terms in language'] = array(
    'name' => 'edit terms in language',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in magazine'.
  $permissions['edit terms in magazine'] = array(
    'name' => 'edit terms in magazine',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in material_types'.
  $permissions['edit terms in material_types'] = array(
    'name' => 'edit terms in material_types',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in panopoly_categories'.
  $permissions['edit terms in panopoly_categories'] = array(
    'name' => 'edit terms in panopoly_categories',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in product_development'.
  $permissions['edit terms in product_development'] = array(
    'name' => 'edit terms in product_development',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in scald_authors'.
  $permissions['edit terms in scald_authors'] = array(
    'name' => 'edit terms in scald_authors',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in scald_tags'.
  $permissions['edit terms in scald_tags'] = array(
    'name' => 'edit terms in scald_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sites'.
  $permissions['edit terms in sites'] = array(
    'name' => 'edit terms in sites',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in technologies'.
  $permissions['edit terms in technologies'] = array(
    'name' => 'edit terms in technologies',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tieto_event_types'.
  $permissions['edit terms in tieto_event_types'] = array(
    'name' => 'edit terms in tieto_event_types',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tieto_hugin'.
  $permissions['edit terms in tieto_hugin'] = array(
    'name' => 'edit terms in tieto_hugin',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tieto_jobs_jobarea'.
  $permissions['edit terms in tieto_jobs_jobarea'] = array(
    'name' => 'edit terms in tieto_jobs_jobarea',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tieto_jobs_locations'.
  $permissions['edit terms in tieto_jobs_locations'] = array(
    'name' => 'edit terms in tieto_jobs_locations',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tieto_jobs_tags'.
  $permissions['edit terms in tieto_jobs_tags'] = array(
    'name' => 'edit terms in tieto_jobs_tags',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tieto_news_types'.
  $permissions['edit terms in tieto_news_types'] = array(
    'name' => 'edit terms in tieto_news_types',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tieto_times_issue'.
  $permissions['edit terms in tieto_times_issue'] = array(
    'name' => 'edit terms in tieto_times_issue',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'fetch any atom'.
  $permissions['fetch any atom'] = array(
    'name' => 'fetch any atom',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'fetch own atom'.
  $permissions['fetch own atom'] = array(
    'name' => 'fetch own atom',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'import slideshare_asset feeds'.
  $permissions['import slideshare_asset feeds'] = array(
    'name' => 'import slideshare_asset feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import tieto_jobs_import feeds'.
  $permissions['import tieto_jobs_import feeds'] = array(
    'name' => 'import tieto_jobs_import feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import youtube feeds'.
  $permissions['import youtube feeds'] = array(
    'name' => 'import youtube feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'restrict atom access'.
  $permissions['restrict atom access'] = array(
    'name' => 'restrict atom access',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Sysop' => 'Sysop',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'unlock slideshare_asset feeds'.
  $permissions['unlock slideshare_asset feeds'] = array(
    'name' => 'unlock slideshare_asset feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock tieto_jobs_import feeds'.
  $permissions['unlock tieto_jobs_import feeds'] = array(
    'name' => 'unlock tieto_jobs_import feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock youtube feeds'.
  $permissions['unlock youtube feeds'] = array(
    'name' => 'unlock youtube feeds',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use admin toolbar'.
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'admin',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use all enabled languages'.
  $permissions['use all enabled languages'] = array(
    'name' => 'use all enabled languages',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use search_api_saved_searches'.
  $permissions['use search_api_saved_searches'] = array(
    'name' => 'use search_api_saved_searches',
    'roles' => array(
      'Sysop' => 'Sysop',
    ),
    'module' => 'search_api_saved_searches',
  );

  // Exported permission: 'use text format panopoly_html_text'.
  $permissions['use text format panopoly_html_text'] = array(
    'name' => 'use text format panopoly_html_text',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format panopoly_wysiwyg_text'.
  $permissions['use text format panopoly_wysiwyg_text'] = array(
    'name' => 'use text format panopoly_wysiwyg_text',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format tieto_jobs_ext'.
  $permissions['use text format tieto_jobs_ext'] = array(
    'name' => 'use text format tieto_jobs_ext',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format tieto_news_ext'.
  $permissions['use text format tieto_news_ext'] = array(
    'name' => 'use text format tieto_news_ext',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format tieto_sysop_text'.
  $permissions['use text format tieto_sysop_text'] = array(
    'name' => 'use text format tieto_sysop_text',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any atom'.
  $permissions['view any atom'] = array(
    'name' => 'view any atom',
    'roles' => array(
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view field_landing_page'.
  $permissions['view field_landing_page'] = array(
    'name' => 'view field_landing_page',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_topic_editors'.
  $permissions['view field_topic_editors'] = array(
    'name' => 'view field_topic_editors',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own atom'.
  $permissions['view own atom'] = array(
    'name' => 'view own atom',
    'roles' => array(
      'CIR editors' => 'CIR editors',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view own field_landing_page'.
  $permissions['view own field_landing_page'] = array(
    'name' => 'view own field_landing_page',
    'roles' => array(
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_topic_editors'.
  $permissions['view own field_topic_editors'] = array(
    'name' => 'view own field_topic_editors',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'CIR editors' => 'CIR editors',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
      'Topic editor' => 'Topic editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Addresses editor' => 'Addresses editor',
      'Administrator' => 'Administrator',
      'Careers editor' => 'Careers editor',
      'Country editor' => 'Country editor',
      'Editor in chief' => 'Editor in chief',
      'Sysop' => 'Sysop',
    ),
    'module' => 'system',
  );

  return $permissions;
}
