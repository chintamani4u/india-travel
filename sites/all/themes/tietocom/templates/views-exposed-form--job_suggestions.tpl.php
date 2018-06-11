<?php foreach ($widgets as $id => $widget): ?>
		<div id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget views-widget-<?php print $id; ?> views-widget col-1" >
			<?php print $widget->widget; ?>
		</div>
	<?php endforeach;?>

	<div class="views-exposed-widget views-submit-button">
      <?php print $button; ?>
    </div>

<?php

$block = module_invoke('tieto_new_concept_page', 'block_view', 'concept_page_menu');
print render($block['content']);

?>
