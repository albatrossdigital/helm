<?php if($no_library): ?>
  JQuery Social Stream plugin not found.
<?php else: ?>
  <div id="wrapper">
    <div id="container"> 
      <?php if ($type === 'wall'): ?>
        <div id="wall" class="full-wall">
          <div id="social-stream"></div>
        </div>
      <?php else: ?>
        <div id="social-stream"></div>
      <?php endif; ?>
    </div>
  </div>
<?php endif; ?>