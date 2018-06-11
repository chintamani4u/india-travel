<h2><?php print t("Our Amazing Team") ?></h2>
<div class="team-content">
			<?php foreach($rows as $index=>$row):?><div class="team-view col-3">
			<div class="thumbnail"><?php echo $row['field_image_atom'];?></div>
			  <div class="title">
				<h3 class="text"><?php echo $row['title'];?></h3>
				<span class="desc"><?php echo $row['field_careers_team_job_title'];?></span>
			  </div>
			  <div class="sub-title">
				<a href="<?php echo $row['field_twitter_link']?>" class="social-link fa fa-twitter" target="_blank"></a>
				<a href="<?php echo $row['field_linkedin_link']?>" class="social-link fa fa-linkedin-square" target="_blank"></a>
			  </div>
			</div><?php endforeach;?>
</div>

