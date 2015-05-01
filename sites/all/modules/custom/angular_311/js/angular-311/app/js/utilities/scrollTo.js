angular.module('scrollTo', [])

.run(
  [          '$rootScope',
    function ($rootScope) {

      /* scrollTo -
      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
      $rootScope.scrollTo = function(eID, scrollDiv) {

        /* currentYPosition -
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
        function currentYPosition() {
          // Firefox, Chrome, Opera, Safari
          if (window.pageYOffset) {
            return window.pageYOffset;
          }
          // Internet Explorer 6 - standards mode
          if (document.documentElement && document.documentElement.scrollTop) {
            return document.documentElement.scrollTop;
          }
          // Internet Explorer 6, 7 and 8
          if (document.body.scrollTop) {
            return document.body.scrollTop;
          }
          return 0;
        }

        /* scrollTo -
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
        function elmYPosition(eID) {
          if(eID) {
            var elm = document.getElementById(eID);
            var y = elm.offsetTop;
            var node = elm;
            while (node.offsetParent && node.offsetParent != document.body) {
              node = node.offsetParent;
              y += node.offsetTop;
            } return y;
          }
        }

        // This scrolling function 
        // is from http://www.itnewb.com/tutorial/Creating-the-Smooth-Scroll-Effect-with-JavaScript
        
        var i;
        var startY = currentYPosition();
        var stopY = elmYPosition(eID);
        var distance = stopY > startY ? stopY - startY : startY - stopY;
        if (distance < 100) {
          scrollTo(0, stopY); return;
        }
        var speed = Math.round(distance / 100);
        if (speed >= 20) speed = 20;
        var step = Math.round(distance / 25);
        var leapY = stopY > startY ? startY + step : startY - step;
        var timer = 0;
        if (stopY > startY) {
          for (i = startY; i < stopY; i += step) {
            setTimeout('window.scrollTo(0, '+leapY+')', timer * speed);
            leapY += step; if (leapY > stopY) leapY = stopY; timer++;
          } return;
        }
        for (i = startY; i > stopY; i -= step) {
          setTimeout('window.scrollTo(0, '+leapY+')', timer * speed);
          leapY -= step; if (leapY < stopY) leapY = stopY; timer++;
        }
      }
    }
  ]
);