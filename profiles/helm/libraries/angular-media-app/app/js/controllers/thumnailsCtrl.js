
// @todo: look into angular crop: https://github.com/alexk111/ngImgCrop/
// ex: http://jsfiddle.net/iceye/ryb31tj1/ (see https://github.com/alexk111/ngImgCrop/issues/6)
// Also look into: https://github.com/LukeMason/angular-img-editor (http://www.lukemason.co/sandbox/angular-img-editor/example/)
// 


angular.module('app.core')

.controller('thumbnails', function($scope, $rootScope, $state, $stateParams, FileUploader){
  // set rootscope settings
  $scope.init = function(params) {
    //$rootScope.appUrl = params.appUrl != undefined ? params.appUrl : '';
    $rootScope.apiUrl = params.apiUrl != undefined ? params.apiUrl : '';
    $rootScope.cardinality = params.cardinality != undefined ? parseInt(params.cardinality) : $rootScope.cardinality;
    $rootScope.multiple = $rootScope.cardinality != 1;
    $rootScope.files = params.files != undefined ? params.files : $rootScope.files;
    $rootScope.tabs = params.tabs != undefined ? params.files : $rootScope.tabs;
    $rootScope.tabs.slice().reverse();
    $rootScope.fieldName = params.fieldName != undefined ? params.fieldName : $rootScope.fieldName;
  console.log('params', params);
  }



  // Deal with drop to upload
  var uploader = $scope.uploader = new FileUploader({
      url: $rootScope.apiUrlUpload + 'upload',
      autoUpload: true
  });

  $scope.remove = function(key) {
    $rootScope.files.splice(key, 1);
  }

  $scope.edit = function(fid) {
    console.log('edit', fid);
    $state.go('modal.edit', {fid: fid});
  }

  $scope.select = function($event) {
    $state.go('modal.upload');
    $event.preventDefault();
  }

  // @todo: make this work instead of doing it in each individual submit() function.
  //$scope.$watch('files', function() {
  //  jQuery('#'+$rootScope.fieldName+'_media').trigger('change');
  //});
})
