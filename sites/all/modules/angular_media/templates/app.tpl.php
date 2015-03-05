<script type="text/javascript">var appUrl = '<?php print $app_url; ?>';</script>
<div class="angular-media-field" <?php if($hidden): ?>style="display: none;"<?php endif; ?>>
  <div ui-view></div>
  <div class="thumbnails" ng-class="" ng-controller="thumbnails" ng-init='init({
  apiUrl: "<?php print $api_url; ?>",
  fieldName: "<?php print $field_name; ?>",
  files: <?php print drupal_json_encode($files, JSON_HEX_APOS); ?>,
  cardinality: <?php print (int)$cardinality; ?>,
  tabs: <?php print $tabs; ?>,
  allowedTypes: <?php print $allowed_types; ?>,
  cropRatio: "<?php print $crop_ratio; ?>",
  allowedSchemes: <?php print $allowed_schemes; ?>,
  flickrApiKey: "<?php print $flickr_key; ?>",
  addlFieldName: "<?php print $addl_field_name; ?>",
})'><!-- nv-file-drop="" uploader="uploader"-->
    
    
    <?php if(!$hidden): ?>
      <div class="thumbnail" ng-repeat="(key, file) in files['<?php print $field_name; ?>']" title="{{file.name}}">
        <div thumbnails></div>
        <a href class="thumbnail-title" ng-click="edit(file.fid)">{{file.name}}</a>
          <button type="button" class="btn btn-default btn-xs thumbnail-edit" ng-click="edit(file.fid, '<?php print $field_name; ?>', key)"><span class="glyphicon glyphicon-cog" aria-hidden="true"></span></button>
          <button type="button" class="btn btn-danger btn-xs thumbnail-remove" ng-click="remove('<?php print $field_name; ?>', key)"><span class="glyphicon glyphicon-trash" aria-hidden="true"></span></button>
      </div>
      <div ng-controller="upload">
        <div ng-class="{'upload-active': uploading}" class="thumbnail drop-zone" nv-file-drop="" uploader="uploader">
          <div><span class="glyphicon glyphicon-download" aria-hidden="true"></span> Drop files</div>
          <div class="or">or</div>
          <button class="btn btn-primary media-select" id="<?php print $field_name; ?>_select" ng-click="select('<?php print $field_name; ?>', $event)"><span class="glyphicon glyphicon-picture" aria-hidden="true"></span> Select</button>
        </div>
      </div>
    <?php else: ?>
      <button class="btn btn-primary media-select" id="<?php print $field_name; ?>_select" ng-click="select('<?php print $field_name; ?>', $event)"><span class="glyphicon glyphicon-picture" aria-hidden="true"></span> Select</button>
    <?php endif; ?>
  </div>

  <input type="hidden" name="<?php print $field_name; ?>_media" id="<?php print $field_name; ?>_media" value="{{files['<?php print $field_name; ?>']}}" />
  
  <div class="clearfix"></div>
</div> 

<?php /*
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/jquery/dist/jquery.js"></script>
  <!-- endbuild -->
  <!--<script src="http://soar-current.local/sites/all/libraries/angular-media-app/app/http://soar-current.local/sites/all/libraries/angular-media-app/app/bower_components/angular-bootstrap/ui-bootstrap-tpls.js"></script>-->

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



  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/dist/js/libraries.min.js"></script>
  <script src="http://soar-current.local/sites/all/libraries/angular-media-app/dist/js/app.min.js"></script>

  */ ?>