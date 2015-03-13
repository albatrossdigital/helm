<?php
/**
 * @file
 * Displays a Zurb Foundation Section component.
 *
 * Available variables:
 * - $element array The element to render.
 * - $items array An array of section items to render.
 *
 * @ingroup themeable
 */
?>

<?php if (!empty($items)) : ?>
  <div data-section<?php print drupal_attributes($element['#attributes']) ?>>
    <?php foreach ($items as $item) : ?>
      <section<?php print drupal_attributes($item['container_attributes']) ?>>
        <p class="title" data-section-title><a href="#<?php print $item['container_attributes']['id']?>"><?php print $item['title']; ?></a></p>
        <div data-section-content<?php print drupal_attributes($item['content_attributes']) ?>>
          <?php print $item['content']; ?>
        </div>
      </section>
    <?php endforeach; ?>
  </div>
<?php endif; ?>
