
// @todo: look into angular crop: https://github.com/alexk111/ngImgCrop/
// ex: http://jsfiddle.net/iceye/ryb31tj1/ (see https://github.com/alexk111/ngImgCrop/issues/6)
// Also look into: https://github.com/LukeMason/angular-img-editor (http://www.lukemason.co/sandbox/angular-img-editor/example/)
// 


angular.module('app.core')

.controller('thumbnails', function($scope, $rootScope, $state, $stateParams, $timeout, FileUploader){
  // set rootscope settings
  $scope.init = function(params) {
    //$rootScope.appUrl = params.appUrl != undefined ? params.appUrl : '';

    // @todo: Do this with angular.extend()
    //var fieldName = params.fieldName != undefined ? params.fieldName : $rootScope.fieldName;
    $rootScope.activeField = params.fieldName;
    var settings = {}
    console.log('params', params);
    angular.extend(settings, $rootScope.settings.defaults, params);
    console.log('extended params', settings);
/*
    $rootScope.settings[fieldName].apiUrl = params.apiUrl != undefined ? params.apiUrl : $rootScope.apiUrl;
    $rootScope.settings[fieldName].cardinality = params.cardinality != undefined ? parseInt(params.cardinality) : $rootScope.cardinality;
    $rootScope.settings[fieldName].multiple = $rootScope.cardinality != 1;
    //$rootScope.settings[fieldName].tabs = params.tabs != undefined ? params.tabs : $rootScope.tabs;
    $rootScope.settings[fieldName].allowedTypes = params.allowedTypes != undefined ? params.allowedTypes : undefined;
    $rootScope.settings[fieldName].cropRatio = params.cropRatio != undefined ? params.cropRatio : undefined;
    $rootScope.settings[fieldName].allowedSchemes = params.allowedSchemes != undefined ? params.allowedSchemes : undefined;
    $rootScope.settings[fieldName].addlFieldName = params.addlFieldName != undefined ? params.addlFieldName : undefined;
    $rootScope.files[fieldName] = params.files != undefined ? params.files : $rootScope.files;
*/
    // Merge in tab data
    //var enabledTabs = params.tabs;
    //console.log('et',enabledTabs);
    var tabs = [];
    angular.forEach(settings.tabs, function(tab, key) {
      if ($rootScope.tabs[tab] != undefined) {
        tabs.push($rootScope.tabs[tab]);
      }
    });
    settings.tabs = tabs;
    settings.tabs.slice().reverse();

    $rootScope.settings[settings.fieldName] = settings;
    console.log('settings', $rootScope.settings);
  }



  // Deal with drop to upload
  /*$timeout(function() {
    var uploader = $scope.uploader = new FileUploader({
      url: $rootScope.settings[$rootScope.activeField].apiUrl + 'upload',
      autoUpload: true
    });
  });
*/
//$timeout(function() {
  console.log(FileUploader);
  var uploader = $scope.uploader = new FileUploader({
    url: '/api/angular-media/upload',
    autoUpload: true
  });
  uploader.onAfterAddingFile = function(fileItem) {
    fileItem.showThumb = fileItem.file.type.indexOf('image') != -1 ? true : false;
  };
  uploader.onBeforeUploadItem = function(item) {   
    $scope.uploading = true;
  };
  uploader.onSuccessItem = function(fileItem, response, status, headers) {
    console.info('onSuccessItem', fileItem, response, status, headers);
    $scope.selected.push(response);
    fileItem = response;
    if ($scope.file == undefined) {
      $scope.file = fileItem;
      $scope.activeKey = 0;
    }
  };
//});
  

  $scope.remove = function(fieldName, key) {
    $rootScope.files[fieldName].splice(key, 1);
  }

  $scope.edit = function(fid, fieldName, key) {
    $rootScope.activeField = fieldName;
    $rootScope.activeKey = key;
    $state.go('modal.edit', {fid: fid});
  }

  $scope.select = function(fieldName, $event) {
    $rootScope.activeField = fieldName;
    $rootScope.activeKey = undefined;
    $state.go('modal.upload');
    $event.preventDefault();
  }

  // @todo: make this work instead of doing it in each individual submit() function.
  //$scope.$watch('files', function() {
  //  jQuery('#'+$rootScope.fieldName+'_media').trigger('change');
  //});
})
