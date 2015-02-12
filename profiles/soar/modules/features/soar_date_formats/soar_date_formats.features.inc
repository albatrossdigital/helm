<?php
/**
 * @file
 * soar_date_formats.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function soar_date_formats_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
