<?php

function tieto_basefields_views_plugins() {
  $plugins = array();
  $plugins['argument default'] = array(
    'tieto_terms' => array(
      'title' => 'Tieto terms',
      'handler' => 'tieto_basefields_plugin_argument_default_tieto_terms',
    ),
  );
  return $plugins;
}
