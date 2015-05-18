'use strict';

angular.module('app.vocabulary', [
  'ui.router' 
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider, $urlRouterProvider) {

      $stateProvider
         
        // Base route handles getching data, sub-routing 
        .state("vocabulary", {
          url: "/vocabulary/:vid",
          template: '<div class="vocabulary vocabulary-{{type}}" ui-view></div>',
          data: { 
            title: 'Vocabulary',                 // Sets meta title
            description: 'About the about', // Sets different meta description
            keywords: 'About, this, page',  // Sets different meta keywords
          },
          resolve: {
            tree: function($stateParams, TaxonomyTerm) {
              return TaxonomyVocabularyTerms.query({vid: $stateParams.vid}).$promise.then(function(data) {
                return data;
              });
            }
          },
          controller: function($scope, $rootScope, $state, tree){
            $scope.tree = tree;

            //$scope.type = node.type[0].target_id;

            // Set route metadata
            // @todo: make this work
            //$state.$current.data.title = node.title[0].value;
            //@todo: keywords, description

            // Determine the appropriate sub-route
            /*$scope.$watch('tree', function() {
              $rootScope.goSubRoute('vocabulary', $scope.type);
            });*/           
          }
        })

        // Generic vocab template
        .state("vocabulary.base", {
          templateUrl: appUrl + 'views/vocabulary/vocabulary-base.html'
        })

        // FAQ depth 0
        .state("faq", {
          url: "answers?parent",
          templateUrl: appUrl + 'views/vocabulary/vocabulary-faq.html',
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
            $scope.parentTid = $state.params.parent;

            // Filter
            $scope.termNoParent = function(item) {
              return item.parent.length == 0;
            };
          }

        })

        // FAQ depth 1
        .state("faq.child", {
          url: ":tid?category&answer",
          templateUrl: appUrl + 'views/vocabulary/vocabulary-faq-child.html',
          data: { 
            title: 'FAQ',                 // Sets meta title
            description: 'About the about', // Sets different meta description
            keywords: 'About, this, page',  // Sets different meta keywords
          },
          controller: function($scope, $rootScope, $state, $filter, terms, Node){
            $scope.activeTerm = $filter('filter')(terms, { tid: $state.params.tid })[0];
            $scope.activeParent = $filter('filter')(terms, { tid: $scope.activeTerm.parent[0].id })[0];

            $scope.activeNid = $state.params.answer != undefined ? $state.params.answer : null;


            

            // @todo: put this in resolve
            Node.query({
              field_faq_category: $state.params.tid,
              sort: 'title',
              direction: 'ASC'
            }).$promise.then(function(data) {
              $scope.nodes = data.list;
            });


            // Filter
            
          }
        })


    }
  ]
)


