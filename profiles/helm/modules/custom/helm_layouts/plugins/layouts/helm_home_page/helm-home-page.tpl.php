<?php
/**
 * @file
 * Template for Radix Burr Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display helm-home-page clearfix container <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row header-bg">
    <div class="col-sm-12">
      <?php print $content['header']; ?>
    </div>
  </div>
  <div class="row layout-top">
    <div class="col-md-6 home-top-left panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['topleft']; ?>
      </div>
    </div>
    <div class="col-md-6 home-top-right panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['topright']; ?>
      </div>
    </div>
  </div>
  <div class="row layout-content">
    <div class="col-md-12 home-content panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
  </div>
  <div class="row layout-triptych">
    <div class="col-md-4 home-triptych-left panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['tripleft']; ?>
      </div>
    </div>
    <div class="col-md-4 home-triptych-middle panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['tripmiddle']; ?>
      </div>
    </div>
    <div class="col-md-4 home-triptych-right panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['tripright']; ?>
      </div>
    </div>
  </div>
  <div class="row layout-lower">
    <div class="col-md-6 home-lower-left panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['lowerleft']; ?>
      </div>
    </div>
    <div class="col-md-6 home-lower-right panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['lowerright']; ?>
      </div>
    </div>
  </div>
  <div class="row layout-bottom">
    <div class="col-md-12 home-bottom panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['bottom']; ?>
      </div>
    </div>
  </div>
</div><!-- /.home-page -->
