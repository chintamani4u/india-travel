<?php

function feeds_hugin_hugin_xml($string) {
  if (!defined('LIBXML_VERSION') || (version_compare(phpversion(), '5.1.0', '<'))) {
    @ $xml = simplexml_load_string($string, NULL);
  }
  else {
    @ $xml = simplexml_load_string($string, NULL, LIBXML_NOERROR | LIBXML_NOWARNING | LIBXML_NOCDATA);
  }
  return $xml;
}

function feeds_hugin_hugin_parse_feed($string) {
  $feed = array();

  if ($xml = feeds_hugin_hugin_xml($string)) {
    $feed['title'] = (string) $xml->head->title;
    $feed['description'] = (string) $xml->head->description;
    $feed['flastmod'] = (string) $xml->head->flastmod;
    $feed['press_releases'] = array();
    foreach ($xml->xpath('/hexML/body/press_releases/press_release') as $press_release) {
      $feed['press_releases'][] = array(
        'id' => (string) $press_release['id'],
        'language' => (string) $press_release['language'],
        'published_date' => strtotime((string) $press_release->published['date']),
        'headline' => trim((string) $press_release->headline),
        'location_href' => (string) $press_release->location['href'],
      );
    }
  }
  
  return $feed;
}

function feeds_hugin_hugin_get_press_releases($url, $id = NULL, $language = NULL) {
  static $cache = array();
  $cid = $url . $id . $language;
  if (!isset($cache[$cid])) {
    feeds_include_library('http_request.inc', 'http_request');
    $result = http_request_get($url);
    if ($result->code != 200) {
      $cache[$cid] = FALSE;
    }
    else {
      $press_releases = array();
      $xml = feeds_hugin_hugin_xml($result->data);
      if ($xml) {
        $xpath = '/hexML/body/press_releases/press_release';
        $attrs = array();
        if (isset($id)) {
          $attrs[] = '@id = "' . $id . '"';
        }
        if (isset($language)) {
          $attrs[] = '@language = "' . $language . '"';
        }
        if ($attrs) {
          $xpath .= '['. implode(' and ', $attrs) . ']';
        }

        foreach ($xml->xpath($xpath) as $result) {
          $press_release = array(
            'id' => (string) $result['id'],
            'language' => (string) $result['language'],
            'published_date' => strtotime((string) $result->published['date']),
            'headline' => trim((string) $result->headline),
            'ingress' => trim((string) $result->ingress),
            'main' => trim((string) $result->main),
            'categories' => array(),
            'footer' => trim((string) $result->footer),
          );
          foreach ($result->categories->category as $category) {
            $press_release['categories'][] = array(
              'id' => (string) $category['id'],
              'label' => (string) $category['label'],
              'keywords' => (string) $category['keywords'],
            );
          }
        }
        $press_releases[] = $press_release;
        drupal_alter('feeds_hugin_press_releases', $press_releases);
      }
      $cache[$cid] = $press_releases;
    }    
  }
  return $cache[$cid];
}
