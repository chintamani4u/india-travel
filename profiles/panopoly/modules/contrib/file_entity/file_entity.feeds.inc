<?php

/**
 * @file
 * Feeds definitions for file_entity.
 */

/**
 * Implements hook_feeds_processor_targets_alter().
 */
function file_entity_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
  if ($entity_type == 'file') {
    // TODO - figure out how to avoid this.
    unset($targets['type']);

    $targets['file_local'] = array(
      'name' => t('Local File'),
      'description' => t('Path to a file that should be stored locally.'),
      'callback' => 'file_entity_local_set_target',
    );
    $targets['file_uri'] = array(
      'name' => t('File URI'),
      'description' => t('URI of file to be used for this entity.'),
      'callback' => 'file_entity_uri_set_target',
    );
    $targets['file_mimetype'] = array(
      'name' => t('File MimeType'),
      'description' => t('The mimetype to use for this entity.'),
      'callback' => 'file_entity_mimetype_set_target',
    );
  }
}

/**
 * Maps feeds source data to a file entity.
 *
 * @see file_feeds_set_target().
 */
function file_entity_local_set_target($source, $entity, $target, $value) {
  if (empty($value)) {
    return;
  }
  module_load_include('inc', 'file');

  // Make sure $value is an object of type FeedsEnclosure.
  if (!($value instanceof FeedsEnclosure)) {
    if (is_string($value)) {
      $value = new FeedsEnclosure($value, 'application/octet-stream');
    }
    else {
      $value = null;
    }
  }
  if (empty($value)) {
    return;
  }

  // TODO - are destinations configurable?
  $dest = file_build_uri('');
  if ($file = $value->getFile($dest)) {
    foreach ($file as $k => $v) {
      $entity->{$k} = $v;
    }
  }
}

/**
 * Maps feeds source data to a file entity, for files represented only by an
 * external URI.
 *
 * @see file_feeds_set_target().
 */
function file_entity_uri_set_target($source, $entity, $target, $value) {
  if (empty($value)) {
    return;
  }
  module_load_include('inc', 'file');

  $entity->uri = $value;
  $entify->fid = NULL;
  $entity->filename = basename($value);
  $entity->filemime = file_get_mimetype($value);
  $entity->uid = $GLOBALS['user']->uid;
  $entity->status = FILE_STATUS_PERMANENT;
}

/**
 * Maps feeds source data to a file entity mimetype.
 */
function file_entity_mimetype_set_target($source, $entity, $target, $value) {
  if (empty($value)) {
    return;
  }
  $entity->filemime = $value;
}
