<?php if(!$is_hidden): ?>
  <a href="<?php print $path_lightbox ?>" dat data-toggle="lightbox" data-gallery="<?php print $gallery ?>" data-title="<?php print $title ?>" data-parent=".lightbox-gallery-wrapper" class="<?php print $class ?>">
    <?php if(!empty($img)): ?>
      <?php print $img ?>
    <?php else: ?>
      <img src="<?php print $path ?>" class="img-responsive" alt="<?php print $alt ?>">
    <?php endif; ?>
  </a>
<?php else: ?>
  <div data-toggle="lightbox" data-gallery="<?php print $gallery ?>" data-remote="<?php print $path_lightbox ?>" data-title="<?php print $title ?>"></div>
<?php endif; ?>
