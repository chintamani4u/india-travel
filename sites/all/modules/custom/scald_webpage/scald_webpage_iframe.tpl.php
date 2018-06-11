<?php
/**
 * @file
 *   Default theme implementation for the Scald webpage Player
 */
?>
<iframe src="<?php print $vars['url'] ?>" width="<?php print $vars['iframe_width'] ?>%" height="<?php print $vars['iframe_height'] ?>px" <?php print $vars['options'] ?>>
  <a href="<?php print $vars['url'] ?>"><?php print $vars['title'] ?></a>
</iframe>