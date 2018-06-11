<?php
$arr_rows = $view->style_plugin->rendered_fields;
if (count($_GET) <=1 && count($arr_rows)) {
  ?>
  <div class='newsroom-wrapper'>
    <div class='newsroom-section-one'>
      <div class='newsroom-row' >
        <div class='news-tile tile-col-1 one-a' >
          <div class="views-field views-field-title"><span class="field-content">
           <?php   if (!empty($arr_rows[0]['title'])) { print $arr_rows[0]['title'];} ?>
          </span></div>
          <?php  if (!empty($arr_rows[0]['field_image_atom'])) {?><div class='view-tieto-customer-cases-image-div'><?php print $arr_rows[0]['field_image_atom'];?></div><?php }?>
          <span class='customer-cases-more' ><?php echo $arr_rows[0]['view_node'];?></span><br>
        </div>
        <div class='news-tile tile-col-2 one-b'>
          <div class="views-field views-field-title"><span class="field-content">
           <?php   if (!empty($arr_rows[1]['title'])) { print $arr_rows[1]['title'];} ?>
          </span></div>
          <?php  if (!empty($arr_rows[1]['field_image_atom'])) {?><div class='view-tieto-customer-cases-image-div'><?php print $arr_rows[1]['field_image_atom'];?></div><?php }?>
          <span class='customer-cases-more'><?php echo $arr_rows[1]['view_node'];?></span><br>

        </div>
      </div>
      <?php if(count($arr_rows)>2){?>
      <div class='newsroom-row' >
        <div class='news-tile tile-col-1 two-a'>
          <div class="views-field views-field-title"><span class="field-content">
           <?php   if (!empty($arr_rows[2]['title'])) { print $arr_rows[2]['title'];} ?>
          </span></div>
          <?php  if (!empty($arr_rows[2]['field_image_atom'])) {?><div class='view-tieto-customer-cases-image-div'><?php print $arr_rows[2]['field_image_atom'];?></div><?php }?>
          <span class='customer-cases-more'><?php echo $arr_rows[2]['view_node'];?></span><br>
        </div>
        <div class='news-tile tile-col-2 two-b'>
          <div class="views-field views-field-title"><span class="field-content">
           <?php   if (!empty($arr_rows[3]['title'])) { print $arr_rows[3]['title'];} ?>
          </span></div>
          <?php  if (!empty($arr_rows[3]['field_image_atom'])) {?><div class='view-tieto-customer-cases-image-div'><?php print $arr_rows[3]['field_image_atom'];?></div><?php }?>
          <span class='customer-cases-more'><?php echo $arr_rows[3]['view_node'];?></span><br>
        </div>
      </div>
    </div>
    <?php }?>

  </div>
  <?php
     print views_embed_view('tieto_top_story_solr_search','customer_casese');
  } else {
    print views_embed_view('tieto_top_story_solr_search','panel_pane_1');
  }?>