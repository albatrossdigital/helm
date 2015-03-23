<?php
/**
 * @file
 * Template for ?Helm Sidebar Right.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display helm-sidebar-right clearfix container <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row">
    <div class="col-md-8 layouts-content panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="col-md-4 layouts-sidebar layouts-sidebar-right panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
  </div>
</div><!-- /.helm-sidbar-right -->
