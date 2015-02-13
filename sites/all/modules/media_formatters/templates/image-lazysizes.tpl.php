<span class="image-lazysize">
  <img
    <?php if (!empty($alt)): ?>alt="<?php print $alt; ?>"<?php endif; ?>
    <?php if (!empty($title)): ?>title="<?php print $title; ?>"<?php endif; ?>
    <?php if ($show_src): ?>src="<?php print $src; ?>"<?php endif; ?>
    <?php if (!empty($src_set)): ?>
      data-srcset="<?php print $src_set; ?>"
    <?php elseif (!$show_src): ?>
      data-src="<?php print $src; ?>"
    <?php endif; ?>
    data-sizes="auto"
    class="lazyload" />
  <?php if (!empty($attribution)): ?><span class="image-attribution">
    <span class="image-attribution-icon glyphicon glyphicon-camera fa fa-camera"></span>
    <span class="image-attribution-text"><?php print $attribution; ?></span>
  </span><?php endif; ?>
</span>