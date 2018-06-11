<?php

/**
 * Displays Industyry hub page sputniks.
 *
 * Sputniks links are disabled links under industry hub page.
 *
 * @see tieto_industry_hub_page_menu_block_tree_alter()
 */
$plugin = array(
  'title' => 'Sputnik links',
  'category' => array('Tieto Common'),
  'edit form' => 'tieto_industry_hublinks_edit_form',
  'render callback' => 'tieto_industry_hublinks_content_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),

  'defaults' => array(),
);

function tieto_industry_hublinks_content_render($subtype, $conf, $panel_args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = clone $context->data;
  module_invoke('menu', 'node_prepare', $node);
  if (empty($node->menu['mlid'])) {
    return;
  }

  $tree = NULL;
  $haystack = menu_tree_all_data($node->menu['menu_name'], $node->menu, $node->menu['depth'] + 1);
  while ($item = array_shift($haystack)) {
    if ($item['link']['mlid'] == $node->menu['mlid']) {
      $tree = $item['below'];
      break;
    }
    if ($item['below']) {
      $haystack = array_merge($haystack, $item['below']);
    }
  }

  foreach ($tree as $key => $item) {
    if (!$item['link']['hidden']) {
      unset($tree[$key]);
    }
    else {
      $tree[$key]['link']['hidden'] = 0;
    }
  }

  if (!empty($tree)) {
    $block = new stdClass();
    $block->title = NULL;
    $block->content = menu_tree_output($tree);
    return $block;
  }
}


function tieto_industry_hublinks_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}
