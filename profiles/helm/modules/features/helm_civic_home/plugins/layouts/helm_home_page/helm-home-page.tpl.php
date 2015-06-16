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

<div class="panel-display helm-home-page clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if (!empty($content['topleft']) || !empty($content['topright'])): ?>
    <div class="layout-top layout-header-bg" style="background-image:url('<?php print $header_image; ?>');"><div class="false-container"><div class="row">
      <?php if (!empty($content['topleft'])): ?>
        <div class="col-md-6 home-top-left panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['topleft']; ?>
          </div>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['topright'])): ?>
        <div class="col-md-6 home-top-right panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['topright']; ?>
          </div>
        </div>
      <?php endif; ?>
    
    </div></div></div>
  <?php endif; ?>
  <?php if (!empty($content['contentmain'])): ?>
    <div class="layout-content"><div class="false-container"><div class="row">
      <div class="col-md-12 home-content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
    </div></div></div>
  <?php endif; ?>
  <?php if (!empty($content['tripleft']) || !empty($content['tripmiddle']) || !empty($content['tripright'])): ?>
    <div class="layout-triptych"><div class="false-container"><div class="row">
      <?php if (!empty($content['tripleft'])): ?>
        <div class="col-md-4 home-triptych-left panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['tripleft']; ?>
          </div>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['tripmiddle'])): ?>
        <div class="col-md-4 home-triptych-middle panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['tripmiddle']; ?>
          </div>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['tripright'])): ?>
        <div class="col-md-4 home-triptych-right panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['tripright']; ?>
          </div>
        </div>
      <?php endif; ?>
    </div></div></div>
  <?php endif; ?>
  <?php if (!empty($content['lowerleft']) || !empty($content['lowerright'])): ?>
    <div class="layout-lower"><div class="false-container"><div class="row paper">
      <?php if (!empty($content['lowerleft'])): ?>
        <div class="col-md-6 home-lower-left panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['lowerleft']; ?>
          </div>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['lowerright'])): ?>
        <div class="col-md-6 home-lower-right panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['lowerright']; ?>
          </div>
        </div>
      <?php endif; ?>
    </div></div></div>
  <?php endif; ?>
  <?php if (!empty($content['quad1']) || !empty($content['quad2']) || !empty($content['quad3']) || !empty($content['quad4'])): ?>
    <div class="layout-quad"><div class="false-container"><div class="row">
      <?php if (!empty($content['quad1'])): ?>
        <div class="col-md-3 home-quad-one panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['quad1']; ?>
          </div>
        </div>
      <?php endif; ?>
        <?php if (!empty($content['quad2'])): ?>
        <div class="col-md-3 home-quad-two panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['quad2']; ?>
          </div>
        </div>
      <?php endif; ?>
        <?php if (!empty($content['quad3'])): ?>
        <div class="col-md-3 home-quad-three panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['quad3']; ?>
          </div>
        </div>
      <?php endif; ?>
        <?php if (!empty($content['quad4'])): ?>
        <div class="col-md-3 home-quad-four panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['quad4']; ?>
          </div>
        </div>
      <?php endif; ?>
      </div></div></div>
    <?php endif; ?>
    <?php if (!empty($content['bottom'])): ?>
    <div class="layout-bottom"><div class="false-container"><div class="row">
      <div class="col-md-12 home-bottom panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['bottom']; ?>
        </div>
      </div>
    </div></div></div>
  <?php endif; ?>
  <?php if (!empty($content['bottom_banner'])): ?>
    <div class="layout-bottom-banner"><div class="row">
      <?php print $content['bottom']; ?>
    </div></div>
  <?php endif; ?>
</div><!-- /.home-page -->
