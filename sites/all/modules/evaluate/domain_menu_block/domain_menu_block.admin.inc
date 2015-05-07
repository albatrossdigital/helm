<?php

/**
 * @file
 * Admin settings file for Domain-based menu block handling.
 */

/**
 * Main overview callback.
 *
 * @return
 *  A table of active records, with a settings form.
 */
function domain_menu_block_admin() {
  $output = array();
  $dmbs = domain_menu_block_load_multiple();
  if (empty($dmbs)) {
    $output['content']['#markup'] = t('No domain-specific menu blocks have been created.');
    return $output;
  }
  $header = array(t('Menu base name'), t('Description'), t('Active menus'), t('Auto Create'), t('Auto Delete'), array('data' => t('Actions'), 'colspan' => 2));
  $rows = array();
  foreach ($dmbs as $dmb) {
    $row = array(
      check_plain($dmb->base_name),
      check_plain($dmb->description),
      domain_menu_block_menu_count($dmb),
      ($dmb->auto_create) ? t('Yes') : t('No'),
      ($dmb->auto_delete) ? t('Yes') : t('No'),
      l(t('edit'), 'admin/structure/domain/domain_menu_block/edit/' . $dmb->machine_name),
      l(t('delete'), 'admin/structure/domain/domain_menu_block/delete/' . $dmb->machine_name),
    );
    $rows[] = $row;
  }
  $output['content']['#markup'] = theme('table', array('header' => $header, 'rows' => $rows));
  $output['form'] = drupal_get_form('domain_menu_block_settings_form', $dmbs);
  return $output;
}

/**
 * Settings form for the module.
 */
function domain_menu_block_settings_form($form, &$form_state, $dmbs) {
  $options = array('' => t('Use main menu'));
  foreach ($dmbs as $dmb) {
    $options[$dmb->machine_name] = $dmb->base_name;
  }
  /* UNTESTED.
  $form['wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Breadcrumb settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['wrapper']['domain_menu_block_breadcrumb_menu'] = array(
    '#title' => t('Breadcrumb tracking menu'),
    '#type' => 'select',
    '#description' => t('Select the base menu to use for calculating breadcrumb trails. Leave blank to use the default <em>Main menu</em>.'),
    '#options' => $options,
    '#default_value' => variable_get('domain_menu_block_breadcrumb_menu', ''),
  );*/
  $form = system_settings_form($form);

  $form['wrapper']['actions'] = $form['actions'];
  unset($form['actions']);
  return $form;
}

/**
 * Form handler for create/edit of $dmb objects.
 */
function domain_menu_block_form($form, &$form_state, $dmb = NULL) {
  drupal_set_title(t('Domain menu blocks'));
  if (is_null($dmb)) {
    $dmb = domain_menu_block_default();
  }

  $form['base_name'] = array(
    '#title' => t('Base menu name'),
    '#description' => t('The name of the menu to create for each domain.'),
    '#type' => 'textfield',
    '#size' => 40,
    '#maxlength' => 80,
    '#required' => TRUE,
    '#default_value' => $dmb->base_name,
  );
  $form['machine_name'] = array(
    '#type' => 'machine_name',
    '#machine_name' => array(
      'source' => array('base_name'),
      'exists' => 'domain_menu_block_check_machine_name',
    ),
    '#default_value' => $dmb->machine_name,
    '#disabled' => FALSE,
  );
  $form['description'] = array(
    '#title' => t('Description'),
    '#description' => t('A description of the menu.'),
    '#type' => 'textfield',
    '#size' => 60,
    '#maxlength' => 255,
    '#required' => TRUE,
    '#default_value' => $dmb->description,
  );
  $form['auto_create'] = array(
    '#type' => 'checkbox',
    '#title' => t('Automatically create menus for new domains'),
    '#default_value' => $dmb->auto_create,
  );
  $form['auto_delete'] = array(
    '#type' => 'checkbox',
    '#title' => t('Automatically delete menus for deleted domains'),
    '#default_value' => $dmb->auto_delete,
  );
  $form['create_menus'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create menus for existing domains'),
    '#default_value' => empty($dmb->base_name),
    '#description' => t('If selected, saving this form will generate menus for all existing domains.'),
  );
  $form['wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Block settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['wrapper']['level'] = array(
    '#title' => t('Starting level'),
    '#type' => 'select',
    '#description' => t('Blocks that start with the 1st level will always be visible. Blocks that start with the 2nd level or deeper will only be visible when the trail to the active menu item is in the block’s tree.'),
    '#options' => array(
      '1'  => t('1st level (primary)'),
      '2'  => t('2nd level (secondary)'),
      '3'  => t('3rd level (tertiary)'),
      '4'  => t('4th level'),
      '5'  => t('5th level'),
      '6'  => t('6th level'),
      '7'  => t('7th level'),
      '8'  => t('8th level'),
      '9'  => t('9th level'),
    ),
    '#default_value' => $dmb->level,
  );
  $form['wrapper']['depth'] = array(
    '#type' => 'select',
    '#title' => t('Maximum depth'),
    '#default_value' => $dmb->depth,
    '#options' => array(
      '1'  => '1',
      '2'  => '2',
      '3'  => '3',
      '4'  => '4',
      '5'  => '5',
      '6'  => '6',
      '7'  => '7',
      '8'  => '8',
      '9'  => '9',
      '0'  => t('Unlimited'),
    ),
    '#description' => t('From the starting level, specify the maximum depth of the menu tree.'),
  );
  $form['wrapper']['follow'] = array(
    '#type' => 'checkbox',
    '#title' => t('<strong>Follow</strong> the starting level of the active menu item.'),
    '#default_value' => $dmb->follow,
    '#description' => t('If the active menu item is deeper than the level specified above, the starting level will follow the active menu item. Otherwise, the starting level of the tree will remain fixed.'),
  );
  $form['wrapper']['expanded'] = array(
    '#type' => 'checkbox',
    '#title' => t('<strong>Expand all children</strong> of this tree.'),
    '#default_value' => $dmb->expanded,
  );
  $form['wrapper']['sort'] = array(
    '#type' => 'checkbox',
    '#title' => t('<strong>Sort</strong> menu tree by the active menu item’s trail.'),
    '#default_value' => $dmb->sort,
    '#description' => t('Sort each item in the active trail to the top of its level. When used on a deep or wide menu tree, the active menu item’s children will be easier to see when the page is reloaded.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save block'),
  );

  return $form;
}

/**
 * Checks the uniqueness of a $dmb->machine_name.
 *
 * @param $machine_name
 *  A machine_name to validate.
 *
 * @return
 *  Boolean TRUE or FALSE.
 */
function domain_menu_block_check_machine_name($machine_name) {
  // If editing an existing item, this is ok.
  $dmb = domain_menu_block_load(arg(5));
  if (isset($dmb->machine_name) && $machine_name == $dmb->machine_name) {
    return FALSE;
  }
  // Else check for duplicates.
  return db_query('SELECT 1 FROM {domain_menu_block} WHERE machine_name = :machine_name', array(':machine_name' => $machine_name))->fetchField();
}

/**
 * Submit callback for the $dmb form.
 */
function domain_menu_block_form_submit($form, &$form_state) {
  $dmb = (object) $form_state['values'];
  domain_menu_block_save($dmb, $dmb->create_menus);
  if ($dmb) {
    drupal_set_message(t('Menu block saved.'));
    $form_state['redirect'] = 'admin/structure/domain/menu-block';
  }
  else {
    drupal_set_message(t('Menu block save failed.', 'error'));
  }
}

/**
 * Form callback to delete a $dmb object.
 */
function domain_menu_block_delete_form($form, &$form_state, $dmb = NULL) {
  if (is_null($dmb)) {
    return DRUPAL_ACCESS_DENIED;
  }
  $form['dmb'] = array(
    '#type' => 'value',
    '#value' => $dmb,
  );
  $form['label'] = array(
    '#markup' => '<p>' . t('Delete the menus and block for %dmb.', array('%dmb' => $dmb->base_name)) . '</p>',
  );
  $form['delete_menus'] = array(
    '#title' => t('Delete menus for this entry.'),
    '#type' => 'checkbox',
    '#default_value' => 1,
  );
  $form = confirm_form(
    $form,
    t('Are you sure you wish to delete the %dmb domain menu block?', array('%dmb' => $dmb->base_name)),
    'admin/structure/domain/menu-block');
  return $form;
}

/**
 * Form callback to delete a $dmb object.
 */
function domain_menu_block_delete_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  $success = domain_menu_block_delete($values['dmb'], $values['delete_menus']);
  if ($success) {
    drupal_set_message(t('Domain menu block deleted properly.'));
    $form_state['redirect'] = 'admin/structure/domain/menu-block';
  }
  else {
    drupal_set_message(t('Menu block delete failed.', 'error'));
  }
}

/**
 * Shows all the menus assigned to a domain.
 */
function domain_menu_block_menu_overview($domain) {
  if (!isset($domain['domain_id'])) {
    return DRUPAL_ACCESS_DENIED;
  }
  $output['content']['#markup'] = '<h2>' . t('Active menus for %domain.', array('%domain' => $domain['sitename'])) . '</h2>';

  // Ensure that we have a menu block.
  $menu_names = array();
  $dmbs = domain_menu_block_load_multiple();
  if (empty($dmbs)) {
    $output['warning']['#markup'] = t('%domain has no menu blocks. <a href="!url">Add a new domain-sensitive menu block</a>.', array('%domain' => $domain['sitename'], '!url' => url('admin/structure/domain/domain_menu_block/create')));
    return $output;
  }

  // Query to generate the list.
  foreach ($dmbs as $dmb) {
    $menu_names[] = domain_menu_block_menu_name($dmb, $domain);
  }
  $result = db_select('menu_custom')
    ->fields('menu_custom', array('menu_name', 'title', 'description'))
    ->condition('menu_name', $menu_names, 'IN')
    ->execute();

  // Build the table.
  $header = array(t('Title'), array('data' => t('Operations'), 'colspan' => '3'));
  $rows = array();
  $options = array('query' => array(drupal_get_destination()));
  foreach ($result as $menu) {
    $row = array(theme('menu_admin_overview', array('title' => $menu->title, 'name' => $menu->menu_name, 'description' => $menu->description)));
    $row[] = array('data' => l(t('list links'), 'admin/structure/menu/manage/' . $menu->menu_name, $options));
    $row[] = array('data' => l(t('edit menu'), 'admin/structure/menu/manage/' . $menu->menu_name . '/edit', $options));
    $row[] = array('data' => l(t('add link'), 'admin/structure/menu/manage/' . $menu->menu_name . '/add', $options));
    $rows[] = $row;
  }

  $output['table']['#markup'] = theme('table', array('header' => $header, 'rows' => $rows));

  return $output;
}
