<?php
/**
 * @file
 * Displays a clean-markup region.
 *
 * Available variables:
 * - $is_region_wrapper: TRUE if a region wrapper should be output, FALSE if it
 *   should not.
 * - $region_wrapper: The element to wrap the region in.
 * - $region_classes: Any classes to apply to the region wrapper.
 * - $display_inner_div: TRUE if an inner div should be output, FALSE if it
 *   should not.
 * - $panes: The HTML of the different panes contained in this region. This file
 *   will not be called if the region is empty!
 *
 * @see template_preprocess_clean_markup_panels_clean_region()
 *
 * @ingroup themeable
 */
?>
<?php if ($display_region_wrapper): ?><<?php print $region_wrapper; ?><?php print $additional_attributes; ?> class="<?php print $region_classes; ?>"><?php endif; ?>
  <?php if ($display_inner_div): ?><div class="inner region-inner inside"><?php endif; ?>
    <?php print $panes; ?>
  <?php if ($display_inner_div): ?></div><?php endif; ?>
<?php if ($display_region_wrapper): ?></<?php print $region_wrapper; ?>><?php endif; ?>
