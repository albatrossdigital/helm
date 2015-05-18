'use strict';

angular.module('app.faq', [
  'ui.router' 
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider, $urlRouterProvider) {

      // $urlRouterProvider.rule(function ($injector, $location) {
      //   var path  = $location.path();
      //   if(path.length && path.match(/answers\/([0-9]*)$/i)) {
      //     $location.replace().path(path + "/list");
      //   }
      // });
      
      //$urlRouterProvider.when(/answers\/[0-9]*$/i, '/index');

      $urlRouterProvider.when('', '/answers');

      $stateProvider
        // FAQ depth 0
        .state("faq", {
          url: "/answers",
          templateUrl: appUrl + 'views/faq/faq.html',
          data: { 
            title: 'FAQ',                 // Sets meta title
            description: 'About the about', // Sets different meta description
            keywords: 'About, this, page',  // Sets different meta keywords
          },
          resolve: {
            terms: function($stateParams, TaxonomyTerm) {
              return TaxonomyTerm.query({
                vocabulary: vocabularyVid,
                sort: 'weight',
                direction: 'ASC'
              }).$promise.then(function(data) {
                return data.list;
              });
            }
          },
          controller: function($scope, $rootScope, $state, terms){
            $scope.terms = terms;
            $scope.active = null;
            $scope.childOpen = false;

            $scope.open = function(item) {
              $scope.active = item;
            }

            $scope.openChildren = function() {
              $scope.childOpen = true;
            }

            // var tid = $state.params.tid,
            //     nid = $state.params.nid ? $state.params.nid : 'list';

            // if(tid) {
            //   $state.go('faq.child.answers', {tid: tid, nid: nid});
            // }
          }

        })

        // FAQ depth 1
        .state("faq.child", {
          url: "/:tid",
          templateUrl: appUrl + 'views/faq/faq-child.html',
          data: { 
            title: 'FAQ',                 // Sets meta title
            description: 'About the about', // Sets different meta description
            keywords: 'About, this, page',  // Sets different meta keywords
          },
          controller: function($scope, $rootScope, $state, $filter, terms, Node){
            $scope.activeTerm = $filter('termByTid')(terms, $state.params.tid);
            $scope.activeParent = $filter('termByTid')(terms, $scope.activeTerm.parent[0].id);
            $state.go('faq.child.answers', {nid: 'list'});
          }
        })

        // FAQ depth 2
        .state("faq.child.answers", {
          url: "/:nid",
          templateUrl: appUrl + 'views/faq/faq-child-answers.html',
          data: { 
            title: 'FAQ',                 // Sets meta title
            description: 'About the about', // Sets different meta description
            keywords: 'About, this, page',  // Sets different meta keywords
          },
          controller: function($scope, $rootScope, $state, $filter, Node){

            $scope.activeNid = $state.params.nid != 'list' ? $state.params.nid : null;

            // @todo: put this in resolve
            Node.query({
              field_faq_category: $state.params.tid,
              sort: 'title',
              direction: 'ASC'
            }).$promise.then(function(data) {
              $scope.nodes = data.list;
            });
            
          }
        })
    }
  ]
)