<div class="click-to-play click-to-play-inline flex-video" id="click-to-play-wrapper-<?php print $id; ?>">
  <a href="#" onclick="var e=jQuery(this).attr('data-oembed');console.log(e);jQuery(this).parent().append(e);jQuery(this).remove();return false;" data-oembed="<?php print $content; ?>">
    <div class="click-to-play-placeholder" id="#click-to-play-<?php print $id; ?>-placeholder"><?php print $placeholder; ?></div>
    <div class="<?php print $play_class; ?>" class=""></div>
  </a>
</div>
