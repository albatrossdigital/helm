CKEDITOR.plugins.add( 'widgettemplatemenu', {
    requires: 'menu',

    defaults : {
        name: 'accordion',
        count: 3,
        activePanel: 1,
        multiExpand: false
    },

    init: function( editor ) {
        
        // Set the default button info based on installed plugins
        var buttonData = {};
        // @todo: make these if statement work
        //if (editor.commands.widgetcommonBox != undefined) {
            buttonData.widgetcommonBox = 'Insert box';
            buttonData.widgetcommonQuotebox = 'Insert quote box';
        //}
        //if (editor.commands.widgetfoundationLeftCol != undefined) {
            buttonData.widgetfoundationLeftCol = 'Insert left column template';
            buttonData.widgetfoundationRightCol = 'Insert right column template';
            buttonData.widgetfoundationTwoCol = 'Insert two column template';
            buttonData.widgetfoundationThreeCol = 'Insert three column template';
            buttonData.widgetfoundationAlert = 'Insert Alert box';
            buttonData.widgetfoundationAccordion = 'Insert accordion box';
        //}
        //if (editor.commands.oembed != undefined) {
            buttonData.oembed = 'Insert media';
        //}
        //if (editor.commands.codeSnippet != undefined) {
            buttonData.codeSnippet = 'Insert code snippet';
        //}
        //if (editor.commands.leaflet != undefined) {
            buttonData.leaflet = 'Insert map';
        //}
        //if (editor.commands.FontAwesome != undefined) {
            buttonData.FontAwesome = 'Insert icon';
        //}

        // Get the enabled menu items from editor.config
        if (editor.config.widgettemplatemenuButtons != undefined) {
            var config = editor.config.widgettemplatemenuButtons.split(',');
            var buttons = {};
            for (var i = 0; i < config.length; i++) {
                buttons[config[i]] = buttonData[config[i]];
            }
        }
        else {
            var buttons = buttonData;
        }
        
        // Build the list of menu items
        var items =  {};
        for(var key in buttons) {
            items[key] = {
                label: buttons[key],
                command: key,
                group: 'widgettemplatemenu',
                icon: key
            }
        }

        // Items must belong to a group.
        editor.addMenuGroup( 'widgettemplatemenu' );
        editor.addMenuItems( items );

        editor.ui.add( 'WidgetTemplateMenu', CKEDITOR.UI_MENUBUTTON, {
            label: 'Insert Template',
            icon: this.path + 'icons/widgettemplatemenu.png' ,
            onMenu: function() {
                // You can control the state of your commands live, every time
                // the menu is opened.
                return {
                    widgetcommonBox: editor.commands.widgetcommonBox == undefined ? false : editor.commands.widgetcommonBox.state,
                    widgetcommonQuotebox: editor.commands.widgetcommonQuotebox == undefined ? false : editor.commands.widgetfoundationLeftCol.state,
                    widgetfoundationLeftCol: editor.commands.widgetfoundationLeftCol == undefined ? false : editor.commands.widgetfoundationLeftCol.state,
                    widgetfoundationRightCol: editor.commands.widgetfoundationRightCol == undefined ? false : editor.commands.widgetfoundationRightCol.state,
                    widgetfoundationTwoCol: editor.commands.widgetfoundationTwoCol == undefined ? false : editor.commands.widgetfoundationTwoCol.state,
                    widgetfoundationThreeCol: editor.commands.widgetfoundationThreeCol == undefined ? false : editor.commands.widgetfoundationThreeCol.state,
                    widgetfoundationAlert: editor.commands.widgetfoundationAlert == undefined ? false : editor.commands.widgetfoundationAlert.state,
                    widgetfoundationAccordion: editor.commands.widgetfoundationAccordion == undefined ? false : editor.commands.widgetfoundationAccordion.state,
                    oembed: editor.commands.oembed == undefined ? false : editor.commands.oembed.state,
                    codeSnippet: editor.commands.codeSnippet == undefined ? false : editor.commands.codeSnippet.state,
                    leaflet: editor.commands.leaflet == undefined ? false : editor.commands.leaflet.state,
                    FontAwesome: editor.commands.FontAwesome == undefined ? false : editor.commands.FontAwesome.state
                };
            }
        } );
        
    }


} );