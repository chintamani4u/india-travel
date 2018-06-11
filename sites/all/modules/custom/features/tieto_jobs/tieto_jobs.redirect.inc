<?php

/**
 * Implements hook_redirect_alter().
 *
 * Change 'id' URL parameter in <anything>/job?id=<number> to 'job'. This way we
 * can use redirect module to do the redirects for old elevation job urls.
 */
function tieto_jobs_redirect_alter($redirect) {
  $source_bits = explode('/', $redirect->source);
  $last_bit = array_pop($source_bits);
  if ($last_bit === 'job' && !empty($redirect->redirect_options['query']['id'])) {
    $job_id = $redirect->redirect_options['query']['id'];
    if (is_numeric($job_id)) {
      unset($redirect->redirect_options['query']['id']);
      $redirect->redirect_options['query']['job'] = $job_id;
    }
  }
}
