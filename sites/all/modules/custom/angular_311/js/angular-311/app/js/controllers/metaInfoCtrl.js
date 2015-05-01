'use strict';

angular.module('metaInfo')

.controller('metaInfoCtrl', 
  [         '$scope', 'metaInfo', 
    function($scope  , metaInfo) {
      $scope.pageTitle = function() {
        return metaInfo.title();
      };
      $scope.metaDescription = function() {
        return metaInfo.metaDescription();
      };
      $scope.metaKeywords = function() {
        return metaInfo.metaKeywords();
      };
    }
  ]
);