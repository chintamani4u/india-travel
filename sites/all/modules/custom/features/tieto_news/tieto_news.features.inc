<?php
/**
 * @file
 * tieto_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tieto_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tieto_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tieto_news_node_info() {
  $items = array(
    'cision_stock_exchange_releases_i' => array(
      'name' => t('Cision Stock exchange releases import'),
      'base' => 'node_content',
      'description' => t('Cision Stock exchange releases import as per TIET-2529'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'facebook_posts' => array(
      'name' => t('Facebook Posts'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tieto_cision_feed' => array(
      'name' => t('Cision press releases import'),
      'base' => 'node_content',
      'description' => t('This content type is for system administrators to import news articles from Cision API.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tieto_nasdaq_feed' => array(
      'name' => t('Nasdaq Feed'),
      'base' => 'node_content',
      'description' => t('This content type is for system administrators to import news articles from NASDAQ API.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('<strong>No need to publish this content.</strong>
This content type is for system administrators to import news articles from nasdaq API.
<h2>Name</h2>
Enter short and descriptive name for this importer...
<h2>Language</h2>
Should not affect the imported news articles.
<h2>News Type</h2>
Select the term "Stock Exchange Release". If the option is not available, you should first create the term in "News Types" vocabulary. <strong>This news type will be set to all imported news articles.</strong>
<h2>Feed URL\'s</h2>
<dl>
<dt>English</dt>
<dd>http://newsclient.globenewswire.com/news-remote/query2.action?limit=5&company=Tieto&countResults=false&includeText=true&showCorrections=true&displayLanguage=en&language=en&showAttachments=true</dd>
<dt>Finnish</dt>
<dd>http://newsclient.globenewswire.com/news-remote/query2.action?limit=5&company=Tieto&countResults=false&includeText=true&showCorrections=true&displayLanguage=fi&language=fi&showAttachments=true</dd>
<dt>Swedish</dt>
<dd>http://newsclient.globenewswire.com/news-remote/query2.action?limit=5&company=Tieto&countResults=false&includeText=true&showCorrections=true&displayLanguage=sv&language=sv&showAttachments=true</dd>
</dl>
'),
    ),
    'tieto_news_article' => array(
      'name' => t('News page'),
      'base' => 'node_content',
      'description' => t('Create a web news item. When an editor creates a news page, the category is always “other news”.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
    'tieto_news_context' => array(
      'name' => t('News list /feed list in the selected context'),
      'base' => 'node_content',
      'description' => t('Selected by Industry or Section.'),
      'has_title' => '1',
      'title_label' => t('H1 headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
