<?php
/**
 * @file
 * This file documents all hooks for marketo_tracker.module
 */

/**
 * This hook is executed after marketo_tracker determines that there is Lead
 * data to be submitted. Defines MunchkinFunction data items to be used for
 * all Lead data submissions.
 *
 * @param array $munchkin_data
 *   An array of key => value pairs specific to defined and custom Marketo
 *   field types as they relate to Leads.
 *
 * @see marketo_tracker_page_alter()
 */
function hook_marketo_create_data(&$munchkin_data) {

}

/**
 * This hook is executed after marketo_tracker determines that there is Lead
 * data to be submitted. Define MunchkinFunction data items to be used for
 * all Lead data submissions by data input type.
 *
 * Todo: Better Description -- This hook enables modules to...
 *
 * @param array $munchkin_data
 *   An array of key => value pairs specific to defined and custom Marketo
 *   field types as they relate to Leads.
 *
 *  $munchkin_data = array(
 *    'Email' => $email,
 *    'FirstName' => $fn,
 *    'LastName' => $ln,
 *    'LeadComments' => $body,
 *    'Country' => $region,
 *    'State' => $state,
 *    'Company' => $company,
 *    'Title' => $job_title,
 *    'LeadSource' => 'Website',
 *    'Web_Lead_Source__c' => 'Custom Demos Page',
 *    'Web_Lead_Source_Recent__c' => 'Custom Demos Page',
 *    'WebFormLead' => 'TRUE',
 *    'SFGA' => '00D300000000Hxw',
 *  );
 *
 * @see marketo_tracker_page_alter()
 */
function hook_marketo_create_TYPE_data(&$munchkin_data) {

}

/**
 * This hook is executed after marketo_tracker determines that there is Lead
 * data to be submitted. Alter MunchkinFunction data items to be used for
 * all Lead data submissions by data input type.
 *
 * @param array $munchkin_data
 *   An array of key => value pairs specific to defined and custom Marketo
 *   field types as they relate to Leads.
 *
 * @see marketo_tracker_page_alter()
 */
function hook_marketo_create_TYPE_data_alter(&$munchkin_data) {

}

/**
 * This hook is executed when Lead data is being formatted into HTML to be
 * placed after the Munchkin Function.
 *
 * @param array $post_script
 *   An array of valid HTML markup strings.
 *
 * @see _marketo_tracker_format_munchkin_function()
 */
function hook_marketo_post_script(&$post_script) {

}
