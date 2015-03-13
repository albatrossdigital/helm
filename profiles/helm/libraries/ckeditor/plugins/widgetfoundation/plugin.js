CKEDITOR.plugins.add( 'widgetfoundation', {
    requires: 'widget',

    icons: 'widgetfoundationLeftCol,widgetfoundationRightCol,widgetfoundationTwoCol,widgetfoundationThreeCol,widgetfoundationThreeCol,widgetfoundationAccordion',

    defaults : {
        name: 'accordion',
        count: 3,
        activePanel: 1,
        multiExpand: false
    },

    init: function( editor ) {
        
        // Configurable settings
        var allowedFull = editor.config.widgetFoundation_allowedFull != undefined ? editor.config.widgetFoundation_allowedFull :
            'div(!row,two-col-left,two-col-right,accordion,two-col,three-col){width};' +
            'div(!columns,small-12,medium-3,medium-9,col-sidebar,col-main,col-1,col-2,col-3)';
        var allowedWidget = editor.config.widgetFoundation_allowedWidget != undefined ? editor.config.widgetFoundation_allowedFull :
            'p br ul ol li strong em img[!src,alt,width,height]';
        var allowedText = editor.config.widgetFoundation_allowedText != undefined ? editor.config.widgetFoundation_allowedFull :
            'p br ul ol li strong em';


        allowedWidget = 'img[!src,alt,width,height]';
        allowedText = allowedWidget;

        // Define the widgets
        editor.widgets.add( 'widgetfoundationLeftCol', {

            //button: 'Add left column box',

            template:
                '<div class="row two-col-left">' +
                    '<div class="columns small-12 medium-3 col-sidebar"><img src="http://placehold.it/300x250&text=Medium" /></div>' +
                    '<div class="columns small-12 medium-9 col-main"><p>Content...</p></div>' +
                '</div>',

            editables: {
                col1: {
                    selector: '.col-sidebar',
                    allowedContent: allowedWidget
                },
                col2: {
                    selector: '.col-main',
                    allowedContent: allowedText
                }
            },

            allowedContent: allowedFull,

            upcast: function( element ) {
                return element.name == 'div' && element.hasClass( 'two-col-right-left' );
            }
            
        } );

        editor.widgets.add( 'widgetfoundationRightCol', {

            //button: 'Add right column box',

            template:
                '<div class="row two-col-right">' +
                    '<div class="columns small-12 medium-9 col-main"><p>Content...</p></div>' +
                    '<div class="columns small-12 medium-3 col-sidebar"><img src="http://placehold.it/300x250&text=Medium" /></div>' +
                '</div>',

            editables: {
                col1: {
                    selector: '.col-sidebar',
                    allowedContent: allowedWidget
                },
                col2: {
                    selector: '.col-main',
                    allowedContent: allowedText
                }
            },

            allowedContent: allowedFull,

            upcast: function( element ) {
                return element.name == 'div' && element.hasClass( 'two-col-right' );
            }

        } );

        editor.widgets.add( 'widgetfoundationTwoCol', {

            //button: 'Add two column box',

            template:
                '<div class="row two-col">' +
                    '<div class="columns small-12 medium-6 col-1">Content</div>' +
                    '<div class="columns small-12 medium-6 col-2">Content</div>' +
                '</div>',

            editables: {
                col1: {
                    selector: '.col-1',
                    allowedContent: allowedWidget
                },
                col2: {
                    selector: '.col-2',
                    allowedContent: allowedWidget
                }
            },

            allowedContent: allowedFull,

            upcast: function( element ) {
                return element.name == 'div' && element.hasClass( 'two-col' );
            }

        } );

        editor.widgets.add( 'widgetfoundationThreeCol', {

            //button: 'Add three column box',

            template:
                '<div class="row three-col">' +
                    '<div class="columns small-12 medium-4 col-1"><img src="http://placehold.it/300x250&text=Medium" /><p>Text below</p></div>' +
                    '<div class="columns small-12 medium-4 col-2"><img src="http://placehold.it/300x250&text=Medium" /><p>Text below</p></div>' +
                    '<div class="columns small-12 medium-4 col-3"><img src="http://placehold.it/300x250&text=Medium" /><p>Text below</p></div>' +
                '</div>',

            editables: {
                col1: {
                    selector: '.col-1',
                    allowedContent: allowedWidget
                },
                col2: {
                    selector: '.col-2',
                    allowedContent: allowedWidget
                },
                col3: {
                    selector: '.col-3',
                    allowedContent: allowedWidget
                }
            },

            allowedContent: allowedFull,

            upcast: function( element ) {
                return element.name == 'div' && element.hasClass( 'three-col' );
            }

        } );

        CKEDITOR.dialog.add( 'widgetfoundationAccordion', this.path + 'dialogs/widgetfoundationAccordion.js' );
        editor.widgets.add( 'widgetfoundationAccordion', {

            button: 'Add accordion box',

            template:
                '<dl class="accordion" data-accordion><div class="col-1"></div></dl>',
     

            allowedContent: allowedFull,

            dialog: 'widgetfoundationAccordion',

            upcast: function( element ) {
                return element.name == 'div' && element.hasClass( 'accordion' );
            },

            /*init: function() {
                var width = this.element.getStyle( 'width' );
                if ( width )
                    this.setData( 'width', width );
                if ( this.element.hasClass( 'align-left' ) )
                    this.setData( 'align', 'left' );
                if ( this.element.hasClass( 'align-right' ) )
                    this.setData( 'align', 'right' );
                if ( this.element.hasClass( 'align-center' ) )
                    this.setData( 'align', 'center' );
            },*/

            data: function() {

 
                var name = this.data.name != undefined ? this.data.name : 'accordion';
                var count = this.data.count != undefined ? this.data.count : 0;
                console.log(count);
                //@todo: var prevCount = this.data.prevCount != undefined ? this.data.prevCount : 

                // Add rows
                if (this.data.prevCount == undefined || this.data.prevCount < count) {
                    for (var i=this.data.prevCount != undefined ? this.data.prevCount : 1; i<=count; i++) {
                        var active = this.data.activePanel == i ? ' active' : '';
                        var template = 
                            '<dd class="accordion-navigation">' +
                                '<a href="#'+ name+i +'"><div class="accordion-header-'+i+'">Heading '+i+'</div></a>' +
                                '<div id="panel'+ name+i +'" class="content content-'+i+active+'">' +
                                  '' +
                                '</div>'
                            '</dd>'
                        var newPanel = CKEDITOR.dom.element.createFromHtml( template );
                        this.element.append(newPanel);
                    }

                    // For some reason, the initEditable call needs to come in a separate for loop
                    // the html code added wasn't in the DOM yet
                    for (var i=this.data.prevCount != undefined ? this.data.prevCount : 1; i<=count; i++) {
                        this.initEditable( 'heading'+i, {
                            selector: '.accordion-header-'+i
                        } );
                        this.initEditable( 'content'+i, {
                            selector: '.content-'+i
                        } ); 
                    }
                }

                // Remove rows
                if (this.data.prevCount != undefined && this.data.prevCount > count) {
                    // @todo
                }
                

                this.data.prevCount = i;
            }
        } );

        // Add the dropdown menu
        var items = {
            widgetfoundationLeftCol: {
                label: 'Insert left column box',
                command: 'widgetfoundationLeftCol',
                group: 'widgetfoundation',
                icon: 'widgetfoundationLeftCol'
            },
            widgetfoundationRightCol: {
                label: 'Insert right column box',
                command: 'widgetfoundationRightCol',
                group: 'widgetfoundation',
                icon: 'widgetfoundationRightCol'
            },
            widgetfoundationTwoCol: {
                label: 'Insert two column box',
                command: 'widgetfoundationTwoCol',
                group: 'widgetfoundation',
                icon: 'widgetfoundationTwoCol'
            },
            widgetfoundationThreeCol: {
                label: 'Insert three column box',
                command: 'widgetfoundationThreeCol',
                group: 'widgetfoundation',
                icon: 'widgetfoundationThreeCol'
            },
            widgetfoundationAccordion: {
                label: 'Insert accordion box',
                command: 'widgetfoundationAccordion',
                group: 'widgetfoundation',
                icon: 'widgetfoundationAccordion'
            },
            /*fontawesome: {
                label: 'Insert icon',
                // Let's use existing commands.
                command: 'fontawesome',
                group: 'some_group',
                icon: 'fontawesome'
            },*/
            /*leaflet: {
                label: 'Insert map',
                // Let's use existing commands.
                command: 'leaflet',
                group: 'some_group',
                icon: 'leaflet'
            },*/

        };

        // Items must belong to a group.
        editor.addMenuGroup( 'widgetfoundation' );
        editor.addMenuItems( items );

        console.log(this);
        editor.ui.add( 'Template', CKEDITOR.UI_MENUBUTTON, {
            label: 'Template',
            // Let's use an existing icon.
            icon: this.path + 'icons/widget.png' ,
            onMenu: function() {
                // You can control the state of your commands live, every time
                // the menu is opened.
                return {
                    widgetfoundationLeftCol: editor.commands.widgetfoundationLeftCol.state,
                    widgetfoundationRightCol: editor.commands.widgetfoundationRightCol.state,
                    widgetfoundationTwoCol: editor.commands.widgetfoundationTwoCol.state,
                    widgetfoundationThreeCol: editor.commands.widgetfoundationThreeCol.state,
                    widgetfoundationAccordion: editor.commands.widgetfoundationAccordion.state
                };
            }
        } );

        // Append the widget's styles when in the CKEditor edit page,
        // added for better user experience.
        // Assign or append the widget's styles depending on the existing setup.
        if (typeof editor.config.contentsCss == 'object') {
            editor.config.contentsCss.push(CKEDITOR.getUrl(this.path + 'contents.css'));
        }

        else {
            editor.config.contentsCss = [editor.config.contentsCss, CKEDITOR.getUrl(this.path + 'contents.css')];
        }
    }


} );