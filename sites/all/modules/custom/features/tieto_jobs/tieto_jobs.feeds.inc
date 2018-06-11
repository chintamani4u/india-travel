<?php

/**
 * Implements hook_feeds_presave().
 *
 * Invoked before a feed item is saved.
 *
 * @param $source
 *  FeedsSource object that describes the source that is being imported.
 * @param $entity
 *   The entity object.
 * @param $item
 *   The parser result for this entity.
 */
function tieto_jobs_feeds_presave(FeedsSource $source, $entity, $item) {
  if ($source->importer()->id == 'tieto_jobs_import') {

    $node = entity_metadata_wrapper('node', $entity);

    $now = time();
    $date_from = $node->field_jobs_date->value->value();
    $date_to = strtotime('+1 day', $node->field_jobs_date->value2->value());

    $status = $node->field_jobs_status->value();
    // Check the publish date and set publication status + scheduling accordingly
    if ($now < $date_to) {
      // Schedule unpublish
      $entity->unpublish_on = $date_to;
      if ($date_from <= $now) {
        // Publish immediately.
        // TIET-1754 - TIET-1736 Change sorting and filtering of jobs on All open jobs page
        //$entity->created = $entity->publish_on;
        $entity->status = 1;
        $entity->publish_on = 0;
      }
      else {
        // Schedule publish
        $entity->status = 0;
        $entity->publish_on = $date_from;
      }
    }
    else {
      // If status is "deleted" or expired, unpublish immediately.
      $entity->status = 0;
      $entity->publish_on = 0;
      $entity->unpublish_on = 0;
    }
  }
}

/*
 * Implements hook_feed_processor_targets_alter()
*/
function tieto_jobs_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {

  //Switch the callbacks for location, jobareas and tags fields
  foreach (array('location', 'jobareas', 'tags') as $target) {

    $field_name = 'field_jobs_' . $target;
    $my_callback = '_tieto_jobs_feeds_set_target_' . $target;
 
    if (!isset($targets[$field_name]) || !function_exists($my_callback)) {
      continue;
    }
    $my_target = $targets[$field_name];
    $my_target['name'] = 'Tieto Jobs: ' . $my_target['name'];
    $my_target['callback'] = $my_callback;
    $my_target['real_target'] = $field_name;

    $targets[$field_name] = $my_target;
  }
}

/*
 * Custom callback function for setting the cities
*/
function _tieto_jobs_feeds_set_target_location($source, $entity, $target, $value, $mapping) {
  if (!is_array($value)) {
    $value = array($value);
  }

  $locations = array();

  // Parse thru the values and set them into the locations array
  foreach ($value as $delta => $location) {

    // @TODO: bit of an ugly code because the XML had a namespace which was not 
    //        declared; had to get rid of it before loading the string, works
    //        for now but perhaps clean this up
    $location = str_replace('job:', '', $location);

    $location = simplexml_load_string($location); // Load the xml string

    $i = 0;

    foreach ($location->location as $val) {

      if (isset($val->country)) {

        $locations[$i]['country'] = (string)$val->country;
      }

      if (isset($val->cities)) {

        $locations[$i]['cities'] = (array)$val->cities;
      }

      $i++;
    }
  }

  foreach ($locations as $key => $val) {

    if (!is_array($locations[$key]['cities']['city'])) {
      $locations[$key]['cities']['city'] = array($locations[$key]['cities']['city']);
    }
  }

  $vocabulary = taxonomy_vocabulary_machine_name_load('tieto_jobs_locations');
  $countries = array();

  $terms = array();

  foreach ($locations as $location) {

    $name = trim($location['country']);

    // Load the country from taxonomy; would be better to use entityFieldQuery 

    if (!isset($countries[$location['country']])) {
      $country = db_select('taxonomy_term_data', 'td')
        ->fields('td', array('tid', 'name'))
        ->condition('name', $name)
        ->condition('vid', $vocabulary->vid)
        ->execute()
        ->fetchObject();

      // If country does not exist in the taxonomy, create it
      if (empty($country)) {
        $country = new stdClass();
        $country->name = $name;
        $country->vid = $vocabulary->vid;
        taxonomy_term_save($country);
      }
      $countries[$location['country']] = $country;
    }

    $country = $countries[$location['country']];

    // Load the cities and the tids to an array
    foreach ($location['cities']['city'] as $city) {

      $city_new = '';

      $city_name = drupal_strtolower(trim($city));

      foreach (taxonomy_get_children($country->tid, $vocabulary->vid) as $c) {
        if (drupal_strtolower($c->name) == $city_name) {
          $city_new = $c;
          break;
        }
      }

      // Check if the city exists, if not create

      $str = explode('-', $city_name);

      $str2 = array();

      foreach ($str as $val) {

        $str2[] = ucfirst($val);
      }

      $city_name = implode($str2, '-');

      $str = explode(' ', $city_name);

      $str2 = array();

      foreach ($str as $val) {

        $str2[] = ucfirst($val);
      }

      $city_name = implode($str2, ' ');

      if (empty($city_new)) {
        $city_new = new stdClass();
        $city_new->name = $city_name;
        $city_new->vid = $vocabulary->vid;
        $city_new->parent = $country->tid;
        taxonomy_term_save($city_new);
      }
 
      $terms[] = $city_new->tid;
    }
  }

  // @todo: consider removing this direct call...
  return taxonomy_feeds_set_target($source, $entity, $target, $terms);
}

/*
 * Custom callback function for setting the tags
*/
function _tieto_jobs_feeds_set_target_tags($source, $entity, $target, $value, $mapping) {
  return _tieto_jobs_feeds_set_terms($source, $entity, $target, $value, $mapping);
}

/*
 * Custom callback function for setting the jop areas
*/
function _tieto_jobs_feeds_set_target_jobareas($source, $entity, $target, $value, $mapping) {
  return _tieto_jobs_feeds_set_terms($source, $entity, $target, $value, $mapping);
}

/*
 * Parses the taxonomy terms and sets them correctly to the entity
*/
function _tieto_jobs_feeds_set_terms($source, $entity, $target, $value, $mapping) {
  if (!is_array($value)) {
    $value = explode(', ', $value);
  }

  $terms = array_unique(array_filter(array_map('trim', $value)));

  // @todo: consider removing this direct call...
  return taxonomy_feeds_set_target($source, $entity, $target, $terms, $mapping);
}
