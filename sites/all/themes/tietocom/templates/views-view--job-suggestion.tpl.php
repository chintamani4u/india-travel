<?php
$path = drupal_get_query_parameters();
$location = taxonomy_term_load($path['field_jobs_location']);
$jobarea= taxonomy_term_load($path['field_jobs_jobareas']);
?>
<div class="view-filters expand">
	<?php print $exposed;?>
</div>
<div class="job-section">
<?php $jobs_found = count(views_get_current_view()->result);
?>
<?php if($jobs_found>=1):?>
	<?php print $rows;?>
		<section class="col-1">
			<button class="primary-button" id="open-job1" ><?php print t("Show more open jobs")?></button>
		</section>
   <?php /*  if(drupal_get_path_alias(current_path())=='uramahdollisuudet' || drupal_get_path_alias(current_path())=='careers'):?>
   <section class="col-1">
			<a href="https://www.tieto.fi/uramahdollisuudet/opiskelijat-ja-nuoret-ammattilaiset/kesaharjoittelu">
    <?php if(drupal_get_path_alias(current_path())=='uramahdollisuudet'): ?>
              <button class="primary-button" style="padding: 10px 18.351%;"><?php print t("Kesätyöpaikat 2018 Suomessa")?></button>
    <?php endif;?>
              <?php if(drupal_get_path_alias(current_path())=='careers'): ?>
                <button class="primary-button" style="padding: 10px 18.351%;
"><?php print t("Summer jobs in Finland")?></button>
              <?php endif;?>

            </a>
		</section>
  <?php endif;*/ ?>
	<?php else: ?>
	<section class="col-1">
		<?php if($location->name && $jobarea->name ): ?>
		<div class="messages warning"><?php print t('Currently no jobs available in ')?><b><?php print $location->name;?></b><?php print t(' for')?> <b><?php print $jobarea->name;?></b></br> <?php print t('Please see our latest jobs below.')?></div>
		<?php endif;?>
		<?php if($location->name && !$jobarea->name): ?>
		<div class="messages warning"><?php print t('Currently no jobs available in ')?><b><?php print $location->name;?></b>,<?php print t('Please see our latest jobs below.')?></div>
		<?php endif;?>
		<?php if(!$location->name && $jobarea->name): ?>
		<div class="messages warning"><?php print t('Currently no jobs available for ')?><b><?php print $jobarea->name;?></b>, <?php print t('Please see our latest jobs below.')?></div>
		<?php endif;?>
	</section>
		<?php 
		print views_embed_view('job_suggestion','latest_jobs');
		?>
	<?php endif;?>
</div>