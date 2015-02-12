<?php
/**
 * @file
 * View template to display a list of rows.
 *
 * Available variables:
 * - $view: The view object.
 * - $rows: The output for the rows.
 * - $captions: The output for the images captions.
 * - $title: The title of this group of rows. May be empty.
 * - $options: Orbit slider options.
 *
 * @ingroup views_templates
 */
?>
<div class="row">
  <div class="small-12 columns">
    <?php if (!empty($title)) : ?>
      <h3><?php print $title; ?></h3>
    <?php endif; ?>
    <ul data-orbit data-options="<?php print $options; ?>">
      <?php foreach ($rows as $id => $row): ?>
      <li>
        <?php print $row; ?>
        <?php if ($captions): ?>
          <div class="orbit-caption">
            <?php print $captions[$id]; ?>
          </div>
        <?php endif; ?>
      </li>
      <?php endforeach; ?>
    </ul>
  </div>
</div>
