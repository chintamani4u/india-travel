<?php

/**
 * 
 * @param array $sources
 */
function hook_feeds_cision_sources_alter(&$sources) {
  $sources += array(
    'press_release:category_ids' => array(
      'name' => t('Category IDs'),
      'description' => t('An array of category IDs that have been assigned to the press release.'),
    ),
  );
}

/**
 * 
 * @param array $items
 */
function hook_feeds_cision_press_releases_alter(&$items) {
  foreach ($items as &$item) {
    if (!isset($item['category_ids'])) {
      $item['category_ids'] = array();
    }
    foreach ($item['categories'] as $category) {
      $item['category_ids'][] = $category['id'];
    }
  }
}
