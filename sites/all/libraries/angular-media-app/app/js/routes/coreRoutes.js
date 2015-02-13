'use strict';

angular.module('app.core', [
  'ui.router',
  'angularFileUpload'
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider, $urlRouterProvider) {
      
      //$urlRouterProvider
      //  .when('/', '/flickr');

      $stateProvider
        
        .state("base", {})

        .state("modal.edit", {
          controller: 'edit',
          params: {fid: null},
          templateUrl: appUrl + 'views/edit.html',
        })

        .state("modal", {
          templateUrl: appUrl + 'views/modal.html',
          controller: 'modal',
          onEnter: function($state){
            // Hitting the ESC key closes the modal
            $(document).on('keyup', function(e){
              if(e.keyCode == 27){
                $(document).off('keyup')
                $state.go('base')
              }
            });

            // Clicking outside of the modal closes it
            $(document).on('click', '.modal-backdrop, .modal-holder', function() {
              $state.go('base');
            });

            // Clickin on the modal or it's contents doesn't cause it to close
            $(document).on('click', '.modal-box, .modal-box *', function(e) {
              e.stopPropagation();
            });
          },
          abstract: true
        })

        .state("modal.upload", {
          //url: "/upload",
          templateUrl: appUrl + 'views/upload.html',
          controller: 'upload'
        })

        .state("modal.browse", {
          //url: "/browse/:person",
          params: {person: 'all'},
          templateUrl: appUrl + 'views/browse.html',
          controller: 'browse'
        })
    }
  ]
)


.controller('modal', function($scope, $rootScope, $state, $stateParams){
  $scope.activeTab = $state.current.controller;
  $scope.loadTab = function(item) {
    $scope.activeTab = item.key;
    $state.go('modal.'+item.key, item.params);
  }
})


.controller('edit', function($scope, $rootScope, $state, $stateParams, CoreFile){
  $scope.file = CoreFile.load({fid: $stateParams.fid});
  //$scope.file = {"fid":"751","uid":"1","filename":"Screenshot from 2015-02-03 11:11:12.png","uri":"public:\/\/Screenshot from 2015-02-03 11:11:12_2.png","filemime":"image\/png","filesize":"64589","status":"1","timestamp":"1423351943","type":"image","uuid":"f4e26223-d898-4048-b055-771d2137b7c6","field_file_image_alt_text":[],"field_file_image_title_text":[],"rdf_mapping":[],"metadata":{"height":829,"width":958},"alt":null,"title":null,"focal_point":"","width":"958","height":"829","thumbUrl":"http:\/\/liftoff.local\/sites\/liftoff.local\/files\/styles\/media_thumbnail\/public\/Screenshot%20from%202015-02-03%2011%3A11%3A12_2.png?itok=qHOiYheI","previewUrl":"http:\/\/liftoff.local\/sites\/liftoff.local\/files\/styles\/media_preview\/public\/Screenshot%20from%202015-02-03%2011%3A11%3A12_2.png?itok=NldcapEL","cropUrl":"http:\/\/liftoff.local\/sites\/liftoff.local\/files\/styles\/media_crop\/public\/Screenshot%20from%202015-02-03%2011%3A11%3A12_2.png?itok=lYP1ycJ0","name":"Screenshot from 2015-02-03 11:11:12.png"};
})


.controller('browse', function($scope, $rootScope, $state, $stateParams, CoreBrowser, CoreFile){
  $scope.filters = {
    page: 1,
    person: $stateParams.person
  };
  console.log($stateParams);

  $scope.selected = [];
  $scope.items = [];

  $scope.loadItems = function(push) {
    CoreBrowser.query($scope.filters, function(data) {
      if (push !== undefined && push == true) {
        Array.prototype.push.apply($scope.items, data);
      }
      else {
        $scope.items = data;
      }
      console.log($scope.items);
    });
  }

  $scope.updateFilters = function($event) {
    $scope.filters.page = 1;
    $scope.items = $scope.loadItems();
    //$scope.photos.constructUrl(item);
    if ($event != undefined) {
      $event.preventDefault();
    }
  }
  $scope.updateFilters();

  $scope.updateActive = function(item) {
    if (item != undefined) {
      if ($rootScope.multiple && item.active) {
        item.active = false;
        angular.forEach($scope.selected, function(activeItem, key) {
          if (activeItem.id == item.id) {
            $scope.selected.splice(key, 1);
          }
        });
      }
      else {
        $scope.active = item;
        if ($rootScope.multiple) {
          item.active = true;
          $scope.active = item;
        }
        else {
          angular.forEach($scope.items, function(activeItem, key) {
            $scope.items[key].active = activeItem.id == item.id ? true : false;
          });
        }
        if ($rootScope.multiple) {
          $scope.selected.push(item);
        }
        else {
          $scope.selected = [item];
        }
        CoreFile.load({fid: item.fid}, function(data) {
          $scope.active = data;
          console.log('corefile data', data);
        });
      }
    }
  }

  $scope.submit = function($event) {
    //$scope.filters.page++;
    console.log($scope.selected);

    Array.prototype.push.apply($rootScope.files, $scope.selected);
    jQuery('#'+$rootScope.fieldName+'_media').trigger('change');
    $state.go('base');
    $event.preventDefault();

    //var newData = Flickr.load($scope.filters);
    //Array.prototype.push.apply($scope.items, newData);
  }

  $scope.addItems = function() {
    /*console.log('add');
    $scope.filters.page++;
    var newData = $scope.loadItems();
    Array.prototype.push.apply($scope.items, newData);*/
  }

})




.controller('upload', function($scope, $rootScope, $state, $stateParams, FileUploader){
  $scope.uploading = false;
  $scope.selected = [];

  var uploader = $scope.uploader = new FileUploader({
    url: $rootScope.apiUrlUpload + 'upload',
    autoUpload: true
  });
  uploader.onAfterAddingFile = function(fileItem) {
    fileItem.showThumb = fileItem.file.type.indexOf('image') != -1 ? true : false;
  };
  uploader.onBeforeUploadItem = function(item) {   
    $scope.uploading = true;
  };
  uploader.onSuccessItem = function(fileItem, response, status, headers) {
    console.info('onSuccessItem', fileItem, response, status, headers);
    $scope.selected.push(response);
    fileItem.details = response;
    console.log(fileItem);
  };
  uploader.onCompleteAll = function() {
    console.info('onCompleteAll');
    $scope.uploading = false;
  };

  $scope.fileDetails = function(key, file) {
    if (file.details != undefined && $scope.file != file) {
      $scope.file = file.details;
      $scope.activeKey = key;
    }
    else {
      $scope.file = undefined;
      $scope.activeKey = -1;
    }
  }

  $scope.submit = function($event) {
    //$scope.filters.page++;
    console.log($scope.selected);

    Array.prototype.push.apply($rootScope.files, $scope.selected);
    jQuery('#'+$rootScope.fieldName+'_media').trigger('change');
    $scope.selected = [];
    $state.go('base');

    $event.preventDefault();

    //var newData = Flickr.load($scope.filters);
    //Array.prototype.push.apply($scope.items, newData);
  }
  

  // CALLBACKS

  /*      uploader.onWhenAddingFileFailed = function(item, filter, options) {
            console.info('onWhenAddingFileFailed', item, filter, options);
        };
        uploader.onAfterAddingFile = function(fileItem) {
            console.info('onAfterAddingFile', fileItem);
        };
        uploader.onAfterAddingAll = function(addedFileItems) {
            console.info('onAfterAddingAll', addedFileItems);
        };
        uploader.onBeforeUploadItem = function(item) {
            console.info('onBeforeUploadItem', item);
        };
        uploader.onProgressItem = function(fileItem, progress) {
            console.info('onProgressItem', fileItem, progress);
        };
        uploader.onProgressAll = function(progress) {
            console.info('onProgressAll', progress);
        };
        uploader.onSuccessItem = function(fileItem, response, status, headers) {
            console.info('onSuccessItem', fileItem, response, status, headers);
        };
        uploader.onErrorItem = function(fileItem, response, status, headers) {
            console.info('onErrorItem', fileItem, response, status, headers);
        };
        uploader.onCancelItem = function(fileItem, response, status, headers) {
            console.info('onCancelItem', fileItem, response, status, headers);
        };
        uploader.onCompleteItem = function(fileItem, response, status, headers) {
            console.info('onCompleteItem', fileItem, response, status, headers);
        };
        uploader.onCompleteAll = function() {
            console.info('onCompleteAll');
        };*/
});
