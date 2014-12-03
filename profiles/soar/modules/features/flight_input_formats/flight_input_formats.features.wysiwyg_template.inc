<?php
/**
 * @file
 * flight_input_formats.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function flight_input_formats_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['faq_list'] = array(
    'title' => 'FAQ List',
    'description' => 'Sets up a list of links with anchors',
    'weight' => 0,
    'fid' => 0,
    'body' => '<ol><li><a href="#link1">Link one</a></li>
	<li><a href="#link2">Link two</a></li>
	<li><a href="#link3">Link three</a></li>
</ol>

<h3><a id="link1" name="link1"></a>Link one</h3>

<p>Note: Create an anchor for each title, and link to it in the links above.</p>

<h3><a id="link2" name="link2"></a>Link two</h3>

<p>Note: Create an anchor for each title, and link to it in the links above.</p>

<h3><a id="link3" name="link3"></a>Link three</h3>

<p>Note: Create an anchor for each title, and link to it in the links above.</p>
',
    'name' => 'faq_list',
    'content_types' => array(),
  );
  $templates['foundation_two_columns_equal'] = array(
    'title' => 'Two Columns Equal',
    'description' => 'Two columns equal size',
    'weight' => 0,
    'fid' => 5,
    'body' => '<div class="row"><div class="columns large-6 wysiwyg-dotted">Part 1</div>

	<div class="columns large-6 wysiwyg-dotted">Part 2</div>
</div>
',
    'name' => 'foundation_two_columns_equal',
    'content_types' => array(),
  );
  $templates['foundation_two_columns_left_side'] = array(
    'title' => 'Two Columns Left Sidebar',
    'description' => 'Foundation fluid 2 column 3 x 9',
    'weight' => 0,
    'fid' => 12,
    'body' => '<div class="row"><div class="columns large-3 wysiwyg-dotted">Part 1</div>

	<div class="columns large-9 wysiwyg-dotted">Part 2</div>
</div>
',
    'name' => 'foundation_two_columns_left_side',
    'content_types' => array(),
  );
  $templates['image_with_caption'] = array(
    'title' => 'Image With Caption',
    'description' => 'Simple placeholder for image with caption',
    'weight' => 0,
    'fid' => 9,
    'body' => '<div class="image-caption-wrap"><div class="image-wrap wysiwyg-dotted"><img src="http://placehold.it/300x300" /></div>
	<cite class="wysiwyg-dotted">Caption goes here</cite></div>
',
    'name' => 'image_with_caption',
    'content_types' => array(),
  );
  return $templates;
}
