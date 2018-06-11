<div class="highlight-content">
		<?php foreach($rows as $index=>$row):?>
		  <?php if($index == 0):?>
		    <div class="highlight-view">
			  <h2><?php echo $row['title'];?></h2>
			  <?php echo $row['field_image_atom'];?>
			  <span><?php echo $row['body'];?></span>
			</div>
		  <?php else:?>
		  <div class="highlight-list">
        <div class="image">
          <?php echo $row['field_image_atom'];?>
        </div>
        <div class="content">
          <?php echo $row['body'];?>
        </div>
		  </div>
		  <?php endif;?>
		<?php endforeach;?>
</div>

