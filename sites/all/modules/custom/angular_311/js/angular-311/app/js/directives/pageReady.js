'use strict';

angular.module('app')

.directive('pageReady', function factory($window, $browser) {
  return {
    restrict: 'A',
    link: function($scope, $element, $attrs) {

      $browser.notifyWhenNoOutstandingRequests(function () {
        document.body.setAttribute('data-status', 'ready');
        $scope.$root.$emit('pageReady');
        $scope.$root.$broadcast('pageReady');
      });
    }
  }
});