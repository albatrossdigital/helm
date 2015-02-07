(function ($) {

Drupal.behaviors.soar_faq_view = {
  attach: function (context, settings) {

    var $sidebar = $('.view-faq-home.view-display-id-block_1');

    // Everytime the view is updated
    $('select[name^=tid]', context).once(function() {
      $(document).foundation();
    });

    // Once per page load
    $sidebar.once(function() {
      $(this).find('a[rel='+ $('select[name^=tid]').val() + ']').parents('li:eq(0)').addClass('highlighted');

      $('.view-faq-home.view-display-id-block_1 a').bind('click', function(e){
        $select = $('select[name^=tid]');
        var tid = $(this).prop('rel');
        $('.view-faq-home.view-display-id-block_1 .highlighted').removeClass('highlighted');

        if ($select.val() == tid) {
          $select.val('');
        }
        else {
          $select.val(tid);
          $(this).parents('li:eq(0)').addClass('highlighted');
        }
        
        $select.parents('form').find('.form-submit').trigger('click');
        e.preventDefault();
      });
    });
  }
};

})(jQuery);
