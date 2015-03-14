; Helm make file for d.o. usage
core = "7.x"
api = "2"

; *********************************************************************************
; * Modules
; *********************************************************************************
; @todo Take an inventory of modules downloaded by not installed by core profile

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[admin_select][version] = "1.5"
projects[admin_select][subdir] = "contrib"

projects[email_registration][version] = "1.2"
projects[email_registration][subdir] = "contrib"

projects[filter_perms][version] = "1.0"
projects[filter_perms][subdir] = "contrib"

projects[ctools][version] = "1.5"
projects[ctools][subdir] = "contrib"

projects[menu_trail_by_path][version] = "2.0"
projects[menu_trail_by_path][subdir] = "contrib"

projects[devel][version] = "1.5"
projects[devel][subdir] = "devel"

projects[features][version] = "2.2"
projects[features][subdir] = "contrib"

projects[email][version] = "1.3"
projects[email][subdir] = "contrib"

projects[field_group][version] = "1.4"
projects[field_group][subdir] = "contrib"

projects[link][version] = "1.3"
projects[link][subdir] = "contrib"

projects[select_or_other][version] = "2.20"
projects[select_or_other][subdir] = "contrib"

projects[field_collection][version] = "1.0-beta8"
projects[field_collection][subdir] = "contrib"

projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[module_filter][version] = "1.8"
projects[module_filter][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[redirect][version] = "1.0-rc1"
projects[redirect][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[metatag][version] = "1.4"
projects[metatag][subdir] = "contrib"

projects[google_analytics][version] = "1.4"
projects[google_analytics][subdir] = "contrib"

projects[simplehtmldom][version] = "1.12"
projects[simplehtmldom][subdir] = "contrib"

projects[draggableviews][version] = "2.0"
projects[draggableviews][subdir] = "contrib"

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.2"
projects[views_bulk_operations][subdir] = "contrib"

projects[admin_views][version] = "1.3"
projects[admin_views][subdir] = "contrib"

projects[date][version] = "2.8"
projects[date][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

projects[entityreference_prepopulate][version] = "1.5"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[image_resize_filter][version] = "1.14"
projects[image_resize_filter][subdir] = "contrib"

projects[menu_block][version] = "2.4"
projects[menu_block][subdir] = "contrib"

projects[menu_firstchild][version] = "1.1"
projects[menu_firstchild][subdir] = "contrib"

projects[menu_trail_by_path][version] = "2.0"
projects[menu_trail_by_path][subdir] = "contrib"

projects[pathauto_persist][version] = "1.3"
projects[pathauto_persist][subdir] = "contrib"

projects[media_formatters][version] = "1.0-alpha1"
projects[media_formatters][subdir] = "contrib"

projects[angular_media][version] = "1.0-alpha1"
projects[angular_media][subdir] = "contrib"

projects[views_data_export][version] = "3.0-beta8"
projects[views_data_export][subdir] = "contrib"

projects[views_data_export_json][version] = "1.0-beta1"
projects[views_data_export_json][subdir] = "contrib"

projects[ckeditor][version] = "1.16"
projects[ckeditor][subdir] = "contrib"

projects[ckeditor_filter][version] = "1.0"
projects[ckeditor_filter][subdir] = "contrib"

projects[ckeditor_widgets][version] = "1.0-alpha3"
projects[ckeditor_widgets][subdir] = "contrib"

projects[file_entity][version] = "2.0-beta1"
projects[file_entity][subdir] = "contrib"

projects[media][version] = "2.0-alpha4"
projects[media][subdir] = "contrib"

projects[creative_commons][version] = "1.0"
projects[creative_commons][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[fences][version] = 1.0
projects[fences][subdir] = contrib

projects[panels_extra_styles][version] = 1.1
projects[panels_extra_styles][subdir] = contrib

projects[vertical_tabs_responsive][version] = "1.0-beta3"
projects[vertical_tabs_responsive][subdir] = contrib

projects[addthis][version] = "4.0-alpha4"
projects[addthis][subdir] = "contrib"

projects[socialfield][version] = "1.4"
projects[socialfield][subdir] = "contrib"

projects[socialfield][version] = "1.4"
projects[socialfield][subdir] = "contrib"

projects[social_stream][version] = "1.0-alpha3"
projects[social_stream][subdir] = "contrib"

; +++++ Modules Dev/specific revisions +++++
; @todo
; * Best practice is to point to specific git commits.
; * Have a note for each of these explaining the feature (with links) that requires -dev branch

; From Feb 19, 2014
; The official releases for this module are really old (2012)
projects[oembed][version] = "2.x-dev"
projects[oembed][subdir] = "contrib"
projects[oembed][download][type] = "git"
projects[oembed][download][revision] = "8492b9f"
projects[oembed][download][branch] = "7.x-1.x"

; From Jan 16 2015
; Fixes issue with ical_parser module
; Adds support for the GenericEntityProccessor (for data module)
projects[feeds][version] = "2.x-dev"
projects[feeds][subdir] = "contrib"
projects[feeds][download][type] = "git"
projects[feeds][download][revision] = "45152d3"
projects[feeds][download][branch] = "7.x-1.x"

; From Mar 13 2015
; Sandbox module from @jlyon
;@todo: No release history was found for the requested project (socialfield_widgets).
;projects[socialfield_widgets][version] = "2.x-dev"
;projects[socialfield_widgets][subdir] = "contrib"
;projects[socialfield_widgets][download][type] = "git"
;projects[socialfield_widgets][download][revision] = "1264c3f"
;projects[socialfield_widgets][download][url] = "http://git.drupal.org/sandbox/jlyon/socialfield_widgets.git"
;projects[socialfield_widgets][download][branch] = "7.x-1.x"

; *********************************************************************************
; * Panopoly Distro
; *********************************************************************************


;projects[panopoly_core][version] = 1.14
;projects[panopoly_core][subdir] = panopoly

projects[panopoly_theme][version] = 1.14
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.14
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.14
projects[panopoly_widgets][subdir] = panopoly


; *********************************************************************************
; * Panopoly Contrib
; *********************************************************************************


; panels_core

projects[panels][version] = 3.4
projects[panels][subdir] = contrib
projects[panels][patch][2283719] = http://drupal.org/files/issues/panels-icon-text-renderer-2283719-1.patch
projects[panels][patch][2280797] = http://drupal.org/files/issues/panels-ipe-keyboard-focus-2280797-2.patch

projects[panels_breadcrumbs][version] = 2.2
projects[panels_breadcrumbs][subdir] = contrib

projects[panelizer][version] = 3.1
projects[panelizer][subdir] = contrib
projects[panelizer][patch][1623536] = http://drupal.org/files/issues/array-to-object-on-update-1623536-26.patch

projects[fieldable_panels_panes][version] = 1.5
projects[fieldable_panels_panes][subdir] = contrib
projects[fieldable_panels_panes][patch][2283263] = http://drupal.org/files/issues/fieldable_panels_panes-n2283263-5.patch

projects[pm_existing_pages][version] = 1.4
projects[pm_existing_pages][subdir] = contrib

projects[fape][version] = 1.2
projects[fape][subdir] = contrib

projects[views_autocomplete_filters][version] = 1.1
projects[views_autocomplete_filters][subdir] = contrib
projects[views_autocomplete_filters][patch][2277453] = http://drupal.org/files/issues/ViewsAutocompleteFilters-no_results_on_some_environments-2277453-1.patch
projects[views_autocomplete_filters][patch][2374709] = http://drupal.org/files/issues/views_autocomplete_filters-cache-2374709-2.patch
projects[views_autocomplete_filters][patch][2317351] = http://drupal.org/files/issues/views_autocomplete_filters-content-pane-2317351-4.patch

projects[transliteration][version] = 3.2
projects[transliteration][subdir] = contrib

projects[defaultconfig][version] = 1.0-alpha9
projects[defaultconfig][subdir] = contrib
projects[defaultconfig][patch][2042799] = http://drupal.org/files/default_config_delete_only_if_overriden.patch
projects[defaultconfig][patch][2043307] = http://drupal.org/files/defaultconfig_include_features_file.patch
projects[defaultconfig][patch][2008178] = http://drupal.org/files/defaultconfig-rebuild-filters-2008178-4_0.patch
projects[defaultconfig][patch][1861054] = http://drupal.org/files/fix-defaultconfig_rebuild_all.patch

; Panopoly theme

;projects[radix_layouts][version] = 3.3
;projects[radix_layouts][subdir] = contrib


; Panolpoly widgets

projects[tablefield][version] = 2.3
projects[tablefield][subdir] = contrib

projects[simple_gmap][version] = 1.2
projects[simple_gmap][subdir] = contrib

projects[media_youtube][version] = 2.x-dev
projects[media_youtube][subdir] = contrib
projects[media_youtube][download][type] = git
projects[media_youtube][download][revision] = d0377b3
projects[media_youtube][download][branch] = 7.x-2.x

projects[media_vimeo][version] = 2.0
projects[media_vimeo][subdir] = contrib



; *********************************************************************************
; * Themes
; *********************************************************************************

projects[bootstrap][version] = "3.0"
projects[bootstrap][subdir] = "contrib"

projects[radix][version] = "3.0-rc2"
projects[radix][subdir] = "contrib"


; *********************************************************************************
; * Libraries
; *********************************************************************************

; NOTE: These need to be listed in http://drupal.org/packaging-whitelist.

; *********************************************************************************
; * Patches
; *********************************************************************************

; @todo: edit module, look at https://drupal.org/node/2125199

; Fix CKEditor call to jQuery.browser
projects[ckeditor][patch][2199995] = "http://drupal.org/files/issues/ckeditor-219995-jQuery_browser_test_deprecated-2.patch"

; Fix circular loops in redirect module when Title is changed
projects[redirect][patch][1796596s] = "http://drupal.org/files/issues/redirect.circular-loops.1796596-124.patch"