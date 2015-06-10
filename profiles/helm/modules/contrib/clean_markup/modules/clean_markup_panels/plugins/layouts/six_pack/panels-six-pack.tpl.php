<?php
/**
 * @file
 * Template for Clean Markup Six Pack Layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $css_id: An optional CSS ID.
 * - $id_attribute: The whole id="$css_id" string.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['first']: Content in the first row.
 *   - $content['second']: Content in the second row.
 *   - $content['third']: Content in the third row.
 *   - $content['fourth']: Content in the fourth row.
 *   - $content['fifth']: Content in the fifth row.
 *   - $content['sixth']: Content in the sixth row.
 */
?>
<section class="<?php print $panel_classes; ?>"<?php print $panel_id; ?>>

  <?php print $content['first']; ?>
  <?php print $content['second']; ?>
  <?php print $content['third']; ?>
  <?php print $content['fourth']; ?>
  <?php print $content['fifth']; ?>
  <?php print $content['sixth']; ?>

</section>
