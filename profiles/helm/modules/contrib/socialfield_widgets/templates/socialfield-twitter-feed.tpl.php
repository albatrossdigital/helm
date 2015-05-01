<div class="twitter-feed-block-wrapper">
  <?php if ($follow_link): ?>
    <div class="twitter-feed-block-header clearfix">
      <a href="http://twitter.com/<?php print $screen_name; ?>" class="twitter-follow-link"><?php print $follow_text; ?></a>
    </div>
  <?php endif; ?>
  <div class="twitter-feed-block-content">
    <a class="twitter-timeline" href="https://twitter.com/<?php print $screen_name; ?>" <?php print $data_attributes; ?>><?php print $placeholder_text; ?></a>
  </div>
  <script>window.twttr=(function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],t=window.twttr||{};if(d.getElementById(id))return;js=d.createElement(s);js.id=id;js.src="https://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);t._e=[];t.ready=function(f){t._e.push(f);};return t;}(document,"script","twitter-wjs"));</script>
</div>
