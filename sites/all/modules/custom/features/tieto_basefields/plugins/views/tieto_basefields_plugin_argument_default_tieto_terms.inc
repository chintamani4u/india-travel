<?php

/**
 * @file
 * Definition of tieto_basefields_plugin_argument_default_tieto_tids.
 */

/**
 * Taxonomy tid default argument.
 */
class tieto_basefields_plugin_argument_default_tieto_terms extends views_plugin_argument_default {

  function get_argument() {
    // Load default argument from node.
    $node = menu_get_object();

    $all = $this->argument->options['exception']['value'];

    if ($node) {
      // If node has a landing page, we use that.
      $items = field_get_items('node', $node, 'field_landing_page');
      if (!empty($items[0]['target_id']) && ($landing_page = node_load($items[0]['target_id']))) {
        $tids = _tieto_basefields_tieto_terms_from_node($landing_page);

        if (empty($tids)) {
          // On sputnik pages, landing page points to "industries" landing page
          // which we cannot use. In this case, try to use industry hub page.
          $landing_page = NULL;
          $landing_page_types = array('industry_hub_page', 'tieto_landing_page');
          $trail = menu_get_active_trail();
          while (!$landing_page && ($menu_link = array_pop($trail))) {
            $menu_path = $menu_link['href'] == '<front>' ? variable_get('site_frontpage', 'node') : $menu_link['href'];
            $menu_node = menu_get_object('node', 1, drupal_get_normal_path($menu_path));
            if ($menu_node && in_array($menu_node->type, $landing_page_types)) {
              $landing_page = $menu_node;
            }
          }
          if ($landing_page) {
            $tids = _tieto_basefields_tieto_terms_from_node($landing_page);
          }
        }
      }
      else {
        $tids = _tieto_basefields_tieto_terms_from_node($node);
      }
    }

    if (empty($tids)) {
      return $all;
    }

    return implode('+', $tids);
  }
}
