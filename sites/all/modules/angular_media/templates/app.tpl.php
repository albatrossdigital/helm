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
        <div thumbnail></div>
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