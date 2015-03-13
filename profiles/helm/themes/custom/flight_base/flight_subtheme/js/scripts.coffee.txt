(($, Drupal, Foundation) ->
  Drupal.behaviors.flight_subtheme = attach: (context, settings) ->
    
    # waits for image(s) to load then calls callback
    triggerImageSize = ($image, callback) ->
      unless $image.hasClass("size-processing")
        $image.addClass "size-processing"
        $image.waitForImages
          finished: ->
            callback()
            $image.removeClass "size-processing"
            return

          each: $.noop
          waitForAll: true

      return

    reg = new RegExp("/" + window.location.host + "/")
    $("a").each ->
      unless reg.test(@href)
        $(this).click (event) ->
          event.preventDefault()
          event.stopPropagation()
          window.open @href, "_blank"
          return

      return

    
    # orbits helper
    $("ul[data-orbit]", context).once "orbit-helper", ->
      $orbit = $(this)
      $orbitImage = $orbit.children("li:last-child")
      $orbit.on "before-slide-change.fndtn.orbit", () ->
        $orbit.addClass "orbit-transitioning"

        return

      $orbit.on "after-slide-change.fndtn.orbit", () ->
        $orbit.removeClass "orbit-transitioning"

        return


      # on interchage changes, watch images again
      $(document).on "replace", "img", () ->
        triggerImageSize $orbitImage, ->
          $(window).trigger "resize"
          return

        return

      # Call resize to init theme js
      $(window).trigger('resize')

      return

    return

  return

) jQuery, Drupal, Foundation