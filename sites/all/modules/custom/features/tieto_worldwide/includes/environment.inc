<?php

/**
 * Detect tieto environment.
 *
 * https://library.acquia.com/articles/environment-variables-acquia-cloud
 */
function tieto_worldwide_environment_get_env() {
  return isset($_ENV['AH_SITE_ENVIRONMENT']) ? $_ENV['AH_SITE_ENVIRONMENT'] : 'local';
}

function tieto_worldwide_environment_get_domains($env = NULL) {
  if (!isset($env)) {
    $env = tieto_worldwide_environment_get_env();
  }
  $s = _tieto_worldwide_enviroment_settings();
  return isset($s->domains[$env]) ? $s->domains[$env] : NULL;
}

function _tieto_worldwide_enviroment_settings() {
  $settings = new stdClass;
  $settings->domains = array();
  $settings->domains['prod'] = array(
    'cs' => 'www.tieto.cz',
    'da' => 'www.tieto.dk',
    'de' => 'www.tieto.de',
    'de-at' => 'www.tieto.at',
    'en' => 'www.tieto.com',
    'en-in' => 'www.tieto.in',
    'et' => 'www.tieto.ee',
    'fi' => 'www.tieto.fi',
    'fil' => 'www.tieto.ph',
    'lt' => 'www.tieto.lt',
    'lv' => 'www.tieto.lv',
    'nl' => 'www.tieto.nl',
    'nn' => 'www.tieto.no',
    'pl' => 'www.tieto.pl',
    'ru' => 'www.tieto.ru',
    'sv' => 'www.tieto.se',
    'zh-hans' => 'www.tieto.cn',
  );
  $settings->domains['test'] = array(
    'cs' => 'cz.tietostage.tieto.com',
    'da' => 'dk.tietostage.tieto.com',
    'de' => 'de.tietostage.tieto.com',
    'de-at' => 'at.tietostage.tieto.com',
    'en' => 'en.tietostage.tieto.com',
    'en-in' => 'in.tietostage.tieto.com',
    'et' => 'ee.tietostage.tieto.com',
    'fi' => 'fi.tietostage.tieto.com',
    'fil' => 'ph.tietostage.tieto.com',
    'lt' => 'lt.tietostage.tieto.com',
    'lv' => 'lv.tietostage.tieto.com',
    'nl' => 'nl.tietostage.tieto.com',
    'nn' => 'no.tietostage.tieto.com',
    'pl' => 'pl.tietostage.tieto.com',
    'ru' => 'ru.tietostage.tieto.com',
    'sv' => 'se.tietostage.tieto.com',
    'zh-hans' => 'cn.tietostage.tieto.com',
  );
  $settings->domains['dev'] = array(
    'cs' => 'cz.tietodev.tieto.com',
    'da' => 'dk.tietodev.tieto.com',
    'de' => 'de.tietodev.tieto.com',
    'de-at' => 'at.tietodev.tieto.com',
    'en' => 'en.tietodev.tieto.com',
    'en-in' => 'in.tietodev.tieto.com',
    'et' => 'ee.tietodev.tieto.com',
    'fi' => 'fi.tietodev.tieto.com',
    'fil' => 'ph.tietodev.tieto.com',
    'lt' => 'lt.tietodev.tieto.com',
    'lv' => 'lv.tietodev.tieto.com',
    'nl' => 'nl.tietodev.tieto.com',
    'nn' => 'no.tietodev.tieto.com',
    'pl' => 'pl.tietodev.tieto.com',
    'ru' => 'ru.tietodev.tieto.com',
    'sv' => 'se.tietodev.tieto.com',
    'zh-hans' => 'cn.tietodev.tieto.com',
  );

  $settings->domains['local'] = array(
    'cs' => 'cz',
    'da' => 'dk',
    'de' => 'de',
    'de-at' => 'at',
    'en' => 'en',
    'en-in' => 'in',
    'et' => 'ee',
    'fi' => 'fi',
//    'fil' => 'ph',
    'lt' => 'lt',
    'lv' => 'lv',
    'nl' => 'nl',
    'nn' => 'no',
    'pl' => 'pl',
    'ru' => 'ru',
    'sv' => 'se',
    'zh-hans' => 'cn',
  );
  $local_domain = variable_get('tieto_local_host', 'tietolocal.dev');
  foreach ($settings->domains['local'] as $language => $prefix) {
    $settings->domains['local'][$language] = $prefix . '.' . $local_domain;
  }
  return $settings;
}
