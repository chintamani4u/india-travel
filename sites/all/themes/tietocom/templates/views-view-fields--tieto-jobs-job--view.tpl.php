<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

$ogurl = 'https://'. $_SERVER['SERVER_NAME'] . $_SERVER['REQUEST_URI'];
$ogtitle = strip_tags($fields['title']->content);
$ogcontent = strip_tags(substr($fields['body']->content, 0, strpos($fields['body']->content, ' ', 100)))."...";
$element = array(
  '#tag' => 'meta',
  '#attributes' => array(
    'property' => 'og:title',
    'content' => $ogtitle,
  )
);
$descelement =  array(
  '#tag' => 'meta',
  '#attributes' => array(
    'property' => 'og:description',
    'content' => $ogcontent,
  )
);
$urlelement =  array(
  '#tag' => 'meta',
  '#attributes' => array(
    'property' => 'og:url',
    'content' => $ogurl,
  )
);
drupal_add_html_head($element, 'og:title');
drupal_add_html_head($descelement, 'og:description');
drupal_add_html_head($urlelement, 'og:url');

?>
<h1 class="views-field views-field-title"><?php print $fields['title']->content; ?></h1>
<?php if (!empty($fields['field_apply_url']->handler->original_value)) {?>
<div class="views-field views-field-field-jobs-id"><?php print $fields['field_jobs_id']->content; ?></div>
<div class="views-field views-field-field-jobs-id"><?php print $fields['field_job_location_text']->content; ?></div>
<?php }?>
<div class="views-field info-box clearfix">
    <div class="left">
        <div class="location">
            <span class="label"><?php print t('Location'); ?>: </span>
            <div class="content"><?php print $fields['field_jobs_location']->content; ?></div>
        </div>
        <div class="jobareas">
            <span class="label"><?php print t('Job Area'); ?>: </span>
            <div class="content"><?php print $fields['field_jobs_jobareas']->content; ?></div>
        </div>
        <div class="organization">
            <span class="label"><?php print t('Organization'); ?>: </span>
            <div class="content"><?php print $fields['field_jobs_organization']->content; ?></div>
        </div>
    </div>
    <div class="right">
        <div class="form-of-employment">
            <span class="label"><?php print t('Form of employment'); ?>: </span>
            <div class="content"><?php print $fields['field_jobs_form_of_employment']->content; ?></div>
        </div>
        <div class="date">
            <span class="label"><?php print t('Application period'); ?>: </span>
            <div class="content"><?php print (strpos($fields['field_jobs_date']->content, 'date-display-seperator') !== false ? $fields['field_jobs_date']->content :  str_replace('</div>', '<div class="date-display-seperator">-</div></div>', $fields['field_jobs_date']->content)); ?></div>
        </div>
    </div>
</div>

<div class="views-field views-field-body"><?php print $fields['body']->content; ?></div>

<div class="views-field views-field-field-jobs-contact-information"><?php print $fields['field_jobs_contact_information']->content; ?></div>
<?php if (!empty($fields['field_apply_url']->handler->original_value)) {?>
<div class="views-field views-field-field-jobs-id views-field-field-jobs-id_footer">
    <div class="view-footer"><?php print $fields['field_jobs_id']->content; ?></div>
</div>
<div class="views-field views-field-field-jobs-id views-field-field-jobs-id_footer">
  <div class="view-footer"><?php print $fields['field_job_location_text']->content; ?></div>
</div>
<?php }?>
<div class="views-field views-field-addtoany-link"><?php print $fields['addtoany_link']->content; ?></div>