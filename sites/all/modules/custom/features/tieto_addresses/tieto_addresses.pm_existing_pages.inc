<?php
/**
 * @file
 * tieto_addresses.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function tieto_addresses_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'page_addresses';
  $pm_existing_page->label = 'Page Addresses';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'addresses';
  $export['page_addresses'] = $pm_existing_page;

  return $export;
}
