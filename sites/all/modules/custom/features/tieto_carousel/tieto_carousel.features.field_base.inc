<?php
/**
 * @file
 * tieto_carousel.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tieto_carousel_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_add_to_careers_page'.
  $field_bases['field_add_to_careers_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_add_to_careers_page',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_background_atom'.
  $field_bases['field_background_atom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_background_atom',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  // Exported field_base: 'field_destination_link'.
  $field_bases['field_destination_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_destination_link',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_tile_label'.
  $field_bases['field_tile_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tile_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '<b> ---International---</b>' => '<b> ---International---</b>',
        'News ' => ' News',
        'Top story ' => ' Top story',
        'Insight ' => ' Insight',
        'Video ' => ' Video',
        'Blog ' => ' Blog',
        'Paper ' => ' Paper',
        'Partner story ' => ' Partner story',
        '<b> ---Norway---</b>' => '<b> ---Norway---</b>',
        'Nyhet ' => ' Nyhet',
        'Referanse ' => ' Referanse',
        'Innsikt ' => ' Innsikt',
        'Video2 ' => ' Video',
        'Blogg ' => ' Blogg',
        'Last ned ' => ' Last ned',
        'Partner story2 ' => ' Partner story',
        '<b> ---Sweden---</b>' => '<b> ---Sweden---</b>',
        'Nyhet2 ' => ' Nyhet',
        'Kundreferens ' => ' Kundreferens',
        'Trender och insikter ' => ' Trender och insikter',
        'Video3 ' => ' Video',
        'Bloggpost ' => ' Bloggpost',
        'Ladda ner ' => ' Ladda ner',
        'Partner story3 ' => ' Partner story',
        '<b> ---Finland---</b>' => '<b> ---Finland---</b>',
        'Uutinen' => 'Uutinen',
        'Asiakastarina' => 'Asiakastarina',
        'Artikkeli' => 'Artikkeli',
        'Video4 ' => ' Video',
        'Blogi' => 'Blogi',
        'Lataa ' => 'Lataa ja lue',
        'Kumppanitarina ' => ' Kumppanitarina',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  return $field_bases;
}
