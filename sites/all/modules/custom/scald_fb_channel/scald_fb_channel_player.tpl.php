<?php
/**
 * @file
 *   Default theme implementation for the Scald Rss Channel Player
 * dsm($vars);
 *
 * Title
 * Link
 * Author
 * PublishedDate
 * ContentSnippet (teaser)
 * Content (raw html)
 * Categories (Array)
 *
 */
?>
<div class="view-content">
  <ul>
      <?php
      for ($i = 0; $i < count($vars['entries']); $i++) {
      ?>
      <li>
        <div class="views-field views-field-title">
          <span class="field-content">
            <a href="<?php echo $vars['entries'][$i]->link, PHP_EOL;?>"><?php echo $vars['entries'][$i]->title, PHP_EOL;?></a>
          </span>
        </div>
        <div class="views-field views-field-author">
          <span class="field-content">
            <?php echo $vars['entries'][$i]->author, PHP_EOL;?>
          </span>
        </div>
        <div class="views-field views-field-timestamp">
          <span class="field-content">
            <?php echo $vars['entries'][$i]->publishedDate, PHP_EOL;?>
          </span>
        </div>
        <div class="views-field views-field-description">
          <span class="field-content"><?php echo $vars['entries'][$i]->contentSnippet, PHP_EOL;?>
          </span>
        </div>
      </li>
      <?php
      }
      ?>
  </ul>
</div>