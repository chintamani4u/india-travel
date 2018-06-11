<?php

/**
 * Implements hook_tieto_news_hugin_defaults_alter().
 *
 * Map initial hugin category ids to industry vocabulary terms.
 */
function tieto_basefields_tieto_news_hugin_defaults_alter(&$term, $category) {
  $id = $category['id'];
  $target = 'field_news_industry';
  $vocabulary = 'industry';
  $term_names = array(
    // tieto abp
    1900 => 'Financial services',
    1901 => 'Z_OLD - 10',
    1902 => 'Forest',
    1903 => 'Z_OLD - 7',
    1904 => 'Z_OLD - 3',
    1905 => 'Public',
    1906 => 'Z_OLD - 11',
    1907 => 'Manufacturing',
    1908 => 'Z_OLD - 9',
    1909 => 'Z_OLD - 2',
    1910 => 'Z_OLD - 8',
    2778 => 'Z_OLD - 4',
    3255 => 'Energy utilities',
    3258 => 'Healthcare and welfare',
    3259 => 'Logistics',
    3261 => 'Media',
    3262 => 'Oil and Gas',
    3264 => 'Telecom',
    3265 => 'Trade',
    // tieto oyj
    1888 => 'Financial services',
    1889 => 'Z_OLD - 10',
    1890 => 'Forest',
    1891 => 'Z_OLD - 7',
    1892 => 'Z_OLD - 3',
    1893 => 'Public',
    1894 => 'Z_OLD - 11',
    1895 => 'Manufacturing',
    1896 => 'Z_OLD - 9',
    1897 => 'Z_OLD - 2',
    1898 => 'Z_OLD - 8',
    1899 => 'Z_OLD - 6',
    2712 => 'Z_OLD - 1',
    2713 => 'Z_OLD - 4',
    2714 => 'Z_OLD - 5',
    3247 => 'Oil and gas',
    3248 => 'Trade',
    3249 => 'Energy utilities',
    3250 => 'Healthcare and welfare',
    3251 => 'Logistics',
    3252 => 'Media',
    3253 => 'Telecom',
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
