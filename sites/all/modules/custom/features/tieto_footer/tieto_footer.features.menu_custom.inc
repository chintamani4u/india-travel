<?php
/**
 * @file
 * tieto_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tieto_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-cn-footer.
  $menus['menu-cn-footer'] = array(
    'menu_name' => 'menu-cn-footer',
    'title' => '.cn footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-cz-footer.
  $menus['menu-cz-footer'] = array(
    'menu_name' => 'menu-cz-footer',
    'title' => '.cz footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-ee-footer.
  $menus['menu-ee-footer'] = array(
    'menu_name' => 'menu-ee-footer',
    'title' => '.ee footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-fi-footer.
  $menus['menu-fi-footer'] = array(
    'menu_name' => 'menu-fi-footer',
    'title' => '.fi footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-in-footer.
  $menus['menu-in-footer'] = array(
    'menu_name' => 'menu-in-footer',
    'title' => '.in footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-lt-footer.
  $menus['menu-lt-footer'] = array(
    'menu_name' => 'menu-lt-footer',
    'title' => '.lt footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-lv-footer.
  $menus['menu-lv-footer'] = array(
    'menu_name' => 'menu-lv-footer',
    'title' => '.lv footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-nl-footer.
  $menus['menu-nl-footer'] = array(
    'menu_name' => 'menu-nl-footer',
    'title' => '.nl footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-no-footer.
  $menus['menu-no-footer'] = array(
    'menu_name' => 'menu-no-footer',
    'title' => '.no footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-pl-footer.
  $menus['menu-pl-footer'] = array(
    'menu_name' => 'menu-pl-footer',
    'title' => '.pl footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-ru-footer.
  $menus['menu-ru-footer'] = array(
    'menu_name' => 'menu-ru-footer',
    'title' => '.ru footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-se-footer.
  $menus['menu-se-footer'] = array(
    'menu_name' => 'menu-se-footer',
    'title' => '.se footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-tieto-footer.
  $menus['menu-tieto-footer'] = array(
    'menu_name' => 'menu-tieto-footer',
    'title' => '.com footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('.cn footer');
  t('.com footer');
  t('.cz footer');
  t('.ee footer');
  t('.fi footer');
  t('.in footer');
  t('.lt footer');
  t('.lv footer');
  t('.nl footer');
  t('.no footer');
  t('.pl footer');
  t('.ru footer');
  t('.se footer');


  return $menus;
}
