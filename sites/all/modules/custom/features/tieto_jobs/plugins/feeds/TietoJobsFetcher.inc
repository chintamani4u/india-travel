<?php

class TietoJobsFetcher extends FeedsFetcher {
  /**
   * @var array
   */
  /**
   * Implements FeedsFetcher::fetch().
   *
   * Fetch content from a source and return it.
   *
   * Every class that extends FeedsFetcher must implement this method.
   *
   * @param $source
   *   Source value as entered by user through sourceForm().
   *
   * @return
   *   A FeedsFetcherResult object.
   */
  public function fetch(FeedsSource $source) {
    $url = $this->getTietoJobsSourceURL();

    $options = array(
      'accept_invalid_cert' => $this->config['accept_invalid_cert'],
      'cache_expire' => strtotime('+1 day', REQUEST_TIME),
    );
    return new TietoJobsFetcherResult($url, $options);
  }

  public function __construct($id) {
    parent::__construct($id);
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'accept_invalid_cert' => FALSE,
      'base_url' => 'https://jobs.tieto.com/vacancies/rss',
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['accept_invalid_cert'] = array(
      '#type' => 'checkbox',
      '#title' => 'Accept invalid cert',
      '#description' => 'Check this if cURL is not configured properly in your environment =).',
      '#default_value' => $this->config['accept_invalid_cert'],
    );
    $form['base_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Tieto Jobs base URL',
      '#description' => 'Enter a feed base URL.',
      '#default_value' => $this->config['base_url'],
      '#maxlength' => NULL,
      '#required' => TRUE,
    );

    $url = $this->getTietoJobsSourceURL();

    $form['current_url'] = array(
      '#type' => 'item',
      '#title' => t('Current URL'),
      '#markup' => l($url, $url, array('external' => TRUE)),
      '#description' => 'Click this to test response time, file size and status code.',
    );
    return $form;
  }

  /**
   * Overrides parent::clear().
   *
   * Clear all caches for results for given source.
   *
   * @param FeedsSource $source
   *   Source information for this expiry. Implementers can choose to only clear
   *   caches pertaining to this source.
   */
  public function clear(FeedsSource $source) {
    $url = $this->getTietoJobsSourceURL($source);
    feeds_include_library('http_request.inc', 'http_request');
    http_request_clear_cache($url);
  }

  /**
   * Override parent::configFormValidate().
   */
  public function configFormValidate(&$values) {
    $values['base_url'] = rtrim(trim($values['base_url']), '/');

    if (!feeds_valid_url($values['base_url'], TRUE)) {
      $form_key = 'feeds][' . get_class($this) . '][base_url';
      form_set_error($form_key, t('The URL %source is invalid.', array(
        '%source' => $values['base_url'],
      )));
    }
  }

  protected function getTietoJobsSourceURL() {
    return url($this->config['base_url'], array(
      'external' => TRUE,
    ));
  }
}

/**
 * Result of FeedsHTTPFetcher::fetch().
 */
class TietoJobsFetcherResult extends FeedsFetcherResult {

  protected $url;
  protected $accept_invalid_cert;
  protected $cache_expire;

  /**
   * Constructor.
   */
  public function __construct($url = NULL, $options = array()) {
    $this->url = $url;
    $this->accept_invalid_cert = !empty($options['accept_invalid_cert']);
    $this->cache_expire = isset($options['cache_expire']) ? $options['cache_expire'] : CACHE_PERMANENT;
    parent::__construct('');
  }

  /**
   * Overrides FeedsFetcherResult::getRaw();
   */
  public function getRaw() {
    feeds_include_library('http_request.inc', 'http_request');
    $result = http_request_get($this->url, NULL, NULL, $this->accept_invalid_cert);
    if (!in_array($result->code, array(200, 201, 202, 203, 204, 205, 206))) {
      throw new Exception(t('Download of @url failed with code !code.', array('@url' => $this->url, '!code' => $result->code)));
    }
    $cid = 'feeds_http_download_' . md5($this->url);
    if (($cache = cache_get($cid))
      && $this->cache_expire != $cache->expire
      && $cache->created == REQUEST_TIME) {
      // If we've just cached that response, change ttl.
      cache_set($cid, $cache->data, 'cache', $this->cache_expire);
    }
    return $this->sanitizeRaw($result->data);
  }
}