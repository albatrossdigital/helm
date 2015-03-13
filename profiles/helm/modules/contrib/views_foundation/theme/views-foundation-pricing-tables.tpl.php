<?php
/**
 * @file
 * Template for Views Foundation Pricing Tables.
 *
 * Available variables:
 * - $view: The view object.
 * - $fields: The output for the fields.
 *
 * @ingroup views_templates
 */
?>
<ul class="pricing-table">
  <?php if ($fields['title_field']): ?>
   <li class="title"><?php print $fields['title_field']; ?></li>
  <?php endif; ?>
  <?php if ($fields['price_field']): ?>
   <li class="price"><?php print $fields['price_field']; ?></li>
  <?php endif; ?>
  <?php if ($fields['description_field']): ?>
   <li class="description"><?php print $fields['description_field']; ?></li>
  <?php endif; ?>
  <?php if ($fields['bullet_fields']): ?>
    <?php foreach ($fields['bullet_fields'] as $field) : ?>
   <li class="bullet-item"><?php print $field; ?></li>
    <?php endforeach; ?>
  <?php endif; ?>
  <?php if ($fields['button_field']): ?>
   <li class="cta-button"><?php print $fields['button_field']; ?></li>
  <?php endif; ?>
</ul>
