
// @todo: look into angular crop: https://github.com/alexk111/ngImgCrop/
// ex: http://jsfiddle.net/iceye/ryb31tj1/ (see https://github.com/alexk111/ngImgCrop/issues/6)
// Also look into: https://github.com/LukeMason/angular-img-editor (http://www.lukemason.co/sandbox/angular-img-editor/example/)
// 
angular.module('app.core')

.directive('editForm', function() {
  return {
    restrict: 'A',
    templateUrl: appUrl + 'views/editForm.html',
    link: function($scope, $element, $attrs) {
      console.log('edit form', $scope.file);

      $scope.saveFile = function() {
        conosle.log($scope.file);
        //$scope.file.save();
      }

      $scope.startCrop = function($event) {
        $scope.crop = true;
        $scope.coords = [];
        $event.preventDefault();
      }

      $scope.stopCrop = function($event) {
        $scope.crop = false;
        //$event.preventDefault();
      }

      $scope.saveCrop = function() {
        console.log($scope.coords);
        var $jcrop = $('.jcrop-holder');
        var params = {
          width: $jcrop.width(),
          height: $jcrop.height(),
          coords: $scope.coords
        }
        $scope.file.crop = JSON.stringify(params);
        $scope.file.$save();

        //$event.preventDefault();
      }


    }
  }
})
