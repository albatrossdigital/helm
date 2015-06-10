<?php
/**
 * @file
 * Template for a 1 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $css_id: An optional CSS ID.
 * - $id_attribute: The whole id="$css_id" string.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['middle']: The only panel in the layout.
 */
?>
<section class="<?php print $panel_classes; ?>"<?php print $panel_id; ?>>
  <?php print $content['middle']; ?>
</section>
