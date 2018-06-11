<?php

/**
 * @file
 * Plugin to provide an relationship handler for tieto terms from node.
 */

$plugin = array(
  'title' => 'Tieto terms from node',
  'keyword' => 'tieto_terms',
  'description' => 'Terms from node\'s context',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'context' => 'tieto_terms_from_node_context',
  'defaults' => array(),
);

function tieto_terms_from_node_context($context, $conf) {
  // If unset it wants a generic, unfilled context, which is just NULL.
  if (empty($context->data)) {
    return ctools_context_create_empty('terms', NULL);
  }

  $node = $context->data;

  // If node has a landing page, we use that.
  $items = field_get_items('node', $node, 'field_landing_page');
  if (!empty($items[0]['target_id']) && ($landing_page = node_load($items[0]['target_id']))) {
    $node = $landing_page;
  }

  $tids = _tieto_basefields_tieto_terms_from_node($node);

  if (!empty($tids)) {
    $terms = ctools_break_phrase(implode('+', $tids));
    return ctools_context_create('terms', $terms);
  }
}


