
// @todo: look into angular crop: https://github.com/alexk111/ngImgCrop/
// ex: http://jsfiddle.net/iceye/ryb31tj1/ (see https://github.com/alexk111/ngImgCrop/issues/6)
// Also look into: https://github.com/LukeMason/angular-img-editor (http://www.lukemason.co/sandbox/angular-img-editor/example/)
// 


angular.module('app.core')

.controller('thumbnails', function($scope, $rootScope, $state, $stateParams, $timeout, FileUploader){
  // set rootscope settings
  $scope.init = function(params) {
    //$rootScope.appUrl = params.appUrl != undefined ? params.appUrl : '';
    var fieldName = params.fieldName != undefined ? params.fieldName : $rootScope.fieldName;
    $rootScope.activeField = fieldName;
    $rootScope.settings[fieldName] = {};
    $rootScope.settings[fieldName].apiUrl = params.apiUrl != undefined ? params.apiUrl : $rootScope.apiUrl;
    $rootScope.settings[fieldName].cardinality = params.cardinality != undefined ? parseInt(params.cardinality) : $rootScope.cardinality;
    $rootScope.settings[fieldName].multiple = $rootScope.cardinality != 1;
    $rootScope.files[fieldName] = params.files != undefined ? params.files : $rootScope.files;
    $rootScope.settings[fieldName].tabs = params.tabs != undefined ? params.files : $rootScope.tabs;
    $rootScope.settings[fieldName].tabs.slice().reverse();
    
  console.log('params', params);
  }



  // Deal with drop to upload
  $timeout(function() {
    var uploader = $scope.uploader = new FileUploader({
      url: $rootScope.settings[$rootScope.activeField].apiUrlUpload + 'upload',
      autoUpload: true
    });
  });


  

  $scope.remove = function(fieldName, key) {
    $rootScope.files[fieldName].splice(key, 1);
  }

  $scope.edit = function(fid) {
    console.log('edit', fid);
    $state.go('modal.edit', {fid: fid});
  }

  $scope.select = function(fieldName, $event) {
    $rootScope.settings[$rootScope.activeField].activeField = fieldName;
    $state.go('modal.upload');
    $event.preventDefault();
  }

  // @todo: make this work instead of doing it in each individual submit() function.
  //$scope.$watch('files', function() {
  //  jQuery('#'+$rootScope.fieldName+'_media').trigger('change');
  //});
})
