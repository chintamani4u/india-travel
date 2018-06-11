<?php
/**
 * @file
 * Feeds parser class for Slideshare
 */

/**
 * Class definition for Slideshare Parser.
 *
 * Parses RSS or Atom feeds returned from YouTube API like.
 */
class FeedsSlideshareParser extends FeedsParser {

  /**
   * Parse the extra mapping sources provided by this parser.
   *
   * @param $fetcher_result FeedsFetcherResult
   * @param $source FeedsSource
   *
   * @see FeedsParser::parse()
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    //Chintamani : commnenting this code added by pooja and not removed after debugging
    //watchdog("feeds_slideshare", "in parse", array(1 => 'pooja'), WATCHDOG_DEBUG, "");
    //feeds_dbg("logging for feeds--- in parse ");

    $slideshare_feed = $fetcher_result->getRaw();
    $result = new FeedsParserResult();


    /**
    * @see common_syndication_parser_parse()
    */
    if (!defined('LIBXML_VERSION') || (version_compare(phpversion(), '5.1.0', '<'))) {
      @$sxml = simplexml_load_string($slideshare_feed, NULL);
    }
    else {
      @$sxml = simplexml_load_string($slideshare_feed, NULL, LIBXML_NOERROR | LIBXML_NOWARNING | LIBXML_NOCDATA);
    }

    // Got a malformed XML.
    if ($sxml === FALSE || is_null($sxml)) {
      throw new Exception(t('FeedsSlideshareParser: Malformed XML source.'));
    }

    if ($this->isRssFeed($sxml)) {
      $result = $this->parseRss20($sxml, $source, $fetcher_result);

    }
    else {
      throw new Exception(t('FeedsSlideshareParser: Unknown type of feed.'));
    }
		return $result;
  }

  /**
   * Check if given feed object is a RSS feed.
   *
   * @param SimpleXMLElement $sxml
   *
   * @return boolen
   *   TRUE if given SimpleXML object is RSS feed or FALSE
   */
  protected function isRssFeed(SimpleXMLElement $sxml) {
    return $sxml->getName() == 'rss';
  }

  /**
   * Add the extra mapping sources provided by this parser.
   */
  public function getMappingSources() {
    return parent::getMappingSources() + array(
      'feed_title' => array(
        'name' => t('Feed title'),
        'description' => t('The title of the pulled feed.'),
      ),
      'guid' => array(
        'name' => t('GUID'),
      ),
      'slide_id' => array(
        'name' => t('Slide ID'),
        'description' => t('Slide unique ID.'),
      ),
      'title' => array(
        'name' => t('Slide title'),
        'description' => t('Slide title.'),
      ),
      'author' => array(
        'name' => t('Author'),
        'description' => t('Author or uploader of the slide.'),
      ),
      'description' => array(
        'name' => t('Description'),
      ),
      'thumbnail' => array(
        'name' => t('Thumbnail'),
        'description' => t('URL of the thumbnail of the slideshare.'),
      ),
      'tags' => array(
        'name' => t('Tags'),
        'description' => t('This can be imported directly with Taxonomy "tags" vocabularies.'),
      ),
      'watch_page' => array(
        'name' => t('Watch page'),
        'description' => t('The URL of the slideshare.'),
      ),
      'url' => array(
        'name' => t('Slideshare URL'),
        'description' => t('The URL of the slide.'),
      ),
    );
  }

  /**
   *  Display seconds as HH:MM:SS, with leading 0's.
   *
   *  @param $seconds
   *    The number of seconds to display.
   */
  public function secsToTime($seconds) {
    // Number of seconds in an hour.
    $unith =3600;
    // Number of seconds in a minute.
    $unitm =60;

    // '/' given value by num sec in hour... output = HOURS
    $hh = intval($seconds / $unith);

    // Multiply number of hours by seconds, then subtract from given value.
    // Output = REMAINING seconds.
    $ss_remaining = ($seconds - ($hh * 3600));

    // Take remaining seconds and divide by seconds in a min... output = MINS.
    $mm = intval($ss_remaining / $unitm);
    // Multiply number of mins by seconds, then subtract from remaining seconds.
    // Output = REMAINING seconds.
    $ss = ($ss_remaining - ($mm * 60));

    $output = '';

    // If we have any hours, then prepend that to our output.
    if ($hh) {
      $output .= "$hh:";
    }

    // Create a safe-for-output MM:SS.
    $output .= check_plain(sprintf($hh ? "%02d:%02d" : "%d:%02d", $mm, $ss));

    return $output;
  }


  /**
   * Parse RSS 2.0 feed
   *
   * @param SimpleXMLElement $sxml
   * @param FeedsFetcherResult $fetcher_result
   * @param FeedsSource $source
   */
  private function parseRss20(SimpleXMLElement $sxml, FeedsSource $source, FeedsFetcherResult $fetcher_result) {

    // XML was parsed successfully, so we can begin to process items
    $result = new FeedsParserResult();
    $fetcher_result->title = (string) $sxml->channel->title;
    $fetcher_result->description = (string) $sxml->channel->description;
    $fetcher_result->link = (string) $sxml->channel->link;
    $feed_title = (string) $sxml->channel->title;

    // Iterate over entries in feed
    // TODO: This is not DRY - extract things which is same in Atom and RSS20 to common method
    foreach ($sxml->xpath('//item') as $entry) {
      // Get nodes in media: namespace for media information
      $media = $entry->children('http://search.yahoo.com/mrss/');

      // Get slide player URL
      // <media:content><media:player url="http://www.slideshare.net/TietoCorporation/tietos-strategy-20122016"/>
      $attrs = $media->content->player->attributes();
      $player = (string) $attrs['url'];

      // <media:thumbnail url="//cdn.slidesharecdn.com/ss_thumbnails/tietostrategy2016eng-121003052527-phpapp01-thumbnail-2.jpg?1349259969" height="90" width="120"/>
      $attrs = $media->content->thumbnail[0]->attributes();
      $thumbnail = (string) $attrs['url'];

      //extract slideshow id from <slideshare:embed> tag
      $slideshare = $entry->children('http://slideshare.net/api/1');
      $embed_code = (string) $slideshare->embed;

      $pattern = '/iframe\s*src="(\S*)"/';
      $embed_code = trim($embed_code);
      preg_match($pattern, $embed_code, $matches);
      $embed_url = $matches[1];
      $id = end(explode('/',  $embed_url));

      $item = array(
        'feed_title' => $feed_title,
        'guid' => (string) $entry->guid,
        'slide_id' => $id,
        'url' => '//slideshare.net/slideshow/embed_code/' . $id,
        'watch_page' => '//slideshare.net/slideshow/embed_code/' . $id,
        'title' => html_entity_decode((string) $media->content->title),
        'author' => (string) $entry->author,
        'description' => html_entity_decode((string) $media->content->description),
        'thumbnail' => $thumbnail,
        'tags' => explode(',', (string) $media->content->keywords),
        'embedded_player' => $player,
      );

      //dd($item);
      // Populate the FeedsFetcherResult object with the parsed results.
      $result->items[] = $item;
    }
    return $result;
  }

}
