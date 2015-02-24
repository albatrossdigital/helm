
// @todo: look into angular crop: https://github.com/alexk111/ngImgCrop/
// ex: http://jsfiddle.net/iceye/ryb31tj1/ (see https://github.com/alexk111/ngImgCrop/issues/6)
// Also look into: https://github.com/LukeMason/angular-img-editor (http://www.lukemason.co/sandbox/angular-img-editor/example/)
// 
angular.module('app.core')

.directive('editForm', function($rootScope, CoreFile, ngJcropConfigProvider) {
  return {
    restrict: 'A',
    templateUrl: appUrl + 'views/editForm.html',
    link: function($scope, $element, $attrs) {
      console.log('edit form', $scope.file);

      if ($scope.file.filemime != undefined) {
        $scope.croppable = $scope.file.filemime.indexOf('image') != -1 && $rootScope.settings[$rootScope.activeField].cropRatio != 'none';
      }

      if ($scope.file.$save == undefined && $scope.file.fid != undefined) {
        $scope.file = CoreFile.load({fid: $scope.file.fid});
        $scope.croppable = $scope.file.filemime.indexOf('image') != -1 && $rootScope.settings[$rootScope.activeField].cropRatio != 'none';
      }

      if ($attrs.overwriteOnly != undefined) {
        $scope.overwriteOnly = true;
      }

      $scope.startEdit = function($event) {
        $scope.editing = true;
        $event.preventDefault();
      }

      $scope.stopEdit = function($event) {
        $scope.editing = false;
        $event.preventDefault();
      }


      $scope.saveFile = function($event) {
        console.log($scope.file.attribution);
        $scope.file.$save();
        $scope.editing = false;
        $event.preventDefault();
      }

      $scope.startCrop = function($event) {
        //if ($scope.croppable) {
          $scope.crop = true;
          $scope.coords = [];
        //}
        $event.preventDefault();        
      }

      $scope.stopCrop = function($event) {
        $scope.crop = false;
        $event.preventDefault();
      }

      $scope.saveCrop = function(overwrite, $event) {
        var $jcrop = jQuery('.jcrop-holder');
        var params = {
          width: $jcrop.width(),
          height: $jcrop.height(),
          coords: $scope.coords,
          overwrite: overwrite
        }
        $scope.file.crop = JSON.stringify(params);
        $scope.file.$save(function(data) {
          $scope.file = data;
          if ($rootScope.activeKey != undefined) {
            $rootScope.files[$rootScope.activeField][$rootScope.activeKey] = data;
          }
        });

        $scope.crop = false;
        $event.preventDefault();
      }

      $scope.close = function($event) {
        $state.go('base');
        $event.preventDefault();
      }


    }
  }
})
