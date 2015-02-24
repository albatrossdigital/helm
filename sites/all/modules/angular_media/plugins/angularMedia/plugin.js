/**
 * @file Plugin for replacing filebrowser dialog with dialog from Drupal media module
 */
(function($) {
  // Traverse through the content definition and attach mediabrowser to
  // elements with 'filebrowser' attribute.
  //
  // @param String
  //            dialogName Dialog name.
  // @param {CKEDITOR.dialog.definitionObject}
  //            definition Dialog definition.
  // @param {Array}
  //            elements Array of {@link CKEDITOR.dialog.definition.content}
  //            objects.


  

  function attachAngularMedia(editor, dialogName, definition, elements) {
    if (!elements || !elements.length)
      return;

    var element, fileInput;

    for (var i = elements.length; i--; ) {
      element = elements[ i ];

      if (element.type == 'hbox' || element.type == 'vbox' || element.type == 'fieldset')
        attachAngularMedia(editor, dialogName, definition, element.children);

      if (!element.filebrowser)
        continue;

      if (typeof element.filebrowser == 'string') {
        var fb = {
          action: (element.type == 'fileButton') ? 'QuickUpload' : 'Browse',
          target: element.filebrowser
        };
        element.filebrowser = fb;
      }

      if (element.filebrowser.action == 'Browse') {
        element.onClick = angularMedia;
        element.label = 'Upload/' + editor.lang.common.browseServer; // Fix language here.
        // Make sure the button is visible since we are handling it with media.
        element.hidden = false;
      } else if (element.filebrowser.action == 'QuickUpload' && element[ 'for' ]) {
        // We don't need two buttons, hide this one and just keep the browse button.
        element.hidden = true;
      }
    }
  }

  function angularMedia(evt) {
    var dialog = evt.data.dialog;
    // Media z-index is 10002 so we need to be below that.
    var dialogElement = dialog.getElement().getFirst();
    dialogElement.setStyle('z-index', 10001);
    // Invoke the media popup for file selection.

    // Invoke the Angular Media dialog
    $('#media_ckeditor_select').trigger('click');

    // Bind a watch on hidden value field to update CKEditor dialog
    $(document).ready(function() {
      
      setTimeout(function(){
        $('#media_ckeditor_media').bind('change', function() {

          var $that = $(this);
          
          setTimeout(function(){
            var files = JSON.parse($that.val());
            var file = files.pop();

            var parts = evt.sender.filebrowser.target.split(':');
            dialog.setValueOf(parts[0], parts[1], file.url);

            // @todo: make work with image2 ckeditor element
            // @todo: resize if width > 500px?
            setTimeout(function(){
            }, 100);

            // Add title/alt attr using default CKEditor image values.
            var altEl = dialog.getContentElement("info", "txtAlt");
            if (altEl) {
              altEl.setValue(file.alt != undefined ? file.alt : '');
            }
            // Try CKEditor defined title value first.
            var titleEl = dialog.getContentElement("info", "txtGenTitle");
            if (titleEl) {
              titleEl.setValue(file.title != undefined ? file.title : '');
            } else {
              // If it doesn't work, try a more generic ID.
              titleEl = dialog.getContentElement("info", "txtTitle");
              if (titleEl) {
                titleEl.setValue(file.title != undefined ? file.title : '');
              }
            }
          }, 100);

        });
      }, 500);

    });
  }

  CKEDITOR.plugins.add('angularMedia',
          {
            requires: ['dialog'],
            init: function(editor) {
              // Needed to keep things happy.
            }
          });

  CKEDITOR.on('dialogDefinition', function(evt) {
    var definition = evt.data.definition, element;
    // Associate mediabrowser to elements with 'filebrowser' attribute.
    for (var i = 0; i < definition.contents.length; ++i) {
      if ((element = definition.contents[ i ])) {
        // @todo: Change text to "Select" console.log(element);
        attachAngularMedia(evt.editor, evt.data.name, definition, element.elements);
        if (element.hidden && element.filebrowser && element.type != 'fileButton') {
          element.hidden = false;
        }
        // Hide the Image2 Upload tab
        if (element.id == 'Upload' && element.filebrowser != undefined && element.filebrowser == 'uploadButton') {
          element.hidden = true;
        }
      }
    }
  });

})(jQuery);
