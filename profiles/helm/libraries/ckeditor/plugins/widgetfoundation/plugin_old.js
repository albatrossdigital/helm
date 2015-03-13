CKEDITOR.plugins.add( 'foundation', {
    requires: 'widget',

    icons: 'foundation',

    init: function( editor ) {
        //CKEDITOR.dialog.add( 'foundation2Col', this.path + 'dialogs/foundation2Col.js' );

        editor.widgets.add( 'foundation2Col', {

            button: 'Add two-column block',

            template:
                '<div class="row two-col">' +
                    '<div class="columns small-12 medium-3 col-1"><img src="http://placehold.it/300x250&text=Medium" /></div>' +
                    '<div class="columns small-12 medium-9 col-2"><p>Content...</p></div>' +
                '</div>',

            editables: {
                col1: {
                    selector: '.col-1',
                    allowedContent: 'p br ul ol li strong em img[!src,alt,width,height]'
                },
                col2: {
                    selector: '.col-2',
                    allowedContent: 'p br ul ol li strong em'
                }
            },

            allowedContent:
                'div(!row,two-col,align-left,align-right,align-center){width};' +
                'div(!columns,small-12,medium-3,medium-9,col-1,col-2)',

            requiredContent: 'div(two-col)',

            //dialog: 'foundation2Col',

            upcast: function( element ) {
                return element.name == 'div' && element.hasClass( 'two-col' );
            },

            init: function() {
                var width = this.element.getStyle( 'width' );
                if ( width )
                    this.setData( 'width', width );
                if ( this.element.hasClass( 'align-left' ) )
                    this.setData( 'align', 'left' );
                if ( this.element.hasClass( 'align-right' ) )
                    this.setData( 'align', 'right' );
                if ( this.element.hasClass( 'align-center' ) )
                    this.setData( 'align', 'center' );
            },

            data: function() {

                if ( this.data.width == '' )
                    this.element.removeStyle( 'width' );
                else
                    this.element.setStyle( 'width', this.data.width );

                this.element.removeClass( 'align-left' );
                this.element.removeClass( 'align-right' );
                this.element.removeClass( 'align-center' );
                if ( this.data.align )
                    this.element.addClass( 'align-' + this.data.align );
            }
        } );
    }
} );