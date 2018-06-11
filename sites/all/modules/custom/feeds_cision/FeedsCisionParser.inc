<?php

/**
 * @file
 * Contains FeedsCisionParser.
 */

/**
 * Class definition for cision Parser.
 *
 * Parses XML feeds.
 */
class FeedsCisionParser extends FeedsParser {

  /**
   * Override FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    ctools_include('cision', 'feeds_cision');
    $feed = feeds_cision_cision_parse_feed($fetcher_result->getRaw());
    $result = new FeedsParserResult();
    if ($feed) {
      $result->title = $feed['title'];
      $result->description = $feed['description'];
      $result->releaseid = $feed;
      foreach ($feed['press_releases'] as $item) {
        $result->items[] = $item;
      }
    }
	return $result;
  }

  /**
   * Override parent::getMappingSources() to provide data from press release XML.
   */
  public function getMappingSources() {
    $sources = array(
      'releaseid' => array(
        'name' => t('Cision ID'),
        'description' => t('Identifier attribute of the press release.')
      ),
      'language' => array(
        'name' => t('Cision Language'),
        'description' => t('Language attribute of the press release.')
      ),
      'location_href' => array(
        'name' => t('Cision Item URL (location)'),
        'description' => t('URL of the press release XML.'),
      ),
      	  
      // This might not be usable as-is.
      'press_release:categories' => array(
        'name' => t('Cision Categories'),
        'description' => t('An array of categories that have been assigned to the press release.'),
      ),
      'press_release:services' => array(
        'name' => t('Cision Services'),
        'description' => t('An array of services that have been assigned to the press release.'),
      ),
      'press_release:type' => array(
        'name' => t('Cision News Type'),
        'description' => t('Type of News.'),
      ),
       
      'press_release:headline' => array(
        'name' => t('Cision Headline'),
        'description' => t('Headline of the press release.'),
      ),
      'press_release:published_date' => array(
        'name' => t('Cision Published date'),
        'description' => t('Published date of the feed item.'),
      ),
      'press_release:language' => array(
        'name' => t('Language'),
        'description' => t('Language code of the press release.'),
      ),
      'press_release:ingress' => array(
        'name' => t('Cision Ingress'),
        'description' => t('Ingress of the press release.'),
      ),
      'press_release:main' => array(
        'name' => t('Cision Description'),
        'description' => t('Body of the press release.'),
      ),
      
       'press_release:attachment_title' => array(
        'name' => t('Cision Attachment Title'),
        'description' => t('Attachment Title.'),
      ),
      
      'press_release:attachment_url' => array(
        'name' => t('Cision Attachment URL'),
        'description' => t('URL to attachment'),
      ),
      
      'press_release:footer' => array(
        'name' => t('Cision Footer'),
        'description' => t('Footer of the press release.'),
      ),
	  
    );
    drupal_alter('feeds_cision_sources', $sources);   
    return $sources + parent::getMappingSources();
  }

  protected function getPressRelease($item) {
    ctools_include('cision', 'feeds_cision');
    $press_releases = feeds_cision_cision_get_press_releases(
        $item['location_href'],
        $item['id'],
        $item['language']
    );
    if (isset($press_releases[0])) {
      return $press_releases[0];    
    }
    return FALSE;
  }

  /**
   * Override parent::getSourceElement() to fetch data from press release XML.
   */
  public function getSourceElement(FeedsSource $source, FeedsParserResult $result, $element_key) {
    $item = $result->currentItem(); 
    if (!isset($item[$element_key]) && strpos($element_key, 'press_release:') === 0) {
      $press_release = $this->getPressRelease($item);
      if ($press_release === FALSE) {
        // Exceptions are logged by FeedsProcessor::process().
        throw new Exception('Unable to fetch press release.');
      }
      list( , $key) = explode(':', $element_key, 2);
      if (isset($press_release[$key])) {
        $value = $press_release[$key];
      }
    }
    if (!isset($value)) {
      $value = parent::getSourceElement($source, $result, $element_key);
    }
    return $value; 
  }

}
