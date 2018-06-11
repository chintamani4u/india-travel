<?php
/**
 * @file
 * Admin settings page for the Marketo Munchkin module.
 */

/**
 * drupal_get_form() form array.
 */
function marketo_munchkin_admin_settings_form($form, &$form_state) {
  $form = array();

  $options = array();

  foreach(language_list() as $key => $val) {

    $options[$val->language] = $val->name;

    $form['munchkin_codes_' . $val->language] = array(
      '#type' => 'fieldset',
      '#title' => t('Code for ' . $val->name),
      '#collapsible' => true,
      '#collapsed' => true,
    );

    $form['munchkin_codes_' . $val->language]['munchkin_code_' . $val->language] = array(
      '#type' => 'textfield',
      '#title' => 'Munchkin code',
      '#maxlength' => 255,
      '#description' => t("The code provided by Marketo.com for the Munchkin tracking service.  Should be something like '123-ABC-123'.  Only paste in the bare code with the dashes."),
      '#default_value' => variable_get('munchkin_code_' . $val->language, ''),
    );

    $form['munchkin_codes_' . $val->language]['munchkin_url_' . $val->language] = array(
      '#type' => 'textfield',
      '#title' => 'Munchkin URL',
      '#maxlength' => 255,
      '#description' => t("The full URL to the JS file necessary for the Marketo.com tracking service.  The default should suffice.  The leading 'http://' or 'https://' should be removed."),
      '#default_value' => variable_get('munchkin_url_' . $val->language, 'munchkin.marketo.net/munchkin.js'),
    );
  
    $form['munchkin_codes_' . $val->language]['munchkin_secret_key_' . $val->language] = array(
      '#type' => 'textfield',
      '#title' => 'Munchkin Secret Key',
      '#maxlength' => 255,
      '#description' => t("The secret private key you selected when enabling API tracking at Marketo.com for the Munchkin tracking service.  Should be a string with no spaces.  Only paste in the bare text."),
      '#default_value' => variable_get('munchkin_secret_key_' . $val->language, ''),
      '#required' => 0,
    );
  }

  $form['munchkin_sites'] = array(
      '#type' => 'checkboxes',
      '#options' => $options,
      '#title' => t('Countries'),
      '#description' => t('Select for which sites the tracking code should be enabled'),
      '#default_value' => variable_get('munchkin_sites'),
  );

  return system_settings_form($form);
}
