<?php

// Bootstrap Drupal

chdir('../');

define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';

drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$query = db_query("select * from file_managed where type='image'");

foreach($query->fetchAll() as $key => $val) {

  $url = DRUPAL_ROOT . '/sites/default/files/' . substr($val->uri, 9);
 
  unset($type);

  if(substr_count($val->uri, '.jpg') != 0 || substr_count($val->uri, '.jpeg') != NULL) {

    if(imagecreatefromjpeg($url) == NULL || exif_imagetype($val->uri) != IMAGETYPE_JPEG) {

       $query = new entityFieldQuery();

       $item = db_query("select * from scald_atoms where base_id = '" . $val->fid . "'");
       
       $atom = $item->fetchAll();

       if(count($atom) != NULL) {

          $images['atoms']['jpg'][] = "https://www.tieto.com/atom/" . $atom[0]->sid . "/edit";
       }
       else {

          $images['unlinked']['jpg'][] = $val->fid;
       }
    }
  }

  if(substr_count($val->uri, '.png') != 0) {

    if(imagecreatefrompng($url) == NULL || exif_imagetype($val->uri) != IMAGETYPE_PNG) {

       $query = new entityFieldQuery();

       $item = db_query("select * from scald_atoms where base_id = '" . $val->fid . "'");

       $atom = $item->fetchAll();

       if(count($atom) != NULL) {

          $images['atoms']['png'][] = "https://www.tieto.com/atom/" . $atom[0]->sid . "/edit";
       }
       else {

          $images['unlinked']['png'][] = $val->fid;
       }
    }
  }

  if(substr_count($val->uri, '.gif') != 0) {

    if(imagecreatefromgif($url) == NULL || exif_imagetype($val->uri) != IMAGETYPE_GIF) {

       $query = new entityFieldQuery();

       $item = db_query("select * from scald_atoms where base_id = '" . $val->fid . "'");

       $atom = $item->fetchAll();

       if(count($atom) != NULL) {

          $images['atoms']['gif'][] = "https://www.tieto.com/atom/" . $atom[0]->sid . "/edit";
       }
       else {

          $images['unlinked']['gif'][] = $val->fid;
       }
    }
  }
}

print_r($images);

?>
