<?php
function tieto_key_topics_views_pre_execute(&$view) {
  if($view->name == 'key_topics_phases' && $view->current_display == 'panel_pane_1') {
    if(isset($_GET['nid']))
    $tid = $_GET['nid'];
    if(isset($tid)) {
      $node = node_load($tid);
      $node->sticky=1;
      node_save($node);
    }
  }
}

function tieto_key_topics_views_post_execute(&$view) {
  if($view->name == 'key_topics_phases' && $view->current_display == 'panel_pane_1') {
    if(isset($_GET['nid']))
    $tid = $_GET['nid'];
    if(isset($tid)) {
      $node = node_load($tid);
      $node->sticky=0;
      node_save($node);
    }
  }
}