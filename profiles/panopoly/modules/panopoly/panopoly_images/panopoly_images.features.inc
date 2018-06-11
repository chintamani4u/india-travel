<?php
/**
 * @file
 * panopoly_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function panopoly_images_image_default_styles() {
  $styles = array();

  // Exported image style: panopoly_image_featured.
  $styles['panopoly_image_featured'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 480,
          'height' => 260,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
    'label' => 'panopoly_image_featured',
  );

  // Exported image style: panopoly_image_full.
  $styles['panopoly_image_full'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'panopoly_image_full',
  );

  // Exported image style: panopoly_image_half.
  $styles['panopoly_image_half'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'panopoly_image_half',
  );

  // Exported image style: panopoly_image_quarter.
  $styles['panopoly_image_quarter'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'panopoly_image_quarter',
  );

  // Exported image style: panopoly_image_spotlight.
  $styles['panopoly_image_spotlight'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 560,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'panopoly_image_spotlight',
  );

  // Exported image style: panopoly_image_square.
  $styles['panopoly_image_square'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'panopoly_image_square',
  );

  // Exported image style: panopoly_image_thumbnail.
  $styles['panopoly_image_thumbnail'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'panopoly_image_thumbnail',
  );

  // Exported image style: panopoly_image_video.
  $styles['panopoly_image_video'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'panopoly_image_video',
  );

  return $styles;
}
