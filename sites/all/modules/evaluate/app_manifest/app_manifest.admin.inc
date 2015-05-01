<?php

/**
 * Form callback for Open Apps manifest generation.
 */
function app_manifest_manifest_form($form, $form_state, $feature = NULL) {
  $manifest = app_manifest_get_manifest($feature);
  $last = variable_get('update_last_check', 0);
  $markup = theme('update_last_check', array('last' => $last));
  $form['#prefix'] = t('The generated code here is a starting place for writing an Open Apps manifest for this release version of !name. In some cases the code will need manual review or editing. If the text !fix_me appears, replace it with appropriate author and author_url information. If !needs_review appears on links, try clicking the "Check manually" link to regenerate update information. If there are still links marked !needs_review, check them manually and then delete the !needs_review text deleted. If the text !add_version appears, it should be replaced with the relevant version of a library. When you\'re done editing, copy the manifest and paste it into an App Server app release node manifest field.', array('!fix_me' => 'FIX_ME', '!needs_review' => 'NEEDS_REVIEW', '!add_version' => 'ADD_VERSION', '!name' => $feature->info['name']));
  $form['update_last_check'] = array(
    '#type' => 'item',
    '#title' => t('Update information'),
    '#description' => t('Manifest downloadable links are generated based on update information. If the update information is missing or out of date, you may need to refresh it by clicking the "Check manually" link.'),
    '#markup' => $markup,
  );
  $form['manifest'] = array(
    '#type' => 'textarea',
    '#title' => t('Open Apps manifest'),
    '#default_value' => $manifest,
    '#rows' => 35,
  );
  return $form;
}
