
'use strict';

function toggleMain(toggleClass, toggleType) {
  switch(toggleType) {
    case 'remove':
      jQuery('#main-311').removeClass(toggleClass);
      break;

    case 'add':
      jQuery('#main-311').addClass(toggleClass);
      break;

    default:
      jQuery('#main-311').toggleClass(toggleClass);
  }
}

angular.module('app')

.directive('mainToggle', function($window) {
  return {
    restrict: 'A',
    scope: {
      'mainToggle': '@',
      'mainToggleForce': '@',
      'mainToggleEnter': '@'
    },
    link: function($scope, $element, $attrs) {
      // Are we a link?
      if(!$scope.mainToggleEnter) { 
        // listen for a click
        $element.on('click', function() {
          toggleMain($scope.mainToggle, $scope.mainToggleForce);
        });
      }
      // or just showing up?
      else {
        toggleMain($scope.mainToggle, $scope.mainToggleForce);
      }
    }
  }
})



.directive('menuClick', function factory($window, $browser) {
  return {
    restrict: 'A',
    link: function($scope, $element, $attrs) {

      $element.on('click', function(event) {
        jQuery('.app-wrap').toggleClass('show-nav');
        if($attrs.menuClick && $attrs.menuClick == "return-false") {
          event.stopPropagation();
          return false;
        }
      });
    }
  }
});