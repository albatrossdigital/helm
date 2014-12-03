<?php

/**
 * Form builder function for module settings.
 */
function form_beautifier_settings() {
  $form['form_beautifier_enable'] = array(
    '#type' => 'fieldset',
    '#title' => 'Enable / Disable Features',
  );
  $form['form_beautifier_enable']['form_beautifier_chk_rdio_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable Checkbox and Radio',
    '#description' => l('example', 'http://bit.ly/EtQfr', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_chk_rdio_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_fnd_multi_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable Foundation Multiselect',
    '#description' => l('example', 'http://andreamariani.net/lab/zurbfoundation5-multiselect/', array('attributes' => array('target' => '_blank'))).  t("Note: this plugin requires Foundation 5"),
    '#default_value' => variable_get('form_beautifier_fnd_multi_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_drpdwn_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable Dropdown quickfiltering',
    '#description' => l('example', 'http://bit.ly/kqS69', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_drpdwn_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_ddcl_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable Dropdown Check-list',
    '#description' => l('example', 'http://bit.ly/9ycFhU', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_ddcl_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_select2_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable Select 2',
    '#description' => l('example', 'http://ivaynberg.github.com/select2', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_select2_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_focus_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable Focus Field',
    '#description' => l('example', 'http://bit.ly/xPxbs', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_focus_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_infieldlabels_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable In-field Labels',
    //'#description' => l('example', 'http://bit.ly/9ycFhU', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_infieldlabels_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_inlinelabels_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable Inline Labels',
    //'#description' => l('example', 'http://bit.ly/xPxbs', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_inlinelabels_enable', 0),
  );
  $form['form_beautifier_enable']['form_beautifier_formalize_enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable formalize.me',
    '#description' => l('example', 'http://bit.ly/eRWyQi', array('attributes' => array('target' => '_blank'))),
    '#default_value' => variable_get('form_beautifier_formalize_enable', 0),
  );
  
  
  // Settings for Checkboxes and Radio Buttons
  if (variable_get('form_beautifier_chk_rdio_enable', 0)) {
	  $form['form_beautifier_checkboxes_radios'] = array(
	    '#type' => 'fieldset',
	    '#title' => 'Checkboxes &amp; Radio Buttons',
	    '#collapsible' => TRUE,
		  '#collapsed' => TRUE,
	  );
	  $options = array('prettyCheckboxes' => 'prettyCheckboxes');
	  if (module_exists('jquery_ui')) {
	    $options += array('checkbox' => 'jQueryUI Checkbox');
	  }
	  else {
	    variable_set('form_beautifier_library', 'prettyCheckboxes');
	  }
	  
	  $form['form_beautifier_checkboxes_radios']['form_beautifier_checkboxes_radios_library'] = array(
	    '#type' => 'radios',
	    '#title' => 'JS Library Option',
	  	'#options' => $options,
	  	'#default_value' => variable_get('form_beautifier_checkboxes_radios_library', 'prettyCheckboxes'),
		);
		
		if (variable_get('form_beautifier_checkboxes_radios_library', 'prettyCheckboxes') == 'prettyCheckboxes') {
		  $form['form_beautifier_checkboxes_radios']['form_beautifier_prettycheckboxes'] = array(
		    '#type' => 'fieldset',
		    '#title' => 'prettyCheckboxes Settings',
		    '#collapsible' => TRUE,
		    '#description' => 'prettyCheckboxes allows you to set a width and height to match custom CSS',
		  );
			$form['form_beautifier_checkboxes_radios']['form_beautifier_prettycheckboxes']['form_beautifier_prettycheckboxes_width'] = array(
			  '#type' => 'textfield',
			  '#title' => 'width',
			  '#default_value' => variable_get('form_beautifier_prettycheckboxes_width', 17),
			);
			$form['form_beautifier_checkboxes_radios']['form_beautifier_prettycheckboxes']['form_beautifier_prettycheckboxes_height'] = array(
			  '#type' => 'textfield',
			  '#title' => 'height',
			  '#default_value' => variable_get('form_beautifier_prettycheckboxes_height', 17),
			);
			/*$form['form_beautifier_prettycheckboxes']['form_beautifier_display'] = array(
			  '#type' => 'radios',
			  '#title' => 'Display Options',
			  '#options' => array('list' => 'Vertical', 'inline' => 'Horizontal'),
			  '#default_value' => variable_get('form_beautifier_display', 'list'),
			);*/
		}
	
	  $form['form_beautifier_checkboxes_radios']['form_beautifier_checkboxes_radios_include'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Enabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
	    '#default_value' => variable_get('form_beautifier_checkboxes_radios_include', '*'),
	  );
	  $form['form_beautifier_checkboxes_radios']['form_beautifier_checkboxes_radios_exclude'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Disabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
	    '#default_value' => variable_get('form_beautifier_checkboxes_radios_exclude', ''),
	  );  
  }

  // Settings for Foundation Multiselect
  if (variable_get('form_beautifier_fnd_multi_enable', 0)) {
    $form['form_beautifier_fnd_multi'] = array(
      '#type' => 'fieldset',
      '#title' => 'Dropdown Select',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['form_beautifier_fnd_multi']['form_beautifier_fnd_multi_include'] = array(
      '#type' => 'textarea',
      '#title' => 'Enabled Forms',
      '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
      '#default_value' => variable_get('form_beautifier_fnd_multi_include', '*'),
    );
    $form['form_beautifier_fnd_multi']['form_beautifier_fnd_multi_exclude'] = array(
      '#type' => 'textarea',
      '#title' => 'Disabled Forms',
      '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
      '#default_value' => variable_get('form_beautifier_fnd_multi_exclude', ''),
    );  
  }
  
  
  // Settings for Dropdown Select
  if (variable_get('form_beautifier_drpdwn_enable', 0)) {
	  $form['form_beautifier_dropdown'] = array(
	    '#type' => 'fieldset',
	    '#title' => 'Dropdown Select',
	    '#collapsible' => TRUE,
		  '#collapsed' => TRUE,
	  );
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_style'] = array(
	    '#type' => 'radios',
	    '#title' => 'Choose Dropdown Style',
	    '#options' => array('custom' => 'Default', 'sexy' => 'Sexy'),
	    '#default_value' => variable_get('form_beautifier_drpdwn_style', 'sexy'),
	  );
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_init_value'] = array(
	    '#type' => 'textfield',
	    '#title' => 'Initial Hidden value',
	    '#description' => 'Initial value of the hidden input of the dropdown box.',
	    '#default_value' => variable_get('form_beautifier_drpdwn_init_value', ''),
	  );
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_empty_text'] = array(
	    '#type' => 'textfield',
	    '#title' => 'Empty Text',
	    '#description' => 'Will be shown when an empty text input has no focus.',
	    '#default_value' => variable_get('form_beautifier_drpdwn_empty_text', '--Select Option--'),
	  );
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_autofill'] = array(
	    '#type' => 'checkbox',
	    '#title' => 'Use Empty Text',
	    '#description' => 'Will be shown when an empty text input has no focus.',
	    '#default_value' => variable_get('form_beautifier_drpdwn_autofill', 1),
	  );
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_selected'] = array(
	    '#type' => 'checkbox',
	    '#title' => 'Default Selected',
	    '#description' => 'The selected option of the selectbox will become the initial value',
	    '#default_value' => variable_get('form_beautifier_drpdwn_selected', 1),
	  );	
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_up'] = array(
	    '#type' => 'checkbox',
	    '#title' => 'Display Above',
	    '#description' => 'The dropdown list will appear above text input. ',
	    '#default_value' => variable_get('form_beautifier_drpdwn_up', 0),
	  );
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_include'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Enabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
	    '#default_value' => variable_get('form_beautifier_drpdwn_include', '*'),
	  );
	  $form['form_beautifier_dropdown']['form_beautifier_drpdwn_exclude'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Disabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
	    '#default_value' => variable_get('form_beautifier_drpdwn_exclude', ''),
	  );  
  }
  
  // Settings for Dropdown Select
  if (variable_get('form_beautifier_ddcl_enable', 0)) {
	  $form['form_beautifier_ddcl'] = array(
	    '#type' => 'fieldset',
	    '#title' => 'Dropdown Checklist',
	    '#collapsible' => TRUE,
		  '#collapsed' => TRUE,
	  );
	  $form['form_beautifier_ddcl']['form_beautifier_ddcl_style'] = array(
	    '#type' => 'radios',
	    '#title' => 'Choose Dropdown Checklist CSS Style',
	    '#options' => array('classic' => 'Classic', 'default' => 'Default'),
	    '#default_value' => variable_get('form_beautifier_ddcl_style', 'default'),
	  );
	  $form['form_beautifier_ddcl']['form_beautifier_ddcl_maxheight'] = array(
	    '#type' => 'textfield',
	    '#title' => 'Maximum Height',
	    '#field_suffix' => 'px',
	    '#description' => 'Maximum height of the dropdown.',
	    '#default_value' => variable_get('form_beautifier_ddcl_maxheight', '150'),
	    '#size' => 3,
	  );
	  $form['form_beautifier_ddcl']['form_beautifier_ddcl_any'] = array(
	    '#type' => 'checkbox',
	    '#title' => check_plain('Make <Any> a Select All toggle'),
	    '#description' => check_plain('Should we make the <Any> option a select all toggle checkbox?'),
	    '#default_value' => variable_get('form_beautifier_ddcl_any', 1),
	  );
	  $form['form_beautifier_ddcl']['form_beautifier_ddcl_single'] = array(
	    '#type' => 'checkbox',
	    '#title' => 'Use on single-option select boxes',
	    '#description' => 'If checked, single-option dropdown select boxes will be replaced by drop-down checklist radio field.',
	    '#default_value' => variable_get('form_beautifier_ddcl_single', 1),
	  );
	  $form['form_beautifier_ddcl']['form_beautifier_ddcl_include'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Enabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
	    '#default_value' => variable_get('form_beautifier_ddcl_include', '*'),
	  );
	  $form['form_beautifier_ddcl']['form_beautifier_ddcl_exclude'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Disabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
	    '#default_value' => variable_get('form_beautifier_ddcl_exclude', ''),
	  );  
  }

  // Settings for select2
  if (variable_get('form_beautifier_select2_enable', 0)) {
    $form['form_beautifier_select2'] = array(
      '#type' => 'fieldset',
      '#title' => 'Select2',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['form_beautifier_select2']['form_beautifier_select2_selector'] = array(
      '#type' => 'textfield',
      '#title' => 'jQuery Selector',
      '#description' => 'Customize the selector.  The form will have the class select2.',
      '#default_value' => variable_get('form_beautifier_select2_selector', 'form.select2 select'),
    );
    $form['form_beautifier_select2']['form_beautifier_select2_width'] = array(
      '#type' => 'textfield',
      '#title' => 'Width',
      '#description' => 'Width of the dropdown.',
      '#default_value' => variable_get('form_beautifier_select2_width', '200px'),
      '#size' => 3,
    );
    $form['form_beautifier_select2']['form_beautifier_select2_include'] = array(
      '#type' => 'textarea',
      '#title' => 'Enabled Forms',
      '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. You may also use the $form["#id"
      ] attribute, which is particularly useful for targeting specifc views exposed filter forms and webforms. <br >\'*\' specifies ALL FORMS.',
      '#default_value' => variable_get('form_beautifier_select2_include', '*'),
    );
    $form['form_beautifier_select2']['form_beautifier_select2_exclude'] = array(
      '#type' => 'textarea',
      '#title' => 'Disabled Forms',
      '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
      '#default_value' => variable_get('form_beautifier_select2_exclude', ''),
    );
  }
  
  
  // Settings for Field Focus
  if (variable_get('form_beautifier_focus_enable', 0)) {
	  $form['form_beautifier_focus'] = array(
	    '#type' => 'fieldset',
	    '#title' => 'Field Focus',
	    '#collapsible' => TRUE,
		  '#collapsed' => TRUE,
	  );
	  $form['form_beautifier_focus']['form_beautifier_focus_include'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Enabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
	    '#default_value' => variable_get('form_beautifier_focus_include', '*'),
	  );
	  $form['form_beautifier_focus']['form_beautifier_focus_exclude'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Disabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
	    '#default_value' => variable_get('form_beautifier_focus_exclude', ''),
	  );  
  }
  
  
  // Settings for In-field labels
  if (variable_get('form_beautifier_infieldlabels_enable', 0)) {
	  $form['form_beautifier_infieldlables'] = array(
	    '#type' => 'fieldset',
	    '#title' => 'In-field Labels',
	    '#collapsible' => TRUE,
		  '#collapsed' => TRUE,
	  );
	  $form['form_beautifier_infieldlables']['form_beautifier_infieldlabels_include'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Enabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
	    '#default_value' => variable_get('form_beautifier_infieldlabels_include', '*'),
	  );
	  $form['form_beautifier_infieldlables']['form_beautifier_infieldlabels_exclude'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Disabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
	    '#default_value' => variable_get('form_beautifier_infieldlabels_exclude', ''),
	  );  
  }
  
  // Settings for Inline labels
  if (variable_get('form_beautifier_inlinelabels_enable', 0)) {
	  $form['form_beautifier_inlinelabels'] = array(
	    '#type' => 'fieldset',
	    '#title' => 'Inline Labels',
	    '#collapsible' => TRUE,
		  '#collapsed' => TRUE,
	  );
	  $form['form_beautifier_inlinelabels']['form_beautifier_inlinelabels_include'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Enabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
	    '#default_value' => variable_get('form_beautifier_inlinelabels_include', '*'),
	  );
	  $form['form_beautifier_inlinelabels']['form_beautifier_inlinelabels_exclude'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Disabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
	    '#default_value' => variable_get('form_beautifier_inlinelabels_exclude', ''),
	  );  
  }
  
  // Settings for formalize.me
  if (variable_get('form_beautifier_formalize_enable', 0)) {
	  $form['form_beautifier_formalize'] = array(
	    '#type' => 'fieldset',
	    '#title' => 'formalize.me',
	    '#collapsible' => TRUE,
		  '#collapsed' => TRUE,
	  );
	  $form['form_beautifier_formalize']['form_beautifier_formalize_include'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Enabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module affects. <br >\'*\' specifies ALL FORMS.',
	    '#default_value' => variable_get('form_beautifier_formalize_include', '*'),
	  );
	  $form['form_beautifier_formalize']['form_beautifier_formalize_exclude'] = array(
	    '#type' => 'textarea',
	    '#title' => 'Disabled Forms',
	    '#description' => 'Use individual Form IDs separated by a comma to limit which forms this module DOES NOT affects. This value will override Enabled Form settings above.',
	    '#default_value' => variable_get('form_beautifier_formalize_exclude', ''),
	  );  
  }
  
  
  $form = system_settings_form($form);

  return $form;
}
