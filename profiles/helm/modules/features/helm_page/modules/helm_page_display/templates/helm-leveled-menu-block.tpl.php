<?php
/**
 * @file
 * Default theme implementation to wrap menu blocks.
 *
 * Available variables:
 * - $content: The renderable array containing the menu.
 * - $classes: A string containing the CSS classes for the DIV tag. Includes:
 *   menu-block-DELTA, menu-name-NAME, parent-mlid-MLID, and menu-level-LEVEL.
 * - $classes_array: An array containing each of the CSS classes.
 *
 * The following variables are provided for contextual information.
 * - $delta: (string) The menu_block's block delta.
 * - $config: An array of the block's configuration settings. Includes
 *   menu_name, parent_mlid, title_link, admin_title, level, follow, depth,
 *   expanded, and sort.
 *
 * @see template_preprocess_menu_block_wrapper()
 */

?>
<div class="menu-collection">
  <div class="<?php print $classes; ?>" style="width:<?php print $count*100; ?>%;">
    <?php foreach ($content as $key => $level): ?>
      <div class="<?php print $key; ?>" style="width:<?php print 100/$count; ?>%">
        <div class="panel panel-default">
          <div class="panel-heading">
            <?php print $level['#menu_title']; ?>
          </div>  
          <div class="panel-body">
            <?php print render($level); ?>
          </div>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>
