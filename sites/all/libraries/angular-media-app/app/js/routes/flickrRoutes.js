'use strict';

angular.module('app.flickr', [
  'ui.router',
  'ngResource'
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider, $urlRouterProvider) {
      $stateProvider
        
         .state("modal.flickr", {
          //url: "/flickr",
          templateUrl: appUrl + 'views/flickr.html',
          controller: function($scope, $rootScope, $state, Flickr, CoreFile){
            $scope.filters = {
              method: 'flickr.photos.search',
              tags: 'baltimore',
              license: '4,5',
              page: 1
            };

            $scope.licenses = Flickr.load({method: 'flickr.photos.licenses.getInfo'});

            $scope.selected = [];
            $scope.active = undefined;
            
            $scope.loadItems = function(push) {
              Flickr.load($scope.filters, function(data) {
                var structured = [];
                angular.forEach(data.photos.photo, function(item, key) {
                  structured.push({
                    thumbUrl: 'https://farm' + item.farm + '.staticflickr.com/'+ item.server +'/'+ item.id + '_'+ item.secret +'_q.jpg',
                    name: item.title,
                    id: item.id,
                    secret: item.secret,
                    farm: item.farm,
                    server: item.server,
                  });
                });
                if (push !== undefined && push == true) {
                  $scope.items = $scope.items != undefined ? $scope.items : [];
                  Array.prototype.push.apply($scope.items, structured);
                }
                else {
                  $scope.items = structured;
                }
              });
            }

            $scope.updateFilters = function($event) {
              $scope.filters.page = 1;
              $scope.items = $scope.loadItems();
              if ($event != undefined) {
                $event.preventDefault();
              }
            }
            $scope.updateFilters();
            
            $scope.updateActive = function(item) {
              if (item != undefined) {
                if ($rootScope.settings[$rootScope.activeField].multiple && item.active) {
                  item.active = false;
                  angular.forEach($scope.selected, function(activeItem, key) {
                    if (activeItem.id == item.id) {
                      $scope.selected.splice(key, 1);
                    }
                  });
                }
                else {
                  $scope.active = item;
                  if ($rootScope.settings[$rootScope.activeField].multiple) {
                    item.active = true;
                  }
                  else {
                    angular.forEach($scope.items, function(activeItem, key) {
                      $scope.items[key].active = activeItem.id == item.id ? true : false;
                    });
                  }
                  Flickr.load({method: 'flickr.photos.getInfo', photo_id: item.id, secret: item.secret}, function(data) {
                    $scope.active.previewUrl = 'https://farm' + item.farm + '.staticflickr.com/'+ item.server +'/'+ item.id + '_'+ item.secret +'_m.jpg';
                    //$scope.active.url = 'https://farm' + item.farm + '.staticflickr.com/'+ item.server +'/'+ item.id + '_'+ item.secret +'.jpg';  // @todo: try to get original?
                    $scope.active.name = data.photo.title._content;
                    $scope.active.alt = $scope.active.name;
                    $scope.active.filename = $scope.active.name + '.jpg';
                    $scope.active.source = data.photo.urls.url[0]._content;
                    $scope.active.user = data.photo.owner.realname ? data.photo.owner.realname : data.photo.owner.username;
                    $scope.active.userLink = 'https://www.flickr.com/people/'+ data.photo.owner.nsid;
                    $scope.active.title = $scope.active.user + ' on Flickr';
                    $scope.active.license = data.photo.license;
                    $scope.active.licenseMeta = $scope.licenses.licenses.license[data.photo.license];
                    
                    Flickr.load({method: 'flickr.photos.getSizes', photo_id: item.id, secret: item.secret}, function(data) {
                      var size = data.sizes.size.pop();
                      $scope.active.width = size.width;
                      $scope.active.height = size.height;
                      $scope.active.url = size.source;

                      if ($rootScope.settings[$rootScope.activeField].multiple) {
                        $scope.selected.push($scope.active);
                      }
                      else {
                        $scope.selected = [$scope.active];
                      }
                    });

                  });
                  
                }
              }
            }

            $scope.submit = function($event) {
              $scope.queue = {total: $scope.selected.length, completed: 0, files: []};
              angular.forEach($scope.selected, function(item, key) {
                var file = new CoreFile(item);
                
                file.$save(function(data) {
                  $scope.queue.completed ++;
                  $scope.queue.files[key] = data;
                  $scope.queue.progress = $scope.queue.completed / $scope.queue.total;

                  // Done processing queue
                  if ($scope.queue.completed >= $scope.queue.total) {
                    Array.prototype.push.apply($rootScope.files[$rootScope.activeField], $scope.queue.files);
                    jQuery('#'+$rootScope.activeField+'_media').trigger('change');
                    $scope.queue = undefined;
                    $state.go('base');
                  }
                });

              });

              $event.preventDefault();
            }
            
            /*$scope.constructUrl = function(item, size) {
              size = size == undefined ? '' : '_' + size;
              return 'https://farm'+item.farm+'.staticflickr.com/'+item.server+'/'+item.id+'_'+item/secret+size+'.jpg';
            }*/
          }
        })



    }
  ]
)







