<?php

/**
 * Implements hook_tieto_news_hugin_defaults_alter().
 *
 * Map hugin "type" categories to tieto news types.
 */
function tieto_news_tieto_news_hugin_defaults_alter(&$term, $category) {
  $id = $category['id'];
  $target = 'field_news_type';
  $vocabulary = 'tieto_news_types';
  $term_names = array(
    // tieto abp
    '1341' => 'Stock exchanges release',
    '1342' => 'Stock announcement',
    '1343' => 'Press Release',
    // tieto oyj
    '1344' => 'Stock exchanges release',
    '1345' => 'Stock announcement',
    '1346' => 'Press Release',
  );
  if (!isset($term_names[$id])) {
    return;
  }

  $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary);

  $t = db_select('taxonomy_term_data', 'td')
    ->fields('td', array('tid', 'name'))
    ->condition('name', $term_names[$id])
    ->condition('vid', $vocabulary->vid)
    ->execute()
    ->fetchObject();
  if (!isset($t->tid)) {
    return;
  }

  if (!isset($term->{$target}[LANGUAGE_NONE])) {
    $term->{$target}[LANGUAGE_NONE] = array();
  }
  $term->{$target}[LANGUAGE_NONE][] = array(
    'tid' => $t->tid,
  );
}
