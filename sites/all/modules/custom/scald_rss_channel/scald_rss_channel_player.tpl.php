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
        $entry = $vars['entries'][$i];
      ?>
      <li>
        <?php if($entry->title): ?>
        <div class="views-field views-field-title">
          <span class="field-content">
            <a href="<?php echo $entry->link, PHP_EOL;?>"><?php echo $entry->title, PHP_EOL;?></a>
          </span>
        </div>
        <?php endif; ?>

        <?php if($entry->author || $entry->publishedDate): ?>
        <div class="views-field views-field-author-timestamp">
          <?php if ($entry->author): ?>
          <span class="views-field-author field-content">
            <?php echo $entry->author,", ", PHP_EOL;?>

            <?php if($entry->publishedDate): ?>

            <?php endif; ?>
          </span>
          <?php endif; ?>

          <?php if($entry->publishedDate): ?>
          <span class="views-field-timestamp field-content">
            <?php echo $entry->publishedDate, PHP_EOL;?>
          </span>
          <?php endif; ?>
        </div>
        <?php endif; ?>

        <?php if($entry->contentSnippet): ?>
        <div class="views-field views-field-description">
          <span class="field-content">
            <?php echo $entry->contentSnippet, PHP_EOL;?>
          </span>
        </div>
        <?php endif; ?>
      </li>
      <?php
      }
      ?>
  </ul>
</div>