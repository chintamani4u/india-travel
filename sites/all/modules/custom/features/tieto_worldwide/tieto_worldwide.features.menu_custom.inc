<?php
/**
 * @file
 * tieto_worldwide.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tieto_worldwide_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => '.com international',
    'description' => 'Menu for .com international',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-austria.
  $menus['menu-austria'] = array(
    'menu_name' => 'menu-austria',
    'title' => 'Austria',
    'description' => 'Menu for tieto.as',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-china.
  $menus['menu-china'] = array(
    'menu_name' => 'menu-china',
    'title' => 'China',
    'description' => 'Menu for tieto.ch',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-czech.
  $menus['menu-czech'] = array(
    'menu_name' => 'menu-czech',
    'title' => 'Czech Republic',
    'description' => 'Menu for tieto.cz',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-denmark.
  $menus['menu-denmark'] = array(
    'menu_name' => 'menu-denmark',
    'title' => 'Denmark',
    'description' => 'Menu for tieto.de',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-estonia.
  $menus['menu-estonia'] = array(
    'menu_name' => 'menu-estonia',
    'title' => 'Estonia',
    'description' => 'Menu for tieto.ee',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-finland.
  $menus['menu-finland'] = array(
    'menu_name' => 'menu-finland',
    'title' => 'Finland',
    'description' => 'Menu for tieto.fi',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-germany.
  $menus['menu-germany'] = array(
    'menu_name' => 'menu-germany',
    'title' => 'Germany',
    'description' => 'Menu for tieto.ge',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-india.
  $menus['menu-india'] = array(
    'menu_name' => 'menu-india',
    'title' => 'India',
    'description' => 'Menu for tieto.in',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-italy.
  $menus['menu-italy'] = array(
    'menu_name' => 'menu-italy',
    'title' => 'Italy',
    'description' => 'Menu for tieto.it',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-latvia.
  $menus['menu-latvia'] = array(
    'menu_name' => 'menu-latvia',
    'title' => 'Latvia',
    'description' => 'Menu for tieto.lv',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-lithuania.
  $menus['menu-lithuania'] = array(
    'menu_name' => 'menu-lithuania',
    'title' => 'Lithuania',
    'description' => 'Menu for tieto.lt',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-malaysia.
  $menus['menu-malaysia'] = array(
    'menu_name' => 'menu-malaysia',
    'title' => 'Malaysia',
    'description' => 'Menu for tieto.my',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-metherlands.
  $menus['menu-metherlands'] = array(
    'menu_name' => 'menu-metherlands',
    'title' => 'Netherlands',
    'description' => 'Menu for tieto.nl',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-norway.
  $menus['menu-norway'] = array(
    'menu_name' => 'menu-norway',
    'title' => 'Norway',
    'description' => 'Menu for tieto.no',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-philippines.
  $menus['menu-philippines'] = array(
    'menu_name' => 'menu-philippines',
    'title' => 'Philippines',
    'description' => 'Menu for tieto.ph',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-poland.
  $menus['menu-poland'] = array(
    'menu_name' => 'menu-poland',
    'title' => 'Poland',
    'description' => 'Menu for tieto.pl',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-russia.
  $menus['menu-russia'] = array(
    'menu_name' => 'menu-russia',
    'title' => 'Russia',
    'description' => 'Menu for tieto.ru',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-spain.
  $menus['menu-spain'] = array(
    'menu_name' => 'menu-spain',
    'title' => 'Spain',
    'description' => 'Menu for tieto.sp',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-sweden.
  $menus['menu-sweden'] = array(
    'menu_name' => 'menu-sweden',
    'title' => 'Sweden',
    'description' => 'Menu for tieto.se',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-tieto-worldwide.
  $menus['menu-tieto-worldwide'] = array(
    'menu_name' => 'menu-tieto-worldwide',
    'title' => 'Tieto countries',
    'description' => 'List links to Tieto\'s worldwide sites.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-uk.
  $menus['menu-uk'] = array(
    'menu_name' => 'menu-uk',
    'title' => 'United Kingdom',
    'description' => 'Menu for tieto.uk',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-usa.
  $menus['menu-usa'] = array(
    'menu_name' => 'menu-usa',
    'title' => 'Usa',
    'description' => 'Menu for tieto.us',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('.com international');
  t('Austria');
  t('China');
  t('Czech Republic');
  t('Denmark');
  t('Estonia');
  t('Finland');
  t('Germany');
  t('India');
  t('Italy');
  t('Latvia');
  t('List links to Tieto\'s worldwide sites.');
  t('Lithuania');
  t('Malaysia');
  t('Menu for .com international');
  t('Menu for tieto.as');
  t('Menu for tieto.ch');
  t('Menu for tieto.cz');
  t('Menu for tieto.de');
  t('Menu for tieto.ee');
  t('Menu for tieto.fi');
  t('Menu for tieto.ge');
  t('Menu for tieto.in');
  t('Menu for tieto.it');
  t('Menu for tieto.lt');
  t('Menu for tieto.lv');
  t('Menu for tieto.my');
  t('Menu for tieto.nl');
  t('Menu for tieto.no');
  t('Menu for tieto.ph');
  t('Menu for tieto.pl');
  t('Menu for tieto.ru');
  t('Menu for tieto.se');
  t('Menu for tieto.sp');
  t('Menu for tieto.uk');
  t('Menu for tieto.us');
  t('Netherlands');
  t('Norway');
  t('Philippines');
  t('Poland');
  t('Russia');
  t('Spain');
  t('Sweden');
  t('Tieto countries');
  t('United Kingdom');
  t('Usa');


  return $menus;
}
