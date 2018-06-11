CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Maintainers


INTRODUCTION
------------

 * This module is a Slideshare provider allowing Scald module
   users to add Media Atoms of type slideshow, using the Slideshare API
 * This project includes all the features needed to create Media Atoms directly
   from Slideshare, search, reuse them, and simply embed them into your drupal
   nodes with drag and drop magic
 * The module extends scald UI to do the following
  * Import Slideshare slideshows by identifyer, username, tag
  * Automatically import thumbnails, author names and tags
 * See http://drupal.org/node/1895554 for a list of Scald providers
   as separate projects for other great providers


REQUIREMENTS
------------

 * [Scald](https://www.drupal.org/project/scald)
 * This project uses the Slideshare API: [you need to ask for an API key]
   (http://www.slideshare.net/developers/applyforapi)


INSTALLATION
------------

    drush en -y scald_slideshare scald_dnd_library mee atom_reference


CONFIGURATION
-------------

 * Configuration » Media » Scald Slideshare Settings and Imports
  * Configure your Slideshare API key
 * People » Permissions
  * Administer scald slideshare settings and imports


MAINTAINERS
-----------

 * Pierre Ternon ([pierre75](https://drupal.org/user/236424))
 * Fabien Mercier ([NerOcrO](https://drupal.org/user/1728164))
