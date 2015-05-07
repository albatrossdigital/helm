<?php

/**
 * @file
 * Plugin to provide access control based upon active domain.
 */

/**
 * Implement hook_ctools_access().
 */
function domain_ctools_domain_ctools_access() {
  return array(
    'title' => t('Domain Access'),
    'description' => t('Control access by active domain.'),
    'callback' => 'domain_ctools_domain_access_check',
    'default' => array('domains' => array(), 'domain_site' => TRUE),
    'settings form' => 'domain_ctools_domain_access_settings',
    'summary' => 'domain_ctools_domain_acesss_summary',
  );
}

/**
 * Settings form domain access plugin.
 */
function domain_ctools_domain_access_settings($form, &$form_state, $conf) {
  $domains = domain_domains();
  $options = array();
  // Check for old implementations.
  if (domain_ctools_api_version() > 2 && isset($conf['domains'])) {
    foreach ($conf['domains'] as $key => $value) {
      $id = ($key == -1) ? 0 : $key;
      if ($key == -1 || ($id > 0 && intval($key) == $key)) {
        drupal_set_message(t('Domain CTools requires that you resave and/or re-export this setting.'), 'warning', FALSE);
        if (isset($domains[$id]['machine_name'])) {
          $conf['domains'][$domains[$id]['machine_name']] = empty($value) ? 0 : $domains[$id]['machine_name'];
        }
        if (isset($conf['domains'][$id])) {
          unset($conf['domains'][$id]);
        }
        if (isset($conf['domains'][$key])) {
          unset($conf['domains'][$key]);
        }
      }
    }
  }
  // Set the form.
  $format = domain_select_format();
  foreach ($domains as $domain) {
    // Checkboxes cannot handles zeros.
    if ($domain['domain_id'] === 0) {
      $domain['domain_id'] = -1;
    }
    // The domain must be valid.
    if ($domain['valid'] || user_access('access inactive domains')) {
      // Filter checkboxes but not select lists.
      if (domain_ctools_api_version() < 3) {
        $options[$domain['domain_id']] = empty($format) ? check_plain($domain['sitename']) : $domain['sitename'];
      }
      else {
        $options[$domain['machine_name']] = empty($format) ? check_plain($domain['sitename']) : $domain['sitename'];
      }
    }
  }
  $form['settings']['domain_site'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show on all affiliates'),
    '#default_value' => isset($conf['domain_site']) ? $conf['domain_site'] : TRUE,
    '#description' => t('Show content on all domains. This setting will override the domain-specific options below.'),
  );
  $form['settings']['domains'] = array(
    '#type' => empty($format) ? 'checkboxes' : 'select',
    '#title' => t('Domains'),
    '#default_value' => isset($conf['domains']) ? $conf['domains'] : array(),
    '#options' => $options,
    '#description' => t('This content will only be visible on the selected domains.'),
  );
  if ($format) {
    $form['settings']['domains']['#multiple'] = TRUE;
    $form['settings']['domains']['#size'] = count($options) > 10 ? 10 : count($options);
  }

  return $form;
}

/**
 * Check for access based on the currently active domain.
 */
function domain_ctools_domain_access_check($conf, $context, $plugin) {
  $_domain = domain_get_domain();
  if (!empty($conf['domain_site'])) {
    return TRUE;
  }
  if (empty($conf['domains'])) {
    return FALSE;
  }
  $domain_list = array_filter($conf['domains']);
  // On 7.x.2, the domain_id is a number, and 0 is stored as -1.
  // Here we check if the install is DA 7.x.2 or if the ctools export was done
  // using numeric keys.
  if (domain_ctools_api_version() < 3 || isset($conf['domains'][-1])) {
    $id = $_domain['domain_id'];
    if ($id == 0) {
      $id = -1;
    }
    if (isset($domain_list[$id])) {
      return TRUE;
    }
  }
  // On 7.x.3, we use proper machine names as keys.
  else {
    // In some cases, Ctools gives us an imcomplete domain, which is odd.
    // TODO: figure out why this is the case.
    if (isset($_domain['machine_name'])) {
      $machine_name = $_domain['machine_name'];
    }
    else {
      $machine_name = domain_load_machine_name($_domain['domain_id']);
    }
    if (isset($domain_list[$machine_name])) {
      return TRUE;
    }
  }
  return FALSE;
}

/**
 * Provide a summary description based upon the checked domains.
 */
function domain_ctools_domain_acesss_summary($conf, $context, $plugin) {
  // Visible on all domains?
  if ($conf['domain_site'] || !isset($conf['domains'])) {
    $conf['domains'] = array();
    $output = t('Content is visible on all domains.');
  }
  // Determine visibility.
  else {
    $domains = domain_domains();
    $names = array();
    foreach (array_filter($conf['domains']) as $key) {
      $id = ($key == -1) ? 0 : $key;
      if (domain_ctools_api_version() < 3) {
        $names[] = check_plain($domains[$id]['sitename']);
      }
      else {
        // In this case, it's an old access rule, so handle it nicely.
        if ($key == -1 || ($id > 0 && intval($key) == $key)) {
          $names[] = check_plain($domains[$id]['sitename']);
          drupal_set_message(t('Domain CTools requires that you resave and/or re-export the Domain Access settings.'), 'warning', FALSE);
        }
        // This is proper 7.x.3 handling.
        else {
          $domain = domain_machine_name_load($key);
          $names[] = check_plain($domain['sitename']);
        }
      }
    }
    // Print the proper message.
    if (empty($names) && empty($output)) {
      $output = t('Content is visible on no domains.');
    }
    else {
      $output = t('Visible on !domains.', array('!domains' => implode(', ', $names)));
    }
  }
  return $output;
}
