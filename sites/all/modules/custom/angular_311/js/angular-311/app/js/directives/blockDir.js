'use strict';

angular.module('app.block', [
  'drupalService'
])

.directive('block', function factory($window, $browser, View) {
  return {
    restrict: 'E',
    template : '<div class="block block-{{type}}" ng-class="{loading: \'loading\'}" ng-include="getTemplate()"></div>',
    scope: {
      entity: '@drupalEntity',
      template: '@drupalTemplate',
      view: '@drupalView'
    },
    link: function($scope, $rootScope, $element, $attrs) {

      $scope.loading = true;
      $scope.getTemplate = function() {

        if ($scope.type == undefined) {
        
          // Block entity
          if ($scope.entity != undefined) {
            // @todo
            $scope.loading = false;
            var type = $scope.template != undefined ? $scope.template : 'entity';
          }

          // View
          else if ($scope.view != undefined) {
            var view = $scope.view.split('.');
            var viewParams = {
              'entity': view[0],
              'bundle': view[1],
              'a': view[2],
            }
            View.query(viewParams).$promise.then(function(data) {
              $scope.items = data;
              $scope.loading = false;
            });
            var type = $scope.template != undefined ? $scope.template : 'view-' + viewParams.entity +'-'+ viewParams.bundle;
          }

          // Static template file
          else if ($scope.template != undefined) {
            var type = $scope.template;
            $scope.loading = false;
          }

          $scope.type = type;
        }
        return '/views/block/' + $scope.type + '.html';
      }

    }
  }
})