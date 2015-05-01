/**
 * @file
 * Select2 integration
 *
 */
(function ($) {

  var jqversion = jQuery.fn.jquery;

  var jqVersionSplited = jqversion.split('.');

  Drupal.select2functions.formatSelection_taxonomy_terms_item = function (term) {

    if (term.hover_title != undefined) {
      return term.hover_title;
    }

    return term.text;
  };

  Drupal.select2functions.formatResult_taxonomy_terms_item = function (term) {

    var attributes = '';
    var prefix = '';

    if (term.hover_title != undefined) {
      attributes = 'title="' + term.hover_title + '" ';
      prefix = '<span class="visible-on-hover">' + term.hover_title + '</span>';
    }

    return '<span class="taxonomy_terms_item" ' + attributes + '>' + term.text + ' </span>' + prefix;
  };

  Drupal.select2functions.ac_format_result = function (result) {
    return result.text;
  };

  Drupal.select2functions.ac_fiels_FormatSelection = function (item) {
    return item.text;
  };

  Drupal.select2functions.ac_s2_init_selecttion = function (element, callback) {
    var def_values = $(element).select2('val');

    callback({
      id: def_values,
      text: def_values
    });

  };

  Drupal.select2functions.taxonomy_term_ref_ac_s2_init_selecttion = function (element, callback) {

    var def_values = $(element).select2('val');

    if (typeof (def_values) == 'string') {

      var label = def_values;
      label = label.replace(/{{;}}/g, ',').replace(/""/g, '"').quote_trim();

      callback({
        id: def_values,
        text: label
      });
    } else if (typeof (def_values) == 'object') {

      data = [];
      for (var i = 0; i < def_values.length; i++) {

        var label = def_values[i];
        label = label.replace(/{{;}}/g, ',').replace(/""/g, '"').quote_trim();

        data.push({
          id: def_values[i],
          text: label
        });
      }
      callback(data);
    }

  };

  Drupal.select2functions.ac_element_get_ajax_object = function (options) {
    return {
      url: function (term) {
        return Drupal.settings.basePath + options.autocomplete_path + '/' + Drupal.encodePath(term);
      },
      dataType: 'json',
      quietMillis: 100,
      results: function (data) {
        // notice we return the value of more so Select2 knows if more results can be loaded

        var results_out = [];

        $.each(data, function (id, title) {
          results_out.push({
            id: id,
            text: title
          });
        });

        return {
          results: results_out
        };
      },
      params: {
        error: function (jqXHR, textStatus, errorThrown) {
          if (textStatus == 'abort') {

          }
        }
      }
    };
  };

  String.prototype.quote_trim = function () {

    var expr = /^".*?"$/g;

    if (expr.test(this)) {
      return this.replace(/"$/, '').replace(/^"/, '');
    }

    return this.toString();
  };

  $.fn.atachSelect2 = function () {
    return this.each(function (index) {

      var $element = $(this);

      if ($element.hasClass('select2-excluded')) {
        return;
      }

      var id = $element.attr('id');

      var skip_element = false;

      if (id != undefined) {
        var excludeIds = Drupal.settings.select_2.excludes.by_id.values;
        if ($.inArray(id, excludeIds) >= 0) {
          return;
        } else if (Drupal.settings.select_2.excludes.by_id.reg_exs.length > 0) {
          // check by regexs for ids
          for (i = 0; i < Drupal.settings.select_2.excludes.by_id.reg_exs.length; ++i) {
            var regex = new RegExp(Drupal.settings.select_2.excludes.by_id.reg_exs[i], "ig");

            if (regex.test(id)) {
              return;
            }
          }
        }
      }

      if (Drupal.settings.select_2.excludes.by_class.length > 0) {
        for (i = 0; i < Drupal.settings.select_2.excludes.by_class.length; ++i) {
          if ($element.hasClass(Drupal.settings.select_2.excludes.by_class[i])) {
            return;
          }
        }
      }

      var options = {
        //'containerCssClass': '',
        'adaptContainerCssClass': function (clazz) {},
        'width': 'element',
      };

      //merging default setting with defined in config defaults
      $.extend(true, options, Drupal.settings.select_2.default_settings);

      if (id != undefined &&
        ($element.attr('type') == 'hidden' || $element.attr('type') == 'text')) {

        if (Drupal.settings.select_2.elements[id].data == undefined &&
          Drupal.settings.select_2.elements[id].query == undefined &&
          Drupal.settings.select_2.elements[id].ajax == undefined &&
          Drupal.settings.select_2.elements[id].tags == undefined) {

          //for hidden elements "data" or "query" properties mus be defined
          console.error('Error: Can\'t attach Select2 plugin - data source not defined, you must define one of following properties in options: "data", "query", "ajax" or "tags"!');
          skip_element = true;
        } else {

          if (Drupal.settings.select_2.elements[id].data == undefined) {
            if (Drupal.settings.select_2.elements[id].ajax != undefined &&
              typeof (Drupal.settings.select_2.elements[id].ajax) == 'string' &&
              Drupal.select2functions[Drupal.settings.select_2.elements[id].ajax] != undefined) {

              Drupal.settings.select_2.elements[id].ajax = Drupal.select2functions[Drupal.settings.select_2.elements[id].ajax](Drupal.settings.select_2.elements[id]);

            } else if (Drupal.settings.select_2.elements[id].query != undefined &&
              typeof (Drupal.settings.select_2.elements[id].query) == 'string' &&
              Drupal.select2functions[Drupal.settings.select_2.elements[id].query] != undefined) {

              Drupal.settings.select_2.elements[id].query = Drupal.select2functions[Drupal.settings.select_2.elements[id].query];

            } else if (Drupal.settings.select_2.elements[id].tags != undefined) {

            } else {

              skip_element = true;

            }
          }
        }

      }

      if (id != undefined) {

        if (typeof (Drupal.settings.select_2.elements[id]) != 'undefined') {

          if (typeof (Drupal.settings.select_2.elements[id].formatResult) == 'string' &&
            Drupal.select2functions[Drupal.settings.select_2.elements[id].formatResult] != undefined) {
            Drupal.settings.select_2.elements[id].formatResult = Drupal.select2functions[Drupal.settings.select_2.elements[id].formatResult];
          }

          if (typeof (Drupal.settings.select_2.elements[id].formatSelection) == 'string' &&
            Drupal.select2functions[Drupal.settings.select_2.elements[id].formatSelection] != undefined) {
            Drupal.settings.select_2.elements[id].formatSelection = Drupal.select2functions[Drupal.settings.select_2.elements[id].formatSelection];
          }

          if (typeof (Drupal.settings.select_2.elements[id].initSelection) == 'string' &&
            Drupal.select2functions[Drupal.settings.select_2.elements[id].initSelection] != undefined) {
            Drupal.settings.select_2.elements[id].initSelection = Drupal.select2functions[Drupal.settings.select_2.elements[id].initSelection];
          }

          //merging with element defined settings
          $.extend(true, options, Drupal.settings.select_2.elements[id]);


          if ((typeof (options.allowClear) == 'boolean' && options.allowClear) || $('option[value=""]', $element).length > 0) {

            if ($('option[value=""]', $element).length > 0) {

              if (options.placeholder == undefined) {
                options.placeholder = $('option[value=""]', $element).text();
              }
              $('option[value=""]', $element).html('');
            }

          }


          if (typeof (options.allow_add_onfly) != 'undefined' && (options.allow_add_onfly || options.allow_add_onfly == 1)) {
            options.createSearchChoice = function (term, data) {

              if ($(data).filter(
                function () {
                  return this.text.localeCompare(term) === 0;
                }
              ).length === 0) {
                return {
                  id: term,
                  text: term
                };
              }
            };

          }

          if (typeof (options.taxonomy_ref_ac_allowed) != 'undefined' &&
            (options.taxonomy_ref_ac_allowed || options.taxonomy_ref_ac_allowed == 1)) {
            options.createSearchChoice = function (term, data) {

              if ($(data).filter(
                function () {
                  //return this.text.localeCompare(term) === 0;
                }
              ).length === 0) {
                return {
                  id: term,
                  text: term
                };
              }
            };

          }

        }

      }

      if (!skip_element) {


        if (options.selectedOnNewLines != undefined && options.selectedOnNewLines) {
          options.containerCssClass += ' one-option-per-line';
        }

        if ($element.hasClass('filter-list')) {
          options.allowClear = false;
        }

        $element_select2_attach_result = false;

        try {

          if (typeof (options.comma_replacement) != 'undefined') {

            var cur_val = "" + $element.val();

            cur_val = cur_val.replace(/".*?"/g, function (match) {
              return match.replace(/,/g, '{{;}}');
            });

            $element.val(cur_val);

          }

          // disabled_options
          if (typeof(options.disabled_options) != 'undefined') {
            //
            $.each(options.disabled_options, function (index, value) {
              $('option[value="' + value + '"]', $element).prop('disabled', true);
            });
          }

          $element.select2(options);

          // need fix select2 container width
          if ($element.select2("container").width() > 0 && options.allowClear
              && options.width != undefined
              && (options.width == 'element' || options.width == 'resolve')) {

            var cur_width = $element.select2("container").width();
            $element.select2("container").width(cur_width + 15);
          }

          if ($element.hasClass('error')) {
            $element.select2("container").addClass('error');
          }

          //need to disable focusin.dialog event

          $(document).unbind("focusin.dialog");

          if ($.fn.sortable != undefined &&
            options.jqui_sortable != undefined &&
            options.jqui_sortable) {

            $element.select2("container").find("ul.select2-choices").sortable({
              containment: 'parent',
              start: function () {
                $element.select2("onSortStart");
              },
              update: function () {
                $element.select2("onSortEnd");
              }
            });
          }

        } catch (e) {
          console.error('Error: ' + e);
        }

      }

    });
  };

  $(document).mousedown(function (event) {
    if ($(event.target).parents('.select2-drop').length === 0) {
      var dropdown = $("#select2-drop"),
        self;

      if (dropdown.length > 0) {
        self = dropdown.data("select2");
        if (self != undefined) {

          if (self.opts.selectOnBlur) {
            self.selectHighlighted({
              noFocus: true
            });
          }

          self.close();

        }
      }
    }
  });

  _select2_process_elements = function () {
    if (Drupal.settings.select_2.excludes.by_selectors.length > 0) {
      for (i = 0; i < Drupal.settings.select_2.excludes.by_selectors.length; ++i) {
        $(Drupal.settings.select_2.excludes.by_selectors[i]).addClass('select2-excluded');
      }
    }

    if (!Drupal.settings.select_2.no_version_check &&
      jqVersionSplited[1] * 1 < 8 && ($("select.use-select-2, input.use-select-2").lenght > 0 || (Drupal.settings.select_2.process_all_selects_on_page && $('select').length > 0))) {
      console.error('Error: ' + Drupal.t('jQuery 1.8.x or higher required for using "Select2 integration" module. Some of your forms element may be not working properly.'));
      return;
    }

    $("select.use-select-2, input.use-select-2").once('select2').atachSelect2();

    // atach select2 to all other selects (taths processed without Forms API) if needed
    if (Drupal.settings.select_2.process_all_selects_on_page) {
      $('select').once('select2').atachSelect2();
    }
    //
  };

  Drupal.behaviors.select2_integration = {
    attach: function (context) {

      if (typeof ($.fn.select2) != 'undefined') {

        $('a.taxonomy_voc_terms_page_link').once('taxonomy_voc_terms_page_link').click(function () {
          window.open(this.href);
          return false;
        });

        if (Drupal.Select2.settings_updated) {

          if (Drupal.Select2.current_exludes != false) {
            Drupal.settings.select_2.excludes = Drupal.Select2.current_exludes;
          }

          _select2_process_elements();
        } else {

          $(document).bind('select2_settings_updated', function () {

            if (Drupal.Select2.current_exludes != false) {
              Drupal.settings.select_2.excludes = Drupal.Select2.current_exludes;
            }

            _select2_process_elements();

          });

        }

      }

    },
  };

})(jQuery);
