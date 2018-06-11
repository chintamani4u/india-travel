<?php drupal_add_css(drupal_get_path('theme', 'tietocom') . '/css/careers.css');
/*$index_status = search_api_index_status(search_api_index_load('tieto_node_solr_index'));
if($index_status['indexed']==0)
	drupal_goto('careers/all-open-jobs');*/
?>
<div id="page" class="<?php print $classes; ?>">

  <?php if ($page['draw']): ?>
    <div id="draw-wrapper">
      <div class="container clearfix">
        <div id="draw"><?php print render($page['draw']); ?></div>
      </div>
    </div>
  <?php endif; ?>

  <div id="header-wrapper">
    <?php if ($page['draw']): ?>
      <div id="toggle-wrapper">
        <div class="container clearfix">
          <div id="toggle"><?php print $draw_link; ?></div>
        </div>
      </div>
    <?php endif; ?>

    <header id="header" role="banner">
      <div class="header-image to-be-pushed">
        <?php
        print views_embed_view('main_carousel', 'block_1');
        ?>
        <header id="header" role="banner">
      </div>
      <?php if ($logo && isset($node_type) && $node_type == 'key_topics'): ?>
        <span title="<?php print t('Home'); ?>" rel="home" id="logo" class="logo">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo-click" class="logo-click"></a>
            </span>
        <div class="mobile-nav-key-topics"></div>
      <?php endif; ?>

      <div class="header-inner">

        <?php if ($site_name || $site_slogan): ?>
          <hgroup id="name-and-slogan">
            <?php if ($site_name): ?>
              <h1 id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>

            <?php if ($site_slogan): ?>
              <h2 id="site-slogan"><?php print $site_slogan; ?></h2>
            <?php endif; ?>
          </hgroup><!-- /#name-and-slogan -->
        <?php endif; ?>

        <?php if ($secondary_menu): ?>
          <nav id="secondary-menu" role="navigation">
            <?php print theme('links__system_secondary_menu', array(
              'links'      => $secondary_menu,
              'attributes' => array(
                'class' => array('links', 'inline', 'clearfix'),
              ),
              'heading'    => array(
                'text'  => $secondary_menu_heading,
                'level' => 'h2',
                'class' => array('element-invisible'),
              ),
            )); ?>
          </nav>
        <?php endif; ?>

        <?php if ($logo): ?>
          <div class="logo not-fixed">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
              <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
            </a>
          </div>

        <?php endif; ?>

        <div id="region_header_container" class="region-header-container">
          <?php print render($page['header']); ?>
        </div>

      </div><!-- /.header-inner -->
    </header>
  </div>
  <div id="career-main" class="to-be-pushed">

    <div class="career-container" role="main">
      <div id="content-inner">
        <?php print render($page['content']); ?>
      </div>
    </div><!-- /#content -->

    <?php /*<div id="navigation">

            <?php if ($main_menu): ?>
            <nav id="main-menu" role="navigation">
                <?php
                // This code snippet is hard to modify. We recommend turning off the
                // "Main menu" on your sub-theme's settings form, deleting this PHP
                // code block, and, instead, using the "Menu block" module.
                // @see http://drupal.org/project/menu_block
                print theme('links__system_main_menu', array(
                    'links' => $main_menu,
                    'attributes' => array(
                        'class' => array('links', 'inline', 'clearfix'),
                    ),
                    'heading' => array(
                        'text' => t('Main menu'),
                        'level' => 'h2',
                        'class' => array('element-invisible'),
                    ),
                )); ?>
            </nav>
            <?php endif; ?>

            <?php print render($page['navigation']); ?>

        </div><!-- /#navigation -->*/
    ?>

    <?php
    // Render the sidebars to see if there's anything in them.
    $sidebar_first = render($page['sidebar_first']);
    $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside><!-- /.sidebars -->
    <?php endif; ?>

  </div><!-- /#main -->

  <?php print render($page['footer']); ?>

</div><!-- /#page -->

<?php print render($page['bottom']); ?>
<?php drupal_add_js(drupal_get_path('theme', 'tietocom') . '/js/careers.js'); ?>
