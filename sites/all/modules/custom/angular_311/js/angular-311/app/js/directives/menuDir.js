'use strict';

angular.module('app.menu', [
])

.directive('menu', function factory($window, $browser) {
  return {
    restrict: 'A',
    templateUrl: appUrl + 'views/menu.html',
    link: function($scope, $element, $attrs) {

      $scope.menu = [
        {title: 'Get Answers', state: 'faq', icon: 'fa-question-circle'},
        {title: 'Make a Payment', state: 'payments', icon: 'fa-usd'},
        {title: 'Report an Issue', state: 'report', icon: 'fa-exclamation-triangle'},
        {title: 'Check Status', state: 'status', icon: 'fa-wrench'}
      ]
    }
  }
});