<div id="<?php print $app_id; ?>" class="app-wrap">
  <div ng-if="appPageDisplay == 'all'" class="open-nav">
    <a menu-click="return-false"><i class="fa fa-arrow-circle-o-left"></i> <span>Navigation</span></a>
  </div>
  <div class="app-slider">
    <div class="row">
      <div ng-if="appPageDisplay == 'all'" class="col-xs-6 col-sm-12 nav-contain">
        <div menu></div>
      </div>

      <div class="col-xs-6 col-sm-12 content-contain">
        <div class="body-content animation-wrap">
          <main id="main-311" class="main main-311 transform clearfix" ui-view></main>
        </div>
      </div>
    </div>
  </div>
</div>