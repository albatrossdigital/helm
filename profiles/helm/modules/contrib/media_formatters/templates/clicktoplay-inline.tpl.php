<div class="click-to-play click-to-play-inline embed-responsive <?php print $v_class; ?>" id="click-to-play-wrapper-<?php print $id; ?>">
  <a class="embed-responsive-item" href="#" onclick="var e=jQuery(this).attr('data-oembed');jQuery(this).parent().append(e);jQuery(this).remove();return false;" data-oembed="<?php print $content; ?>">
    <div class="click-to-play-placeholder embed-responsive-item" id="#click-to-play-<?php print $id; ?>-placeholder"><?php print $placeholder; ?></div>
    <div class="<?php print $play_class; ?>" class=""></div>
  </a>
</div>
