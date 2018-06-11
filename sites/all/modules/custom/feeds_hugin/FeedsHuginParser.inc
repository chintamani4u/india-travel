<?php

/**
 * @file
 * Contains FeedsHuginParser.
 */

/**
 * Class definition for Hugin Parser.
 *
 * Parses hexML feeds.
 */
class FeedsHuginParser extends FeedsParser {

  /**
   * Override FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    ctools_include('hugin', 'feeds_hugin');
    $feed = feeds_hugin_hugin_parse_feed($fetcher_result->getRaw());

    $result = new FeedsParserResult();
    if ($feed) {
      $result->title = $feed['title'];
      $result->description = $feed['description'];
  
      foreach ($feed['press_releases'] as $item) {
        $result->items[] = $item;
      }
    }
    return $result;
  }

  /**
   * Override parent::getMappingSources() to provide data from press release hexML.
   */
  public function getMappingSources() {
    $sources = array(
      'id' => array(
        'name' => t('Hugin ID'),
        'description' => t('Identifier attribute of the press release.')
      ),
      'language' => array(
        'name' => t('Hugin Language'),
        'description' => t('Language attribute of the press release.')
      ),
      'location_href' => array(
        'name' => t('Item URL (location)'),
        'description' => t('URL of the press release hexML.'),
      ),
      /*
      // This might not be usable as-is.
      'press_release:categories' => array(
        'name' => t('Categories'),
        'description' => t('An array of categories that have been assigned to the press release.'),
      ),
      */
      'press_release:headline' => array(
        'name' => t('Headline'),
        'description' => t('Headline of the press release.'),
      ),
      'press_release:published_date' => array(
        'name' => t('Published date'),
        'description' => t('Published date of the feed item.'),
      ),
      'press_release:language' => array(
        'name' => t('Language'),
        'description' => t('Language code of the press release.'),
      ),
      'press_release:ingress' => array(
        'name' => t('Ingress'),
        'description' => t('Ingress of the press release.'),
      ),
      'press_release:main' => array(
        'name' => t('Main'),
        'description' => t('Body of the press release.'),
      ),
      'press_release:footer' => array(
        'name' => t('Footer'),
        'description' => t('Footer of the press release.'),
      ),
    );

    drupal_alter('feeds_hugin_sources', $sources);

    return $sources + parent::getMappingSources();
  }

  protected function getPressRelease($item) {
    ctools_include('hugin', 'feeds_hugin');
    $press_releases = feeds_hugin_hugin_get_press_releases(
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
   * Override parent::getSourceElement() to fetch data from press release hexML.
   */
  public function getSourceElement(FeedsSource $source, FeedsParserResult $result, $element_key) {
    $value = NULL;

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
