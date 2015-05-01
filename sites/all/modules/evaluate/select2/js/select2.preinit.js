/**
 * @file
 * Preinit functions for Select2 integration
 */

(function ($) {

  Drupal.select2functions = {};

  if (Drupal.Select2 != undefined && Drupal.Select2.base_root != undefined) {

    Drupal.Select2.current_exludes = false;

    if (Drupal.Select2.settings_updated == undefined) {

      Drupal.Select2.settings_updated = false;
      Drupal.Select2.current_exludes = false;

      var setting_update_url = Drupal.Select2.base_root + 'select2/ajax/get_settings';

      var jqxhr = $.ajax(setting_update_url)
        .done(function (data) {
          if (data[0] != undefined && data[0].settings != undefined && data[0].settings.select_2 != undefined && data[0].settings.select_2.excludes != undefined) {

            Drupal.Select2.current_exludes = data[0].settings.select_2.excludes;

          }
        })
        .fail(function () {
          console.error('Error: while updating Select2 setting by ajax request.');
        })
        .always(function () {

          $(document).trigger('select2_settings_updated');

        });
    }
  }

})(jQuery);
