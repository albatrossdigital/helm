<?php
/**
 * @file
 * Template for a Clean Markup Myriad Layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $css_id: An optional CSS ID.
 * - $id_attribute: The whole id="$css_id" string.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['one_first']: First region in first row.
 *   - $content['one_second']: Second region in first row.
 *   - $content['one_third']: Third region in first row.
 *   - $content['one_fourth']: Fourth region in first row.
 *   - $content['two_second']: First region in second row.
 *   - $content['two_second']: Second region in second row.
 *   - $content['two_third']: Third region in second row.
 *   - $content['two_fourth']: Fourth region in second row.
 *   - $content['three_first']: First region in third row.
 *   - $content['three_second']: Second region in third row.
 *   - $content['three_third']: Third region in third row.
 *   - $content['three_fourth']: Fourth region in third row.
 *   - $content['four_first']: First region in fourth row.
 *   - $content['four_second']: Second region in fourth row.
 *   - $content['four_third']: Third region in fourth row.
 *   - $content['four_fourth']: Fourth region in fourth row.
 *   - $content['five_first']: First region in fifth row.
 *   - $content['five_second']: Second region in fifth row.
 *   - $content['five_third']: Third region in fifth row.
 *   - $content['five_fourth']: Fourth region in fifth row.
 */
?>
<section class="<?php print $panel_classes; ?>"<?php print $panel_id; ?>>

  <?php if ($row_one_regions > 1 && $total_rows > 1): ?><div class="row-one myriad-row clearfix"><?php endif; ?>
    <?php print $content['one_first']; ?>
    <?php print $content['one_second']; ?>
    <?php print $content['one_third']; ?>
    <?php print $content['one_fourth']; ?>
  <?php if ($row_one_regions > 1 && $total_rows > 1): ?></div><?php endif; ?>

  <?php if ($row_two_regions > 1 && $total_rows > 1): ?><div class="row-two myriad-row clearfix"><?php endif; ?>
    <?php print $content['two_first']; ?>
    <?php print $content['two_second']; ?>
    <?php print $content['two_third']; ?>
    <?php print $content['two_fourth']; ?>
  <?php if ($row_two_regions > 1 && $total_rows > 1): ?></div><?php endif; ?>

  <?php if ($row_three_regions > 1 && $total_rows > 1): ?><div class="row-three myriad-row clearfix"><?php endif; ?>
    <?php print $content['three_first']; ?>
    <?php print $content['three_second']; ?>
    <?php print $content['three_third']; ?>
    <?php print $content['three_fourth']; ?>
  <?php if ($row_three_regions > 1 && $total_rows > 1): ?></div><?php endif; ?>

  <?php if ($row_four_regions > 1 && $total_rows > 1): ?><div class="row-four myriad-row clearfix"><?php endif; ?>
    <?php print $content['four_first']; ?>
    <?php print $content['four_second']; ?>
    <?php print $content['four_third']; ?>
    <?php print $content['four_fourth']; ?>
  <?php if ($row_four_regions > 1 && $total_rows > 1): ?></div><?php endif; ?>

  <?php if ($row_five_regions > 1 && $total_rows > 1): ?><div class="row-five myriad-row clearfix"><?php endif; ?>
    <?php print $content['five_first']; ?>
    <?php print $content['five_second']; ?>
    <?php print $content['five_third']; ?>
    <?php print $content['five_fourth']; ?>
  <?php if ($row_five_regions > 1 && $total_rows > 1): ?></div><?php endif; ?>

</section>
