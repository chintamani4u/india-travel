<?php
/**
 * Simple block to display addthis widget.
 */
$plugin = array(
  'title' => 'Addthis',
  // Name of a function which will render the block.
  'render callback' => 'tieto_common_tieto_addthis_render',
  'category' => array('Tieto Common'),
);

function tieto_common_tieto_addthis_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->title = NULL;

  $label = t('Share this on');
  $markup = <<<EO_HTML
<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox ">
<span class="addthis_item addthis_label">{$label}: </span>
<a class="addthis_item addthis_button_linkedin"></a>
<a class="addthis_item addthis_button_twitter"></a>
<a class="addthis_item addthis_button_facebook"></a>
<a class="addthis_item addthis_button_google"></a>
<a class="addthis_item addthis_button_compact"></a>
<a class="addthis_item addthis_counter addthis_bubble_style"></a>
</div>
<!-- AddThis Button END -->
EO_HTML;

  $inline_js = <<<EO_JS
var pageTracker = [];
if (typeof (_gaq) != "undefined" && _gaq._getAsyncTracker) {
  pageTracker = _gaq._getAsyncTracker('');
}
var addthis_config = {
  data_ga_tracker: pageTracker,
  data_track_clickback: true,
  services_exclude: 'email'
}
EO_JS;

  $external_js = "http://s7.addthis.com/js/250/addthis_widget.js#username=tieto";

  $block->content = array(
    '#markup' => $markup,
    '#attached' => array(),
  );
  $block->content['#attached']['js'][] = array(
    'data' => $external_js,
    'type' => 'external',
  );
  $block->content['#attached']['js'][] = array(
    'data' => $inline_js,
    'type' => 'inline',
  );

  return $block;
}
