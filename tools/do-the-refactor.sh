#!/usr/bin/env bash
drush cc all \
    && drush en tieto_offcanvas_menu -y \
    && drush cc all \
    && drush eval "include_once DRUPAL_ROOT . '/tools/menu-links-refactor.php'; refactor();"
