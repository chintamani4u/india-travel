<?php

/**
 * Implements hook_feeds_after_import().
 * 
 * @param FeedsSource $source
 * 
 * Clear page and block caches after importing new stock exchange releases.
 */
function tieto_news_feeds_after_import(FeedsSource $source) {
  if ($source->importer->id == 'tieto_nasdaq_importer' && $source->state(FEEDS_PROCESS)->created > 0) {
    cache_clear_all();
  }
}
