<h2><?php print t("Cases")?></h2>
<div class="cases-content">
	<?php foreach($rows as $index=>$row):?><div class="cases-view col-2">
			  <div class="large">
			  <?php echo $row[field_video_atom];?></div>
			  <div class="spec">
				<h3><?php echo $row['title_field'];?></h3>
				<span><?php echo $row['field_description'];?></span>
			  </div>
	</div><?php endforeach;?>
</div>

