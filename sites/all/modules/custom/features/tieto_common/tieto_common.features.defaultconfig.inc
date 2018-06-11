<?php
/**
 * @file
 * tieto_common.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tieto_common_defaultconfig_features() {
  return array(
    'tieto_common' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function tieto_common_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_cs';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 1,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_cs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_da';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_de';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_de'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_de-at';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_de-at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_de-DE';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_de-DE'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_en-in';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_en-in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_et';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_et'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_fi';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_fi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_fil';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_fil'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_lt';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_lt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_lv';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_lv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_nl';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_nl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_nn';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_nn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_pl';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_pl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_ru';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_ru'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_sv';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_sv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_zh-hans';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Learn more',
    'popup_info' => array(
      'value' => '<p>Cookies help us deliver our services. By using our services, you agree to our use of cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<p>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'panopoly_html_text',
    ),
    'popup_link' => 'http://www.tieto.com/privacy-statement',
    'popup_link_new_window' => 0,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_zh-hans'] = $strongarm;

  return $export;
}
