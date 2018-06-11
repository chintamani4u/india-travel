<?php
/**
 * @file
 * tieto_webform.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_webform_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_add_captcha_description';
  $strongarm->value = 1;
  $export['captcha_add_captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_administration_mode';
  $strongarm->value = 0;
  $export['captcha_administration_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge';
  $strongarm->value = 'recaptcha/reCAPTCHA';
  $export['captcha_default_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge_on_nonlisted_forms';
  $strongarm->value = 1;
  $export['captcha_default_challenge_on_nonlisted_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_validation';
  $strongarm->value = '0';
  $export['captcha_default_validation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_cs';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_cs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_da';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_de';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_de'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_de-at';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_de-at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_de-DE';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_de-DE'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_en';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_en-in';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_en-in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_et';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_et'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_fi';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_fi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_fil';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_fil'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_lt';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_lt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_lv';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_lv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_nl';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_nl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_nn';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_nn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_pl';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_pl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_ru';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_ru'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_sv';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_sv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_zh-hans';
  $strongarm->value = 'We use CAPTCHA test to tell humans and computers apart. Please mark the checkbox to submit the form.';
  $export['captcha_description_zh-hans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_enable_stats';
  $strongarm->value = 0;
  $export['captcha_enable_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_log_wrong_responses';
  $strongarm->value = 0;
  $export['captcha_log_wrong_responses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_persistence';
  $strongarm->value = '0';
  $export['captcha_persistence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_placement_map_cache';
  $strongarm->value = array(
    'webform_client_form_63046' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_19560' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_4068' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_31746' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_114131' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_4177' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21421' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_80276' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_4075' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21441' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_4078' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_57786' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_20569' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_20548' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_68576' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21571' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21406' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_63716' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'tieto_news_subscription_form' => array(
      'path' => array(),
      'key' => 'submit',
      'weight' => NULL,
    ),
    'tieto_times_form' => NULL,
    'webform_client_form_24261' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21306' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_4152' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'tieto_news_subscription_form_new' => array(
      'path' => array(),
      'key' => 'submit',
      'weight' => NULL,
    ),
    'webform_client_form_21921' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_47556' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21506' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21181' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21516' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21471' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_22016' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21316' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21376' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_24276' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_52676' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_77291' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21481' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21916' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_55271' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_41391' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_29956' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_43506' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_20674' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_32656' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_48006' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21321' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_20673' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_56001' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'user_pass_reset' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 99,
    ),
    'webform_client_form_49981' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_95797' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21531' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_52301' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_54381' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21576' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_47081' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_72381' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21521' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21486' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_20676' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21986' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_47486' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_4209' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_59346' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21186' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
    'webform_client_form_21436' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 999,
    ),
  );
  $export['captcha_placement_map_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_webform';
  $strongarm->value = '1';
  $export['i18n_node_extended_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_webform';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_webform';
  $strongarm->value = '1';
  $export['language_content_type_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_webform';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-austria',
    2 => 'menu-china',
    3 => 'menu-czech',
    4 => 'menu-denmark',
    5 => 'devel',
    6 => 'menu-estonia',
    7 => 'menu-finland',
    8 => 'menu-germany',
    9 => 'menu-india',
    10 => 'menu-italy',
    11 => 'menu-latvia',
    12 => 'menu-lithuania',
    13 => 'menu-malaysia',
    14 => 'management',
    15 => 'navigation',
    16 => 'menu-metherlands',
    17 => 'menu-norway',
    18 => 'menu-philippines',
    19 => 'menu-poland',
    20 => 'menu-russia',
    21 => 'menu-spain',
    22 => 'menu-sweden',
    23 => 'menu-tieto-worldwide',
    24 => 'menu-uk',
    25 => 'menu-usa',
  );
  $export['menu_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_webform';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_webform';
  $strongarm->value = '1';
  $export['node_preview_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_noscript';
  $strongarm->value = 0;
  $export['recaptcha_noscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_secret_key';
  $strongarm->value = '6LcQYR4TAAAAANuV0Y7bBFg2GfkVs3m7v5Krs8IM';
  $export['recaptcha_secret_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_site_key';
  $strongarm->value = '6LcQYR4TAAAAABUUfsLStDgTJ-xZkWBpBT-s9YvZ';
  $export['recaptcha_site_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_tabindex';
  $strongarm->value = '0';
  $export['recaptcha_tabindex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_theme';
  $strongarm->value = 'light';
  $export['recaptcha_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_type';
  $strongarm->value = 'image';
  $export['recaptcha_type'] = $strongarm;

  return $export;
}
