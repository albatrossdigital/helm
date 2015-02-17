<script type="text/javascript">var appUrl = '<?php print $app_url; ?>';</script>
<div class="angular-media-field">
  <div ui-view></div>
  <div class="thumbnails" ng-class="" ng-controller="thumbnails" ng-init='init({
  apiUrl: "<?php print $api_url; ?>",
  fieldName: "<?php print $field_name; ?>",
  files: <?php print drupal_json_encode($files, JSON_HEX_APOS); ?>,
  cardinality: <?php print (int)$cardinality; ?>,
  flickrApiKey: "<?php print $flickr_key; ?>"
})'><!-- nv-file-drop="" uploader="uploader"-->
    
    
    <?php if(!$hidden): ?>
      <div  class="thumbnail" ng-repeat="(key, file) in files" title="{{file.name}}">
        <div thumbnails></div>
        <a href class="thumbnail-title" ng-click="edit(file.fid)">{{file.name}}</a>
          <button type="button" class="btn btn-default btn-xs thumbnail-edit" ng-click="edit(file.fid)"><span class="glyphicon glyphicon-cog" aria-hidden="true"></span></button>
          <button type="button" class="btn btn-danger btn-xs thumbnail-remove" ng-click="remove(key)"><span class="glyphicon glyphicon-trash" aria-hidden="true"></span></button>
      </div>
      <div class="thumbnail drop-zone">
        <div><span class="glyphicon glyphicon-download" aria-hidden="true"></span> Drop files</div>
        <div class="or">or</div>
        <button class="btn btn-primary media-select" ng-click="select($event)"><span class="glyphicon glyphicon-picture" aria-hidden="true"></span> Select</button>
      </div>
    <?php else: ?>
      <button class="btn btn-primary media-select" ng-click="select($event)"><span class="glyphicon glyphicon-picture" aria-hidden="true"></span> Select</button>
    <?php endif; ?>
  </div>

  <input type="hidden" name="<?php print $field_name; ?>_media" id="<?php print $field_name; ?>_media" value="{{files}}" />
  
  <div class="clearfix"></div>
</div> 
<?php /*
  <!-- endbuild -->
  <!--<script src="bower_components/angular-bootstrap/ui-bootstrap-tpls.js"></script>-->

  <!-- build:js js/libraries.min.js -->
  <!-- bower:js -->
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/angular/angular.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/angular-ui-router/release/angular-ui-router.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/angular-resource/angular-resource.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/infinite-scroll/jquery.infinitescroll.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/ngInfiniteScroll/build/ng-infinite-scroll.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/angular-file-upload/angular-file-upload.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/jcrop/js/jquery.Jcrop.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/ngImgCrop/compile/minified/ng-img-crop.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/angular-xeditable/dist/js/xeditable.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/angular-mocks/angular-mocks.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/ng-jcrop/ng-jcrop.js"></script>
  <!-- endbower -->
  <!-- endbuild -->
  <!-- build:js js/vendor/bootstrap.min.js -->
  <!-- endbuild -->
  <!-- build:js js/app.min.js -->
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/app.js"></script>
  <!-- Utilities -->
  <!-- Routes -->
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/routes/coreRoutes.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/routes/flickrRoutes.js"></script>
  <!-- Providers -->
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/providers/flickrResources.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/providers/coreResources.js"></script>
  <!-- Controllers -->
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/controllers/thumnailsCtrl.js"></script>
  <!-- Filters -->
  <!-- Directives -->
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/directives/thumbnailDir.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/js/directives/editFormDir.js"></script>
  <!-- endbuild --> */ ?>