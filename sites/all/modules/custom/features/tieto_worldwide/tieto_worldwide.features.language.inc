<?php
/**
 * @file
 * tieto_worldwide.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function tieto_worldwide_locale_default_languages() {
  $languages = array();

  // Exported language: cs.
  $languages['cs'] = array(
    'language' => 'cs',
    'name' => 'Czech Republic',
    'native' => 'Čeština',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => 'www.tieto.cz',
    'prefix' => '',
    'weight' => -4,
  );
  // Exported language: da.
  $languages['da'] = array(
    'language' => 'da',
    'name' => 'Denmark',
    'native' => 'Dansk',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.dk',
    'prefix' => '',
    'weight' => -3,
  );
  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'Germany',
    'native' => 'Deutsch',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.de',
    'prefix' => '',
    'weight' => -2,
  );
  // Exported language: de-at.
  $languages['de-at'] = array(
    'language' => 'de-at',
    'name' => 'Austria',
    'native' => 'Austria',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => 'www.tieto.at',
    'prefix' => '',
    'weight' => -7,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => '.com international',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => 'www.tieto.com',
    'prefix' => '',
    'weight' => -10,
  );
  // Exported language: en-in.
  $languages['en-in'] = array(
    'language' => 'en-in',
    'name' => 'India',
    'native' => 'India',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => 'www.tieto.in',
    'prefix' => '',
    'weight' => -1,
  );
  // Exported language: et.
  $languages['et'] = array(
    'language' => 'et',
    'name' => 'Estonia',
    'native' => 'Eesti',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.ee',
    'prefix' => '',
    'weight' => -6,
  );
  // Exported language: fi.
  $languages['fi'] = array(
    'language' => 'fi',
    'name' => 'Finland',
    'native' => 'Suomi',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.fi',
    'prefix' => '',
    'weight' => -9,
  );
  // Exported language: fil.
  $languages['fil'] = array(
    'language' => 'fil',
    'name' => 'Philippines',
    'native' => 'Filipino',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => 'www.tieto.ph',
    'prefix' => '',
    'weight' => 4,
  );
  // Exported language: lt.
  $languages['lt'] = array(
    'language' => 'lt',
    'name' => 'Lithuania',
    'native' => 'Lietuvių',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):(((($n%10)>=2)&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => 'www.tieto.lt',
    'prefix' => '',
    'weight' => 1,
  );
  // Exported language: lv.
  $languages['lv'] = array(
    'language' => 'lv',
    'name' => 'Latvia',
    'native' => 'Latviešu',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):(($n!=0)?(1):2))',
    'domain' => 'www.tieto.lv',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: nl.
  $languages['nl'] = array(
    'language' => 'nl',
    'name' => 'Netherlands',
    'native' => 'Nederlands',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.nl',
    'prefix' => '',
    'weight' => 2,
  );
  // Exported language: nn.
  $languages['nn'] = array(
    'language' => 'nn',
    'name' => 'Norway',
    'native' => 'Nynorsk',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.no',
    'prefix' => '',
    'weight' => 3,
  );
  // Exported language: pl.
  $languages['pl'] = array(
    'language' => 'pl',
    'name' => 'Poland',
    'native' => 'Polski',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(($n==1)?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => 'www.tieto.pl',
    'prefix' => '',
    'weight' => 5,
  );
  // Exported language: ru.
  $languages['ru'] = array(
    'language' => 'ru',
    'name' => 'Russia',
    'native' => 'Русский',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => 'www.tieto.ru',
    'prefix' => '',
    'weight' => 6,
  );
  // Exported language: sv.
  $languages['sv'] = array(
    'language' => 'sv',
    'name' => 'Sweden',
    'native' => 'Svenska',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.se',
    'prefix' => '',
    'weight' => -8,
  );
  // Exported language: zh-hans.
  $languages['zh-hans'] = array(
    'language' => 'zh-hans',
    'name' => 'China',
    'native' => '简体中文',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'www.tieto.cn',
    'prefix' => '',
    'weight' => -5,
  );
  return $languages;
}
