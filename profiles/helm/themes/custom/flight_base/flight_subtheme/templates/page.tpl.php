<!--.page -->
<div data-offcanvas role="document" class="page off-canvas-wrap"><div class="inner-wrap">

  <!--.l-header region -->
  <header role="banner" class="l-header">

    <!-- .top-bar -->
    <div class="contain-to-grid">
      <nav class="tab-bar">
        <section class="title-area left">
          <a class="left-off-canvas-toggle columns" href="#"><span><?php print $top_bar_menu_text; ?></span> <i class="fa-bars"></i></a>
        </section>
        <section class="top-bar-section left-off-canvas-menu">
          <a class="left-off-canvas-toggle" href="#"><span><?php print t('Close'); ?></span> <i class="fa-times"></i></a>
          <?php if ($top_bar_main_menu) :?>
            <?php print $top_bar_main_menu; ?>
          <?php endif; ?>
          <?php if ($top_bar_secondary_menu) :?>
            <?php print $top_bar_secondary_menu; ?>
          <?php endif; ?>
          <?php if (!empty($page['topbar'])): ?>
            <?php print render($page['topbar']); ?>
          <?php endif; ?>
        </section>
      </nav>
    </div>
    <!--/.top-bar -->

    <!-- Title, slogan -->
    <section class="l-branding"><div class="row">

      <!--.l-logo -->
      <div class="l-logo medium-3 columns">

        <?php if ($linked_logo): print $linked_logo; endif; ?>

        <div id="site-name" class="element-invisible">
          <strong>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </strong>
        </div>

      </div>
      <!-- /.l-logo -->

      <!--.l-header-region -->
      <div class="l-header-region medium-9 columns">
        <?php print render($page['header']); ?>
      </div>
      <!--/.l-header-region -->

    </div></section>
    <!-- End title, slogan and menu -->

  </header>
  <!--/.l-header -->

  <?php if (!empty($page['featured'])): ?>
    <!--/.featured -->
    <section class="l-featured row">
      <div class="medium-12 columns">
        <?php print render($page['featured']); ?>
      </div>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--/.l-messages -->
    <section class="l-messages row">
      <div class="medium-12 columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--/.l-help -->
    <section class="l-help row">
      <div class="medium-12 columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <main role="main" class="row l-main">
    <div class="<?php print $main_grid; ?> main columns">
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlight panel callout">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>

      <a id="main-content"></a>

      <?php if ($breadcrumb): print $breadcrumb; endif; ?>
      
      <?php print render($title_prefix); ?>
      <?php if ($title && !$is_front): ?>
        <h1 id="page-title" class="title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
        <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <?php print render($page['content']); ?>
    </div>
    <!--/.main region -->

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>
  <!--/.main-->

  <?php if (!empty($page['triptych_full']) || !empty($page['triptych_first']) || !empty($page['triptych_middle']) || !empty($page['triptych_last'])): ?>
    <!--.triptych-->
    <section class="l-triptych row">
      <div class="triptych-full medium-12 columns">
        <?php print render($page['triptych_full']); ?>
      </div>
      <div class="triptych-first medium-4 columns">
        <?php print render($page['triptych_first']); ?>
      </div>
      <div class="triptych-middle medium-4 columns">
        <?php print render($page['triptych_middle']); ?>
      </div>
      <div class="triptych-last medium-4 columns">
        <?php print render($page['triptych_last']); ?>
      </div>
    </section>
    <!--/.triptych -->
  <?php endif; ?>

  <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn']) || !empty($page['footer_fourthcolumn'])): ?>
    <!--.footer-sections -->
    <section class="row l-footer-sections">
      <?php if (!empty($page['footer_firstcolumn'])): ?>
        <div class="footer-first medium-3 columns">
          <?php print render($page['footer_firstcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_secondcolumn'])): ?>
        <div class="footer-second medium-3 columns">
          <?php print render($page['footer_secondcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_thirdcolumn'])): ?>
        <div class="footer-third medium-3 columns">
          <?php print render($page['footer_thirdcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_fourthcolumn'])): ?>
        <div class="footer-fourth medium-3 columns">
          <?php print render($page['footer_fourthcolumn']); ?>
        </div>
      <?php endif; ?>
    </section>
    <!--/.footer-sections-->
  <?php endif; ?>

  <!--.l-footer-->
  <footer class="l-footer" role="contentinfo"><div class="row">
    <?php if (!empty($page['footer'])): ?>
      <div class="footer medium-12 columns">
        <?php print render($page['footer']); ?>
      </div>
    <?php endif; ?>

    <div class="footer-bottom medium-12 columns">
      <div class="footer-site-name">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
      </div>
      <?php if (!empty($page['footer_bottom'])): ?>
        <?php print render($page['footer_bottom']); ?>
      <?php endif; ?>
    </div>
  </div></footer>
  <!--/.footer-->

  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div></div>
<!--/.page -->
