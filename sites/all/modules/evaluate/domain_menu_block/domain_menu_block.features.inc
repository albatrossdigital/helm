<?php

/**
 * @file
 * Features export integration from Domain Menu Block.
 */

/**
 * Implements hook_features_export_options().
 */
function domain_menu_block_features_export_options() {
  $dmbs = domain_menu_block_load_multiple();
  $options = array();
  foreach ($dmbs as $dmb) {
    $options[$dmb->machine_name] = $dmb->base_name;
  }
  return $options;
}

/**
 * Implements hook_features_export().
 */
function domain_menu_block_features_export($data, &$export, $module_name) {
  $export['dependencies']['domain_menu_block'] = 'domain_menu_block';
  $dmbs = domain_menu_block_load_multiple();
  foreach ($data as $key => $value) {
    $export['features']['domain_menu_block'][$key] = $dmbs[$key];
  }
  return array();
}

/**
 * Implements hook_features_export_render().
 */
function domain_menu_block_features_export_render($module_name, $data, $export = NULL) {
  domain_features_load($module_name, 'domain_alias_default_aliases', FALSE);
  $code = array();
  if (is_null($export)) {
    $data = domain_menu_block_load_multiple();
  }
  $code[] = '$dmbs = array();';
  foreach ($data as $name => $value) {
    // When features runs a check for normal / overridden, it passes only
    // array keys, so we account for that.
    if (is_string($value) && $dmb = domain_menu_block_load($value)) {
      $name = $value;
      $value = $dmb;
    }
    $code[] = "  \$dmbs['{$name}'] = " . features_var_export($value) . ";";
  }
  $code[] = "\nreturn \$dmbs;";
  $output = implode("\n", $code);
  return array('domain_menu_block_default_domain_menu_blocks' => $output);
}

/**
 * Implements hook_features_revert().
 */
function domain_menu_block_features_revert($module) {
  return domain_menu_block_features_rebuild($module);
}

/**
 * Implements hook_features_rebuild().
 */
function domain_menu_block_features_rebuild($module) {
  if ($defaults = domain_features_load($module, 'domain_menu_block_default_domain_menu_blocks', TRUE)) {
    // This will delete menus not properly exported!
    // Find records in the table that do not map to our feature.
    $dmbs = domain_menu_block_load_multiple();
    foreach ($dmbs as $key => $dmb) {
      if (!isset($defaults[$key])) {
        domain_menu_block_delete($dmb, TRUE);
      }
    }
    // Now wipe the table.
    db_delete('domain_menu_block')->execute();

    // Rebuild from the feature, creating menus if desired.
    foreach ($defaults as $key => $value) {
      $dmb = (object) $value;
      domain_menu_block_save($dmb, $dmb->auto_create);
    }
  }
}
