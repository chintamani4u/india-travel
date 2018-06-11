<?php

/**
 * @file
 * Class definition of FeedsScaldProcessor.
 */

/**
 * Creates nodes from feed items.
 */
class FeedsScaldProcessor extends FeedsProcessor {
  /**
   * Define entity type.
   */
  public function entityType() {
    return 'scald_atom';
  }

  /**
   * Implements parent::entityInfo().
   */
  protected function entityInfo() {
    $info = parent::entityInfo();
    $info['label plural'] = t('Scald Atoms');
    return $info;
  }

  /**
   * Creates a new atom in memory and returns it.
   * $source == FeedsSource
   * Providers video>scald_youtube must be mapped to this->config['content_type']
   */
  protected function newEntity(FeedsSource $source) {
    // Create atom from a URL.
    $providers = $this->config['content_type'];
    if (in_array($providers, array('video', 'slideshow', 'file'))) {
	
      switch ($providers) {
        case "video":
          $type = 'scald_youtube';
          break;
        case "slideshow":
          $type = 'scald_slideshare';
          break;
        default:
          $type = 'scald_file';
          break;
      }
    }
    $atom = new stdClass();
    $atom->type =  $this->config['content_type'];
    $atom->provider =  $type;
    $atom->base_id = '';
    $atom->title = '';

    return $atom;

  }

  /**
   * Loads an existing atom.
   *
   * If the update existing method is not FEEDS_UPDATE_EXISTING, only the atom
   * table will be loaded, foregoing the scald_atom_load API for better performance.
   *
   */
  protected function entityLoad(FeedsSource $source, $sid) {
    if ($this->config['update_existing'] == FEEDS_UPDATE_EXISTING) {
      $atom = scald_atom_load($sid);
      watchdog('FeedsScaldProcessor', 'Updated by FeedsScaldProcessor '.print_r($atom));
    }
    else {
      $atom = scald_atom_load($sid);
      watchdog('FeedsScaldProcessor', 'Replaced by FeedsScaldProcessor '.print_r($atom));
    }
    return $atom;
  }



  /**
   * Save a atom.
   */
  public function entitySave($atom) {
    // Search for existing atom with this data
    $query = array('provider' => $atom->provider, 'base_id' => $atom->base_id);
    // If we have a match, do an update instead
    if($sid = scald_search($query, FALSE, TRUE)) {
      $old_atom = scald_atom_load($sid);
      // Incoming data overrides existing data, so only copy non-existent fields
      foreach ($old_atom as $field => $value) {
        $atom->$field = $old_atom->$field;
      }
      // Reset the sid to the one found earlier.
      $atom->sid = $sid;
    }
    //Commenting this code : Below line added by Pooja bcoz of this line youtube importer is not working.
	//$atom->provider = 'scald_slideshare';
    return scald_atom_save($atom);

  }

  /**
   * Delete a series of nodes.
   */
  protected function entityDeleteMultiple($sids) {
    scald_atom_delete($sids);
  }

  /**
   * Implement expire().
   */
  public function expire($time = NULL) {
    return;
  }

  /**
   * Return expiry time.
   */
  public function expiryTime() {
    return $this->config['expire'];
  }
  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    $types = scald_type_get_names();
    $type = isset($types['scald_atoms']) ? 'scald_atoms' : key($types);
    return array(
      'content_type' => $type,
      'author' => 0,
    ) + parent::configDefaults();
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $types = scald_type_get_names();
    array_walk($types, 'check_plain');
    $form = parent::configForm($form_state);
    $form['content_type'] = array(
      '#type' => 'select',
      '#title' => t('Content type'),
      '#description' => t('Select the content type for the atoms to be created. <strong>Note:</strong> Users with "import !feed_id feeds" permissions will be able to <strong>import</strong> atoms of the content type selected here regardless of the permissions. Further, users with "clear !feed_id permissions" will be able to <strong>delete</strong> imported atoms regardless of their permissions.', array('!feed_id' => $this->id)),
      '#options' => $types,
      '#default_value' => $this->config['content_type'],
    );
    $author = user_load($this->config['author']);
    $form['author'] = array(
      '#type' => 'textfield',
      '#title' => t('Author'),
      '#description' => t('Select the author of the atoms to be created - leave empty to assign "anonymous".'),
      '#autocomplete_path' => 'user/autocomplete',
      '#default_value' => empty($author->name) ?  'anonymous' : check_plain($author->name),
    );

    $period = drupal_map_assoc(array(FEEDS_EXPIRE_NEVER, 3600, 10800, 21600, 43200, 86400, 259200, 604800, 2592000, 2592000 * 3, 2592000 * 6, 31536000), 'feeds_format_expire');
    $form['expire'] = array(
      '#type' => 'select',
      '#title' => t('Expire atoms'),
      '#options' => $period,
      '#description' => t('Choose the lifetime of the atom after which it will be deleted.'),
      '#default_value' => $this->config['expire'],
    );
    $form['update_existing']['#options'] = array(
      FEEDS_SKIP_EXISTING => 'Do not update existing atoms',
      FEEDS_REPLACE_EXISTING => 'Replace existing atoms',
      FEEDS_UPDATE_EXISTING => 'Update existing atoms (slower than replacing them)',
    );
    return $form;
  }

  /**
   * Override parent::configFormValidate().
   */
  public function configFormValidate(&$values) {
    if ($author = user_load_by_name($values['author'])) {
      $values['author'] = $author->uid;
    }
    else {
      $values['author'] = 0;
    }
  }

  /**
   * Reschedule if expiry time changes.
   */
  public function configFormSubmit(&$values) {
    if ($this->config['expire'] != $values['expire']) {
      feeds_reschedule($this->id);
    }
    parent::configFormSubmit($values);
  }

  /**
   * Override setTargetElement to operate on a target item that is a atom.
   */
  public function setTargetElement(FeedsSource $source, $target_atom, $target_element, $value, $mapping) {
    switch ($target_element) {

    default:
        parent::setTargetElement($source, $target_atom, $target_element, $value);
        break;
    }
  }
  /**
   * Return available mapping targets.
   * dsm($type); == Provider
   *  returns: customtext, file, image, twitter, video, webpage
   */
  public function getMappingTargets() {
    //$type = scald_type_get_names($this->config['content_type']);

    $targets = parent::getMappingTargets();
    $targets += array(
    'sid' => array(
      'name' => t('Atom ID'),
      'description' => t('The sid of the atom. NOTE: use this feature with care, atom ids are usually assigned by Drupal.'),
      'optional_unique' => TRUE,
    ),
    'provider' => array(
      'name' => t('Provider'),
      'description' => t('The Scald Atom type'),
      'default' => 'scald_youtube', //$type
    ),
    'type' => array(
      'name' => t('Type'),
      'default' => 'video',
    ),
    'base_id' => array(
      'name' => t('Atom Base URL'),
      'description' => t('The base url for the atom, base_id'),
    ),
    'publisher' => array(
      'name' => t('User ID'),
      'description' => t('The Drupal user ID of the atom author.'),
    ),
    'actions' => array(
      'name' => t('Atom actions'),
      'description' => t('What actions could be executed against atom'),
      'default' => '15',
    ),
    'title' => array(
      'name' => t('Title'),
      'description' => t('The title of the node.'),
      //'optional_unique' => TRUE,
    ),
    );

    // Let other modules expose mapping targets.
    self::loadMappers();
    $entity_type = $this->entityType();
    $bundle = $this->config['content_type'];
    drupal_alter('feeds_processor_targets', $targets, $entity_type, $bundle);
    //dsm($targets);
    return $targets;
  }

  /**
   * Get sid of an existing feed item atom if available.
   */
  protected function existingEntityId(FeedsSource $source, FeedsParserResult $result) {
    if ($sid = parent::existingEntityId($source, $result)) {
      return $sid;
    }
    // Iterate through all unique targets and test whether they do already
    // exist in the database.
    foreach ($this->uniqueTargets($source, $result) as $target => $value) {
      switch ($target) {
        case 'sid':
          $sid = db_query("SELECT nid FROM {scald_atoms} WHERE sid = :sid", array(':sid' => $value))->fetchField();
          break;
        case 'base_id':
          $sid = db_query("SELECT nid FROM {scald_atoms} WHERE base_id = :base_id", array(':base_id' => $value))->fetchField();
          break;
      }
      if ($sid) {
        // Return with the first nid found.
        return $sid;
      }
    }
    return 0;

  }
}