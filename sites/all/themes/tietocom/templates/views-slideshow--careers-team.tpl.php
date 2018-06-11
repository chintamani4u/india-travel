<?php if (!empty($slideshow)): ?>
  <h2><?php print t("Our Amazing Team") ?></h2>
  <div class="skin-<?php print $skin; ?>">
    <?php if (!empty($top_widget_rendered)): ?>
      <div class="views-slideshow-controls-top clearfix">
        <?php print $top_widget_rendered; ?>
      </div>
    <?php endif; ?>
  <div class="team-content">
    <?php print $slideshow; ?>
</div>
    <?php if (!empty($bottom_widget_rendered)): ?>
      <div class="views-slideshow-controls-bottom clearfix">
        <?php print $bottom_widget_rendered; ?>
      </div>
    <?php endif; ?>
  </div>

<?php endif; ?>