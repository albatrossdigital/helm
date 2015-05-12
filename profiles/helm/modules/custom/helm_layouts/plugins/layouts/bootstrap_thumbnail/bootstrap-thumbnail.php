<?php
/**
 * @file
 * Template for Radix Bryant Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display thumbnail <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php print $content['imgarea']; ?>
   <div class="caption">
      <?php print $content['contentmain']; ?>
  </div>
</div><!-- /.bryant-flipped -->
