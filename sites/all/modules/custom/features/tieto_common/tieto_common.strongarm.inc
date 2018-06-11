<?php
/**
 * @file
 * tieto_common.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_common_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '600';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_jquery_selector';
  $strongarm->value = '.views-exposed-form select:visible, .field-type-taxonomy-term-reference select:visible';
  $export['chosen_jquery_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum';
  $strongarm->value = '0';
  $export['chosen_minimum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_consentmodel';
  $strongarm->value = 'implicit';
  $export['cookiecontrol_consentmodel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_countries';
  $strongarm->value = '';
  $export['cookiecontrol_countries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_exclude_paths';
  $strongarm->value = '';
  $export['cookiecontrol_exclude_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_fulltext';
  $strongarm->value = '<p>Some cookies on this site are essential, and the site won\'t work as expected without them. These cookies are set when you submit a form, login or interact with the site by doing something that goes beyond clicking on simple links.</p><p>We also use some non-essential cookies to anonymously track visitors or enhance your experience of the site. If you\'re not happy with this, we won\'t set these cookies but some nice features of the site may be unavailable.</p>';
  $export['cookiecontrol_fulltext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_hideonaccept';
  $strongarm->value = 0;
  $export['cookiecontrol_hideonaccept'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_onaccept';
  $strongarm->value = '';
  $export['cookiecontrol_onaccept'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_position';
  $strongarm->value = 'right';
  $export['cookiecontrol_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_privacynode';
  $strongarm->value = '';
  $export['cookiecontrol_privacynode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_shape';
  $strongarm->value = 'triangle';
  $export['cookiecontrol_shape'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_startopen';
  $strongarm->value = 1;
  $export['cookiecontrol_startopen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_text';
  $strongarm->value = '<p>This site uses cookies to store information on your computer.</p>';
  $export['cookiecontrol_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_theme';
  $strongarm->value = 'light';
  $export['cookiecontrol_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cookiecontrol_timeout';
  $strongarm->value = '60';
  $export['cookiecontrol_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '0';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_use_iso8601';
  $strongarm->value = 1;
  $export['date_api_use_iso8601'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tieto_date';
  $strongarm->value = 'd.m.Y';
  $export['date_format_tieto_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tieto_medium_date';
  $strongarm->value = 'd F Y';
  $export['date_format_tieto_medium_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tieto_month';
  $strongarm->value = 'F';
  $export['date_format_tieto_month'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tieto_short_date';
  $strongarm->value = 'd M';
  $export['date_format_tieto_short_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tieto_short_date_full';
  $strongarm->value = 'd M Y';
  $export['date_format_tieto_short_date_full'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_tieto_short_date_time';
  $strongarm->value = 'd M H:i';
  $export['date_format_tieto_short_date_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_default_rules';
  $strongarm->value = array(
    '*/3 * * * *' => 'Every 3 minutes',
    '*/15 * * * *' => 'Every 15 minutes',
    '*/30 * * * *' => 'Every 30 minutes',
    '0 * * * *' => 'Every hour',
    '0 */6 * * *' => 'Every 6 hours',
    '4 0 * * *' => 'Once a day',
    '4 0 * * 0' => 'Once a week',
    '4 0 1 * *' => 'Once a month',
  );
  $export['elysia_cron_default_rules'] = $strongarm;

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
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_en';
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
    'popup_link' => '/privacy-statement',
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
  $export['eu_cookie_compliance_en'] = $strongarm;

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'floating_blocks';
  $strongarm->value = array();
  $export['floating_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '10800';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_body';
  $strongarm->value = '!username,

Your password will expire in less than !days_left day(s)

Please log in at !login_uri to change your password.

After logging in, edit your password here !edit_uri.

If you don\'t remember your current password, request a new at !login_uri/password.

Best Regards,
The Tieto Drupal Team';
  $export['password_policy_warning_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_subject';
  $strongarm->value = 'Password expiration warning for !username at !uri_brief';
  $export['password_policy_warning_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_length';
  $strongarm->value = '255';
  $export['pathauto_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_custom_search_path';
  $strongarm->value = 'search/node/@keys';
  $export['search404_custom_search_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_do_custom_search';
  $strongarm->value = 1;
  $export['search404_do_custom_search'] = $strongarm;

  return $export;
}
