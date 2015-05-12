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
  <div class="image-panel panel-panel"><div class="panel-panel-inner">
    <?php print $content['imgarea']; ?>
  </div></div>
  <div class="caption panel-panel">
    <div class="panel-panel-inner">
      <?php print $content['contentmain']; ?>
    </div>
  </div>
</div><!-- /.bryant-flipped -->
