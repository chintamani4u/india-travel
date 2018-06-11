<?php

function tieto_news_feeds_hugin_sources_alter(&$sources) {
  $sources += array(
    'press_release:tieto_news_language' => array(
      'name' => 'Tieto News Language',
      'description' => 'Hugin language code converted to iso 639.',
    ),
  );
  foreach (field_info_instances('taxonomy_term', 'tieto_hugin') as $instance) {
    $element_key = 'press_release:tieto_hugin_map:' . $instance['field_name'];
    $sources[$element_key] = array(
      'name' => t('Tieto Hugin (@field_name)', array(
        '@field_name' => $instance['field_name'],
      )),
      'description' => 'Hugin category mapped via Tieto hugin taxonomy',
    );
    $field = field_info_field($instance['field_name']);
    if (!empty($field['columns'])) {
      foreach ($field['columns'] as $column_key => $column) {
        $source = $sources[$element_key];
        $source['name'] .= ' ['. $column_key . ']';
        $sources[$element_key . ':' . $column_key] = $source;
      }
    }
  }
  $sources['press_release:tieto_hugin_map:undefined'] = array(
    'name' => 'Tieto Hugin undefined mappings [tid]',
    'description' => 'Undefined Tieto hugin category terms',
  );
}

function tieto_news_feeds_hugin_press_releases_alter(&$items) {
  foreach ($items as &$item) {
    foreach (_tieto_news_feeds_hugin_get_mappings($item) as $field_name => $values) {
      $item['tieto_hugin_map:' . $field_name] = $values;
    }
    $language = _tieto_news_feeds_hugin_get_language($item);
    $item['tieto_news_language'] = $language;
  }
}

/**
 * Helper; Returns language code for the given feed item.
 *
 * Language is detected by item[language] or item[categories].
 *
 * If language was not detected, returns LANGUAGE_NONE.
 */
function _tieto_news_feeds_hugin_get_language($item) {
  // These are Hugin language categories as we know them.
  $hugin_languages = variable_get('tieto_news_hugin_languages', array(
    5   => 'en', // 'English',
    62  => 'cs', // 'Czech',
    3   => 'da', // 'Danish',
    7   => 'de', // 'German',
    22  => 'de-at', // 'Austrian',
    4   => 'fi', // 'Finnish',
    2   => 'sv', // 'Swedish',
    112 => 'lv', // 'Latvian',
    117 => 'lt', // 'Lithuanian',
    142 => 'nl', // 'Dutch',
    1   => 'nn', // 'Norwegian',
    103 => 'it', // 'Italian',
    71  => 'et', // 'Estonian',
    158 => 'pl', // 'Polish',
    164 => 'ru', // 'Russian',
  ));

  // Mapping of hugin language to ISO 639 language.
  $hugin_language_codes = variable_get('tieto_news_hugin_language_codes', array(
    'no' => 'nn',
    'se' => 'sv',
    'cz' => 'cs',
  ));

  $language = $item['language'];

  // Change e.g. "se" to 'sv' and "cz" to 'cs'.
  if (isset($hugin_language_codes[$language])) {
    $language = $hugin_language_codes[$language];
  }

  if (in_array($language, $hugin_languages)) {
    return $language;
  }

  $language_list = language_list('enabled');
  if (empty($language) || !isset($language_list[1][$language])) {
    $language = LANGUAGE_NONE;
  }

  foreach ($item['categories'] as $category) {
    if ($category['keywords'] == 'language' && isset($hugin_languages[$category['id']])) {
      $language = $hugin_languages[$category['id']];
      break;
    }
  }

  return $language;
}

/**
 * Helper; Returns terms from tieto_hugin vocabulary by names.
 */
function _tieto_news_feeds_hugin_get_terms($names) {
  $hugin_terms = array();

  $hugin_vocabulary = taxonomy_vocabulary_machine_name_load('tieto_hugin');
  if ($hugin_vocabulary && $names) {
    $query = new EntityFieldQuery();
    $result = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('vid', $hugin_vocabulary->vid)
      ->propertyCondition('name', $names)
      ->execute();

    if (!empty($result['taxonomy_term'])) {
      foreach (entity_load('taxonomy_term', array_keys($result['taxonomy_term'])) as $term) {
        $hugin_terms[$term->name] = $term;
      }
    }
  }

  return $hugin_terms;
}

function _tieto_news_feeds_hugin_get_mappings($item) {
  $mappings = array(
    'undefined' => array(),
  );

  $hugin_vocabulary = taxonomy_vocabulary_machine_name_load('tieto_hugin');
  if (!$hugin_vocabulary) {
    return FALSE;
  }

  $hugin_terms = array();
  $hugin_categories = array();
  foreach ($item['categories'] as $category) {
    $name = trim('hugin:' . $category['id']);
    $hugin_categories[$name] = $category;
    $hugin_terms[$name] = new stdClass;
    $hugin_terms[$name]->name = $name;
    $hugin_terms[$name]->vid = $hugin_vocabulary->vid;
    $hugin_terms[$name]->description = $category['label'];
    $hugin_terms[$name]->vocabulary_machine_name = $hugin_vocabulary->machine_name;
    if (!empty($category['keywords'])) {
      $hugin_terms[$name]->description .= ' [' . $category['keywords'] . ']'; 
    }
  }

  $existing_terms = _tieto_news_feeds_hugin_get_terms(array_keys($hugin_terms));
  foreach ($hugin_terms as $name => $term) {
    if (isset($existing_terms[$name])) {
      $hugin_terms[$name] = $existing_terms[$name];
    }
    else {
      drupal_alter('tieto_news_hugin_defaults', $term, $hugin_categories[$name], $item);
      taxonomy_term_save($term);
      if (!empty($term->tid) && ($term = taxonomy_term_load($term->tid))) {
        $hugin_terms[$name] = $term;
      }
      else {
        unset($hugin_terms[$name]);
      }
    }
  }

  $hugin_fields = field_info_instances('taxonomy_term', $hugin_vocabulary->machine_name);
  foreach ($hugin_terms as $name => $entity) {
    $mappings['undefined'][$name] = $entity->tid;
    foreach ($hugin_fields as $field_name => $field_instance) {
      $field = field_info_field($field_name);
      $columns = !empty($field['columns']) ? $field['columns'] : array();

      $values = field_get_items('taxonomy_term', $entity, $field_name);
      if ($values) {
        unset($mappings['undefined'][$name]);

        if (!isset($mappings[$field_name])) {
          $mappings[$field_name] = array();
        }
        foreach ($values as $item) {
          if (!in_array($item, $mappings[$field_name])) {
            $mappings[$field_name][] = $item;
            foreach ($columns as $column_key => $column) {
              if (isset($item[$column_key])) {
                $mappings[$field_name . ':' . $column_key][] = $item[$column_key];
              }
            }
          }
        }
      }
    }
  }

  return $mappings;
}
