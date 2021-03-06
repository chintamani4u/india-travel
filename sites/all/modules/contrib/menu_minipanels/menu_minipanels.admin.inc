<?php
/**
 * Menu Minipanels administration include file for configuration
 */

/**
 * Page callback for admin/settings/menu_minipanels
 */
function menu_minipanels_admin() {
  $form = array();

  // Show the current status of the qTip library.
  include_once('includes/install.inc');
  module_load_include('install', 'menu_minipanels');
  $status = menu_minipanels_requirements('runtime');
  $form['status'] = array(
    '#type' => 'fieldset',
    '#title' => t('qTip Library Status'),
    '#description' => '<p>' . $status['menu_minipanels']['value'] . "</p>\n",
  );
  if (!empty($status['menu_minipanels']['description'])) {
    $form['status']['#description'] .= '<p>' . $status['menu_minipanels']['description'] . "</p>\n";
  }

  // Give shortcuts to the menu-edit pages.
  $result = db_query("SELECT * FROM {menu_custom} ORDER BY title", array(), array('fetch' => PDO::FETCH_ASSOC));
  $header = array(t('Title'), array('data' => t('Can be used?')));
  $rows = array();
  foreach ($result as $menu) {
    $row = array();
    $row[] = array('data' => l($menu['title'], 'admin/structure/menu/manage/' . $menu['menu_name'] . '/edit', array('query' => array('destination' => 'admin/config/content/menu_minipanels'), 'attributes' => array('title' => t('Edit this menu')))));
    if (variable_get('menu_minipanels_' . $menu['menu_name'] . '_enabled', FALSE)) {
      $label = 'Yes';
    }
    else {
      $label = 'No';
    }
    $row[] = array('data' => l(t($label), 'admin/config/user-interface/menu_minipanels/toggle/' . $menu['menu_name'], array('attributes' => array('title' => t('Toggle this menu')))));
    $rows[] = $row;
  }
  $form['menus'] = array(
    '#markup' => theme('table', array('caption' => t('Menu selection'), 'header' => $header, 'rows' => $rows)),
  );

  // Additional global settings.

  // Control which pages are excluded from having megamenus.
  $form['menu_minipanels_exclude_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Don\'t show Menu_Minipanels on specific pages'),
    '#default_value' => variable_get('menu_minipanels_exclude_paths', "admin\nadmin/*"),
    '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
  );

  // Default settings.
  $form['defaults'] = array(
    '#type' => 'fieldset',
    '#title' => t('Default settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#description' => t('New minipanels will inherit the following settings, allowing for a consistent look.'),
  );
  _menu_minipanels_hover_settings_form($form['defaults'], variable_get('menu_minipanels_hover', _menu_minipanels_hover_defaults()), _menu_minipanels_hover_defaults());

  return system_settings_form($form);
}

/**
 * The configuration form for the qtip. This form simply mirrors the options
 * specified at: http://craigsworks.com/projects/qtip/docs/reference/
 */
function _menu_minipanels_hover_settings_form(&$base_form, $menu_minipanels_hover, $defaults) {
  // Setting up select lists used in the config form
  // Used for both show and hide effect options.
  $effect_options = array(
    'false' => t('None'),
    'fade' => t('Fade'),
    'slide' => t('Slide'),
    'grow' => t('Grow')
  );
  // Used in many places.
  $boolean_options = array(
    'true' => t('True'),
    'false' => t('False')
  );
  // Used in many places.
  $options_tips = array(
    'topLeft' => t('Top left'),
    'topMiddle' => t('Top middle'),
    'topRight' => t('Top right'),
    'rightTop' => t('Right top'),
    'rightMiddle' => t('Right middle'),
    'rightBottom' => t('Right bottom'),
    'bottomRight' => t('Bottom right'),
    'bottomMiddle' => t('Bottom middle'),
    'bottomLeft' => t('Bottom left'),
    'leftBottom' => t('Left bottom'),
    'leftMiddle' => t('Left middle'),
    'leftTop' => t('Left top'),
  );

  // Make this a #tree structure, so that form data collapses nicely into an
  // associate array so that we can simply print it out as javascript and it
  // fits the data structure that qtip is expecting.  Also, add a surrounding
  // div that our javascript code can use to hide/show the qtip configuration
  // when a minipanel is selected.
  $base_form['menu_minipanels_hover'] = array(
    '#tree' => TRUE,
    '#prefix' => '<div id="menu-minipanels-hover-settings">',
    '#suffix' => '</div>'
  );

  // This section - tooltip position.
  $base_form['menu_minipanels_hover']['position'] = array(
  	'#type' => 'fieldset',
    '#title' => t('Hover position configuration'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $target_options = array(
    'false' => t('Menu item'),
    'mouse' => t('Current mouse position'),
    'custom' => t('Custom (see below)'),
  );
  $base_form['menu_minipanels_hover']['position']['target'] = array(
    '#type' => 'select',
    '#title' => t('Target'),
    '#description' => t('The location the menu will appear relative to. If "custom" is selected a field will appear in order to provide a jQuery selector.'),
    '#default_value' => isset($menu_minipanels_hover['position']['target']) ? $menu_minipanels_hover['position']['target'] : $defaults['position']['target'],
    '#options' => $target_options,
    '#required' => TRUE,
  );
  $base_form['menu_minipanels_hover']['position']['target_custom'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom target'),
    '#description' => t('If \'custom\' is selected above, specify a jQuery selector, e.g. \'#header\' (without the quotes).'),
    '#default_value' => isset($menu_minipanels_hover['position']['target_custom']) ? $menu_minipanels_hover['position']['target_custom'] : $defaults['position']['target_custom'],
    '#required' => FALSE,
    '#dependency' => array('edit-menu-minipanels-hover-position-target' => array('custom')),
  );

  $type_options = array(
    'absolute' => t('Absolute'),
    'relative' => t('Fixed'),
    'static' => t('Relative'),
    'relative' => t('Static'),
  );
  $base_form['menu_minipanels_hover']['position']['type'] = array(
    '#type' => 'select',
    '#title' => t('Position type'),
    '#description' => t('Choose how the popup is positioned.'),
    '#default_value' => isset($menu_minipanels_hover['position']['type']) ? $menu_minipanels_hover['position']['type'] : $defaults['position']['type'],
    '#options' => $type_options,
    '#required' => TRUE,
  );

  $base_form['menu_minipanels_hover']['position']['corner'] = array();
  $base_form['menu_minipanels_hover']['position']['corner']['target'] = array(
    '#type' => 'select',
    '#title' => t('Target'),
    '#description' => t('Choose the tooltip target.'),
    '#default_value' => isset($menu_minipanels_hover['position']['corner']['target']) ? $menu_minipanels_hover['position']['corner']['target'] : $defaults['position']['corner']['target'],
    '#options' => $options_tips,
    '#required' => TRUE,
  );
  $base_form['menu_minipanels_hover']['position']['corner']['tooltip'] = array(
    '#type' => 'select',
    '#title' => t('Tooltip'),
    '#description' => t('Choose the tooltip position.'),
    '#default_value' => isset($menu_minipanels_hover['position']['corner']['tooltip']) ? $menu_minipanels_hover['position']['corner']['tooltip'] : $defaults['position']['corner']['tooltip'],
    '#options' => $options_tips,
    '#required' => TRUE,
  );

  // This section - showing the tooltip.
  $base_form['menu_minipanels_hover']['show'] = array(
  	'#type' => 'fieldset',
    '#title' => t('Show effect configuration'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $base_form['menu_minipanels_hover']['show']['delay'] = array(
    '#type' => 'textfield',
    '#title' => t('Delay (milliseconds)'),
    '#description' => t('How long the tooltip should wait before showing.'),
    '#default_value' => isset($menu_minipanels_hover['show']['delay']) ? $menu_minipanels_hover['show']['delay'] : $defaults['show']['delay'],
    '#required' => TRUE,
  );

  $when_options = array(
    'click' => t('Click'),
    'dblclick' => t('Double click'),
    'mouseover' => t('Mouse over'),
    'mouseenter' => t('Mouse enter')
  );
  $base_form['menu_minipanels_hover']['show']['when'] = array();
  $base_form['menu_minipanels_hover']['show']['when']['event'] = array(
    '#type' => 'select',
    '#title' => t('Show Event'),
    '#description' => t('When the menu should appear.'),
    '#default_value' => isset($menu_minipanels_hover['show']['when']['event']) ? $menu_minipanels_hover['show']['when']['event'] : $defaults['show']['when']['event'],
    '#options' => $when_options,
    '#required' => TRUE,
  );

  $base_form['menu_minipanels_hover']['show']['effect'] = array();
  $base_form['menu_minipanels_hover']['show']['effect']['type'] = array(
    '#type' => 'select',
    '#title' => t('Effect'),
    '#description' => t('The animation effect that will be used to hide the popup.'),
    '#default_value' => isset($menu_minipanels_hover['show']['effect']['type']) ? $menu_minipanels_hover['show']['effect']['type'] : $defaults['show']['effect']['type'],
    '#options' => $effect_options,
    '#required' => TRUE,
  );
  $base_form['menu_minipanels_hover']['show']['effect']['length'] = array(
    '#type' => 'textfield',
    '#title' => t('Length of effect (milliseconds)'),
    '#description' => t('How long the effect will take to complete.'),
    '#default_value' => isset($menu_minipanels_hover['show']['effect']['length']) ? $menu_minipanels_hover['show']['effect']['length'] : $defaults['show']['effect']['length'],
    '#required' => TRUE,
  );

  // This section - hiding the tooltip.
  $base_form['menu_minipanels_hover']['hide'] = array(
  	'#type' => 'fieldset',
    '#title' => t('Hide effect configuration'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $base_form['menu_minipanels_hover']['hide']['delay'] = array(
    '#type' => 'textfield',
    '#title' => t('Delay (milliseconds)'),
    '#description' => t('How long the tooltip should wait before hiding.'),
    '#default_value' => isset($menu_minipanels_hover['hide']['delay']) ? $menu_minipanels_hover['hide']['delay'] : $defaults['hide']['delay'],
    '#required' => TRUE,
  );

  $base_form['menu_minipanels_hover']['hide']['effect'] = array();
  $base_form['menu_minipanels_hover']['hide']['effect']['type'] = array(
    '#type' => 'select',
    '#title' => t('Effect Type'),
    '#description' => t('Choose an effect.'),
    '#default_value' => isset($menu_minipanels_hover['hide']['effect']['type']) ? $menu_minipanels_hover['hide']['effect']['type'] : $defaults['hide']['effect']['type'],
    '#options' => $effect_options,
    '#required' => TRUE,
  );
  $base_form['menu_minipanels_hover']['hide']['effect']['length'] = array(
    '#type' => 'textfield',
    '#title' => t('Length of effect (milliseconds)'),
    '#description' => t('How long the effect will take to complete.'),
    '#default_value' => isset($menu_minipanels_hover['hide']['effect']['length']) ? $menu_minipanels_hover['hide']['effect']['length'] : $defaults['hide']['effect']['length'],
    '#required' => TRUE,
  );

  // This section - style configuration.
  $base_form['menu_minipanels_hover']['style'] = array(
  	'#type' => 'fieldset',
    '#title' => t('Style configuration'),
    '#description' => t('Leave these values blank to inherit the style\'s default value.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $base_form['menu_minipanels_hover']['style']['name'] = array(
    '#type' => 'select',
    '#title' => t('Style name'),
    '#description' => t('The name of the style to apply.'),
    '#default_value' => isset($menu_minipanels_hover['style']['name']) ? $menu_minipanels_hover['style']['name'] : $defaults['style']['name'],
    '#options' => _menu_minipanels_get_styles(),
    '#required' => TRUE,
    '#description' => t('Custom styles can be created, see the API.txt file for further details.'),
  );

  $base_form['menu_minipanels_hover']['style']['width'] = array();
  $base_form['menu_minipanels_hover']['style']['width']['min'] = array(
    '#type' => 'textfield',
    '#title' => t('Minimum popup width (px)'),
    '#description' => t('The popup will automatically scale to match the size required for its contents. This sets a minimum width, in pixels, that it is allowed to expand to.'),
    '#default_value' => isset($menu_minipanels_hover['style']['width']['min']) ? $menu_minipanels_hover['style']['width']['min'] : $defaults['style']['width']['min'],
    '#required' => TRUE,
  );
  $base_form['menu_minipanels_hover']['style']['width']['max'] = array(
    '#type' => 'textfield',
    '#title' => t('Maximum popup width (px)'),
    '#description' => t('The popup will automatically scale to match the size required for its contents. This sets a maximum width, in pixels, that it is allowed to expand to.'),
    '#default_value' => isset($menu_minipanels_hover['style']['width']['max']) ? $menu_minipanels_hover['style']['width']['max'] : $defaults['style']['width']['max'],
    '#required' => TRUE,
  );

  $base_form['menu_minipanels_hover']['style']['border'] = array();
  $base_form['menu_minipanels_hover']['style']['border']['width'] = array(
    '#type' => 'textfield',
    '#title' => t('Border width (px)'),
    '#description' => t('Width of the border in pixels (excl. px).'),
    '#default_value' => isset($menu_minipanels_hover['style']['border']['width']) ? $menu_minipanels_hover['style']['border']['width'] : $defaults['style']['border']['width'],
    '#required' => TRUE,
  );

  $base_form['menu_minipanels_hover']['style']['border']['color'] = array(
    '#type' => 'textfield',
    '#title' => t('Border color'),
    '#description' => t('Color of the border, including the "#" symbol.'),
    '#default_value' => isset($menu_minipanels_hover['style']['border']['color']) ? $menu_minipanels_hover['style']['border']['color'] : $defaults['style']['border']['color'],
    '#required' => TRUE,
  );

  $base_form['menu_minipanels_hover']['style']['border']['radius'] = array(
    '#type' => 'textfield',
    '#title' => t('Border radius (px)'),
    '#description' => t('Determines the roundness of the tooltip border.'),
    '#default_value' => isset($menu_minipanels_hover['style']['border']['radius']) ? $menu_minipanels_hover['style']['border']['radius'] : $defaults['style']['border']['radius'],
    '#required' => TRUE,
  );
  $base_form['menu_minipanels_hover']['style']['tip'] = array(
    '#type' => 'select',
    '#title' => t('Arrow position'),
    '#description' => t('Choose the location of the arrow tip on the popup box.'),
    '#default_value' => isset($menu_minipanels_hover['style']['tip']) ? $menu_minipanels_hover['style']['tip'] : $defaults['style']['tip'],
    '#options' => array_merge(array('none' => 'None'), $options_tips),
    '#required' => TRUE,
  );

  return $base_form;
}

/**
 * Provide sensible defaults to the qTip configuration form.
 */
function _menu_minipanels_hover_defaults() {
  $defaults = array(
    'position' => array(
      'target' =>  'element',
      'target_custom' => '',
      'type' =>  'absolute',
      'corner' => array(
        'target' => 'bottomLeft',
        'tooltip' => 'topLeft',
      ),
      'adjust' => array(
        'x' => 0,
        'y' => 0,
        'mouse' => 'true',
        'screen' => 'false',
        'scroll' => 'true',
        'resize' => 'true',
      ),
    ),
    'show' => array(
      'delay' => 140,
      'when' => array(
        'event' => 'mouseover',
      ),
      'effect' => array(
        'type' => 'slide',
        'length' => 100,
      ),
    ),
    'hide' => array(
      'delay' => 0,
      'fixed' => 'true',
      'effect' => array(
        'type' => 'slide',
        'length' => 100,
      ),
    ),
    'style' => array(
      'name' => 'light',
      'width' => array(
        'min' => 0,
        'max' => 250,
      ),
      'border' => array(
        'width' => 3,
        'radius' => 0,
        'color' => '#d3d3d3',
      ),
      'tip' => 'none',
      'color' => 'false',
    ),
  );

  // Implement hook_menu_minipanels_defaults_alter() in a module to override
  // the settings above.
  drupal_alter('menu_minipanels_defaults', $defaults);

  return $defaults;
}

/**
 * Looks for hook_menu_minipanels_styles implementation.
 */
function _menu_minipanels_get_styles() {
  $styles = module_invoke_all('menu_minipanels_styles');

  // Ensure that $styles is an array.
  if (!is_array($styles)) {
    $styles = array();
  }

  return $styles;
}

/**
 * Implements hook_menu_minipanels_styles().
 */
function menu_minipanels_menu_minipanels_styles() {
   $options_style = array(
    'cream' => t('Cream'),
    'light' => t('Light'),
    'dark' => t('Dark'),
    'green' => t('Green'),
    'red' => t('Red'),
  );
  
  return $options_style;
}

/**
 * Toggle the status of a menu.
 */
function menu_minipanels_menu_toggle($menu) {
  // Some security precations.
  $menu = check_plain($menu);

  // First ensure the menu item actually exists.
  $result = db_query("SELECT menu_name FROM {menu_custom} WHERE menu_name = :name", array(':name' => $menu), array('fetch' => PDO::FETCH_ASSOC));
  if (!empty($result)) {
    if (variable_get('menu_minipanels_' . $menu . '_enabled', FALSE)) {
      variable_set('menu_minipanels_' . $menu . '_enabled', FALSE);
    }
    else {
      variable_set('menu_minipanels_' . $menu . '_enabled', TRUE);
    }

    drupal_set_message(t('Menu :menu has been toggled.', array(':menu' => $menu)));
  }

  drupal_goto('admin/config/user-interface/menu_minipanels');
}
