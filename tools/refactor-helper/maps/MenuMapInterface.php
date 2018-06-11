<?php

/**
 * Interface MenuMapInterface.
 */
interface MenuMapInterface {

  /**
   * Return the data for the megamenu parent link.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuParentData();

  /**
   * Return the data for the top level links, excluding the megamenu.
   *
   * @return array
   *   The link data.
   */
  public function getTopLevelMenuLinks();

  /**
   * Return the data for the megamenu links.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuLinks();

  /**
   * Get map of additional required fixes.
   *
   * @todo
   *
   * @return array
   */
  public function getAdditionalFixes();

}
