<?php

function feeds_cision_cision_xml($string) {
  if (!defined('LIBXML_VERSION') || (version_compare(phpversion(), '5.1.0', '<'))) {
    @ $xml = simplexml_load_string($string, NULL);
  }
  else {
    @ $xml = simplexml_load_string($string, NULL, LIBXML_NOERROR | LIBXML_NOWARNING | LIBXML_NOCDATA);
  }
  return $xml;
}

function feeds_cision_cision_parse_feed($string) {
  $feed = array();

  if ($xml = feeds_cision_cision_xml($string)) {

    foreach ($xml->xpath('/Releases/Release') as $press_release) {

      $tdata = ((array) $press_release);
    
      if ((string) $tdata['@attributes']['LanguageCode'] == 'no') {
        $tdata['@attributes']['LanguageCode'] = 'nn';
      }

      $feed['press_releases'][] = array(
        'releaseid' => (string) $tdata['@attributes']['Id'],
        'language' => (string) $tdata['@attributes']['LanguageCode'],
        'country' => (string) $tdata['@attributes']['CountryCode'],
        'published_date' => strtotime((string) $tdata['@attributes']['PublishDateUtc']),
        'headline' => trim((string) $tdata['Title']),
        'location_href' => (string) $tdata['@attributes']['DetailUrl'],
      );
    }
  }
  return $feed;
}

function feeds_cision_cision_get_press_releases($url, $id = NULL, $language = NULL) {
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
      $xml = feeds_cision_cision_xml($result->data);

      if ($xml) {
        $xpath = '/Release';		
        $attrs = array();

        if (isset($id)) {
          $attrs[] = '@id = "' . $id . '"';
        }

        foreach ($xml->xpath($xpath) as $result) {
 	  $tdata=(array) $result;
	 
          if ((string) $tdata['@attributes']['LanguageCode'] == 'no') {
            $tdata['@attributes']['LanguageCode'] = 'nn';
          }

          $press_release = array(
            'id' => (string) $tdata['@attributes']['Id'],
            'title' => (string) $tdata['Title'],
            'language' => (string) $tdata['@attributes']['LanguageCode'], 
            'country' => (string) $tdata['@attributes']['CountryCode'],
            'published_date' => strtotime((string) $tdata['@attributes']['PublishDateUtc']),
            'headline' => trim((string) $tdata['Title']),
            'ingress' => trim((string) $tdata['Intro']),
            'main' => trim((string) $tdata['Body']),
            'footer' => trim((string) $tdata['SocialMediaPitch']),
          );  
          foreach ($tdata['Categories'] as $category) {
            $category_name = (string) $category->Code;
            if ($category_name != 'Trade news' && $category_name != 'Corporate' && $category_name != 'PDS' && $category_name != "Trade news PDS") {
              $press_release['categories'][] = str_replace('Trade news ', '', $category_name);
            }

            if (substr_count($category_name, 'Trade news') > 0 && $category_name != 'Corporate') {
              $press_release['type'] = 'Trade releases';
            }

            if ($category_name == 'Corporate') {
              $press_release['type'] = 'Corporate';
            }

            if (substr_count($category_name, 'Trade news') == 0 && $category_name != 'Corporate') {
              $press_release['type'] = 'Press releases';
            }

            if ($category_name == 'PDS' || $category_name == 'Trade news PDS') {
              $press_release['services'][] = 'Product development services';
            }
			
            if($category_name=='Stock exchange releases'){
            
              $press_release['type'] = 'Stock exchange release';
              $press_release['main'] = trim((string) $tdata['HtmlBody']);
              $press_release['main'] .= trim((string) $tdata['HtmlContact']);
              $press_release['main'] .= trim((string) $tdata['HtmlCompanyInformation']);
              $press_release['attachment_title'] = (string) $tdata['Files']->File->FileName;
              $press_release['attachment_url'] = (string) $tdata['Files']->File->Url;
            }
			else {

                $count = count($tdata['Images']->Image);
                if ($count > 0) {
                    $p = 0;
                    $q = 0;
                    for ($i = 0; $i < $count; $i++) {
                        $j = $i + 1;
                        $image_title = (string)$tdata['Images']->Image[$i]->Title;
                        $attachment_titles[$p++] = "{$image_title} - High Quality Image";
                        //$attachment_titles[$p++] = "{$image_title} - Low Quality Image";
                        //$attachment_titles[$p++] = "{$image_title} - Thumbnail Image";
                        $attachment_url[$q++] = (string)$tdata['Images']->Image[$i]->HighQualityUrl;
                        //$attachment_url[$q++] = (string)$tdata['Images']->Image[$i]->LowQualityUrl;
                        //$attachment_url[$q++] = (string)$tdata['Images']->Image[$i]->ThumbnailUrl;
                    }
                    $press_release['attachment_title'] = $attachment_titles;
                    $press_release['attachment_url'] = $attachment_url;
                }
            }

          }
        }
        $press_releases[] = $press_release;
        drupal_alter('feeds_cision_press_releases', $press_releases);
      }
      $cache[$cid] = $press_releases;
    }    
  } 
  return $cache[$cid];
}
