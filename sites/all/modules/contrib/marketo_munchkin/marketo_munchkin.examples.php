<?php
/**
 * @file
 * Example hook implementations for the Marketo Tracker module.
 */

/**
* @Function
* Implements hook_user_login().
*/
function MYMODULE_user_login(&$edit, $account) {
  $munchkin_secret_key = variable_get('munchkin_secret_key', '');
  // Make sure the secret key is set in the configs before setting session data.
  // Exclude admin the admin from being tracked.
  if (!empty($munchkin_secret_key) && $account->uid > 1) {
    // Submission type used to create Lead data array.
    $_SESSION['marketo-munchkin-submit'] = 'user_login';
    // Email address to link the Lead data to.
    $_SESSION['marketo-munchkin-data-user_email'] = $account->mail;
  }
  elseif ($account->uid > 1)  {
    watchdog('Marketo Munchkin', "The Marketo Munchkin secret key has not been set, please configure the module in order for the module to work correctly.", array(), WATCHDOG_ERROR, l('Settings', 'admin/config/search/marketo-munchkin'));
  }
}

/**
 * @Function
 * Implements hook_marketo_create_data().
 */
function MYMODULE_marketo_create_data(&$munchkin_data) {
  $munchkin_data['FirstName'] = 'Andrew';
}

/**
 * @Function
 * Implements hook_marketo_create_TYPE_data().
 */
function MYMODULE_marketo_create_user_login_data(&$munchkin_data) {
  $munchkin_data['LastName'] = 'Page';
}

/**
 * @Function
 * Implements hook_marketo_create_TYPE_data_alter().
 */
function MYMODULE_marketo_create_user_login_data_alter(&$munchkin_data) {
  $munchkin_data['Title'] = 'Tech Guy';
}

/**
 * @Function
 * Implements hook_marketo_post_script().
 */
function MYMODULE_marketo_post_script(&$post_script) {
  $post_script['salesforce'] = '<script type="text/javascript" src="https://lct.salesforce.com/sfga.js"></script><script type="text/javascript">__sfga();</script>';
}
