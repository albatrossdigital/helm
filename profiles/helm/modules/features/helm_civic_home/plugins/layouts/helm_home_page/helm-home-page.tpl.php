<?php
/**
 * @file
 * Template for Helm Civic Home.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<?php if (!empty($content['abovetop'])): ?>
  <div id="abovetop">
    <?php print $content['abovetop']; ?>
  </div>
<?php endif; ?>

<div class="panel-display helm-home-page clearfix container <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row layout-top layout-header-bg" style="background-image:url('<?php print $header_image; ?>');">
    <div class="false-container">
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
  </div>
    <div class="false-container">
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
    <div class="row layout-lower paper">
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
    <div class="row layout-quad">
      <div class="col-md-3 home-quad-one panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['quad1']; ?>
        </div>
      </div>
      <div class="col-md-3 home-quad-two panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['quad2']; ?>
        </div>
      </div>
      <div class="col-md-3 home-quad-three panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['quad3']; ?>
        </div>
      </div>
      <div class="col-md-3 home-quad-four panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['quad4']; ?>
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
  </div>
</div><!-- /.home-page -->
