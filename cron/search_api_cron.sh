#!/bin/sh

drush sqlq "DELETE from variable where name='acquia_spi_cron_last' or name='job_scheduler_cron' or name='cron_semaphore' or name='cron_last'"

drush eval "variable_set('search_api_cron_last', 0);"
drush eval "search_api_cron();"
drush eval "variable_set('search_api_cron_last', time());"
drush eval "variable_set('search_api_acquia_cron_last', 0);"
drush eval "search_api_acquia_cron();"
drush eval "variable_set('search_api_acquia_cron_last', time());"
