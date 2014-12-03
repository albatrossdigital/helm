<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * Available variables:
 * - $title : The title of this group of rows.  May be empty.
 * - $fields: The output for the images, thumbnails and captions.
 * - $class: CSS class for thumbnail border.
 *
 * @ingroup views_templates
 */
?>
<div class="row">
  <div class="small-12 columns">
    <?php if (!empty($title)) : ?>
      <h3><?php print $title; ?></h3>
    <?php endif; ?>
    <ul class="clearing-thumbs" data-clearing>
      <?php foreach ($fields as $field): ?>
        <li><a class="<?php print $class['link']; ?>" href="<?php print $field['image'] ?>">
            <img<?php if (!empty($field['caption'])) : ?> data-caption="<?php print $field['caption']; ?>"<?php endif; ?> src="<?php print $field['thumbnail']; ?>"></a>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
</div>
