<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<header id="header" class="header" role="header">
  <div class="">
    <nav class="navbar navbar-default" role="navigation">
      <!-- Brand and toggle get grouped for better mobile display -->
      <div class="navbar-header">
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>

        <ul id="logo-menu" class="nav navbar-nav">
          <li>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
              <img class="logo" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
            </a>
          </li>
          <?php if(!$is_front): ?>
            <li>
              <a href="<?php print $front_page; ?>" id="site-name" class="navbar-brand site-name">
                <?php print $site_name; ?>
              </a>
            </li>
          <?php endif; ?>
        </ul>

      </div> <!-- /.navbar-header -->

      <!-- Collect the nav links, forms, and other content for toggling -->
      <div class="collapse navbar-collapse" id="navbar-collapse">
        <?php if ($main_menu): ?>
          <ul id="main-menu" class="menu nav navbar-nav pull-right">
            <?php print render($main_menu); ?>
          </ul>
        <?php endif; ?>
        <?php if ($search_form): ?>
          <?php print $search_form; ?>
        <?php endif; ?>
      </div><!-- /.navbar-collapse -->
    </nav><!-- /.navbar -->
  </div> <!-- /.container -->
</header>

<div id="main-wrapper">
  <div id="main" class="main">
    <?php if ($breadcrumb): ?>
      <div id="breadcrumb" class="visible-desktop">
        <?php print $breadcrumb; ?>
      </div>
    <?php endif; ?>
    <div class="container">
      <?php if ($messages): ?>
        <div id="messages">
          <?php print $messages; ?>
        </div>
      <?php endif; ?>
      <div id="page-header">
        <?php if ($title): ?>
          <div class="page-header">
            <h1 class="title"><?php print $title; ?></h1>
          </div>
        <?php endif; ?>
        <?php if ($tabs): ?>
          <div class="tabs">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>
        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>
      </div>
    </div>
    <div id="content" class="container">
      <?php print render($page['content']); ?>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->

<footer id="footer" class="footer" role="footer">
  <div class="container">
    <?php if ($copyright): ?>
      <small class="copyright pull-left"><?php print $copyright; ?></small>
    <?php endif; ?>
  </div>
  <?php if (!empty($page['footer_left']) || !empty($page['footer_right'])): ?> 
    <div class="footer-columns"><div class="container footer-columns"><div class="row">
      <?php if (!empty($page['footer_left'])): ?> 
        <div class="col-sm-6 footer-left">
          <?php print render($page['footer_left']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_right'])): ?> 
        <div class="col-sm-6 footer-right">
          <?php print render($page['footer_right']); ?>
        </div>
      <?php endif; ?>
    </div></div></div>
  <?php endif; ?>
  <?php if (!empty($page['footer_bottom'])): ?>
    <div class="footer-bottom">
      <?php print render($page['footer_bottom']); ?>
    </div>
  <?php endif; ?>
</footer>