var eventBound = false;

(function ($) {
  var $event;

  Drupal.behaviors.tieto_megamenus = {

    attach : function (context) {
      // Remove href attribute, link is only used as a toggle
      var hamburger = $('#hamburger');
      var offcanvasSubmenu = $('#block-tieto-offcanvas-menu-offcanvas-menu .nav-menu-sub-link-container');
      var megamenu_menuitem = $('li.megamenu-link');
      var megamenu_link = megamenu_menuitem.children('span');
      var megamenu_modal = megamenu_menuitem.children($('ul.menu')).not('span');

      if (context == document) {

        var header_mainmenu = $('.block-menu-block, #block-menu-menu-customer-area, #block-search-form').wrapAll('<div class="header-mainmenu"></div>');
        megamenu_link.addClass('megamenu-parent');
        megamenu_modal.addClass('tieto-submenu-megamenu-container-inner clearfix').wrap('<div class="tieto-submenu-megamenu-container"></div>');

        $('<div class="megamenu-exit"><span></span><span></span></div>').prependTo(megamenu_modal).click(function(e){
          $(this).addClass('is_active');
          megamenu_link.toggleClass('is_active');
          $('.tieto-submenu-megamenu-container').toggleClass('is_active');
          offcanvasSubmenu.removeClass('is_active');
          if (window.scrollY == 0) {
            $('#header .logo').removeClass('fixed').addClass('not-fixed');
          }
          hamburger.removeClass('is-active');
          $('body').removeClass('pushed');
        });

        megamenu_link.click(function(e){
          $(this).toggleClass('is_active');
          $(this).siblings($('.tieto-submenu-megamenu-container')).toggleClass('is_active');
          offcanvasSubmenu.removeClass('is_active');
          if ($(this).siblings($('.tieto-submenu-megamenu-container')).hasClass('is_active')) {
            $('#header .logo').addClass('fixed').removeClass('not-fixed');
          }
          else if (window.scrollY == 0) {
            $('#header .logo').removeClass('fixed').addClass('not-fixed');
          }
          hamburger.removeClass('is-active');
          $('body').removeClass('pushed');
        });

        if($('.segment-title').length == 0) {
          $('body').addClass('not-segment-title');
        }

        $('.tieto-submenu-megamenu-container-inner.clearfix').children('li').each(function (index, element) {
          var link = $($(element).children('a').first());
          var linkText = link.text();
          link.replaceWith("<span title='" + linkText + "'>" + linkText + "</span>")
        });

      };



  //    // Clone all menu links to megamenu block
  //    $('#megamenu').not('.megamenu-block').addClass('megamenu-block').append($('li.megamenu-link').clone()).wrapInner('<ul class="menu"></ul>');
  //
  //    $('#megamenu').find('.megamenu-link').each(function() {
  //      // Removes child megamenu links as they are already cloned separately
  //      // Removes non-megamenu links from first level of menu items
  //      $(this).find('.megamenu-link').remove().parents('.megamenu-link').last().siblings().not('.megamenu-link').remove();
  //    });
  //
  //    // Add a nav element for theming purposes
  //    $('#megamenu').find('li.megamenu-link').children('a').append('<span class="subnav"></span>').wrap('<span class="button"></span>');
  //
  //    // Additional classes
  //    $('#megamenu').addClass('length-' + $('#megamenu').find('li.megamenu-link').length).find('li.megamenu-link').removeClass('first last').first().addClass('first').siblings().andSelf().last().addClass('last');
  //
  //
  //    $event = (is_touch_device()) ? 'click' : 'mouseenter mouseleave';
  //    $('#megamenu li.megamenu-link').bind($event, toggleMenu);
    }
  }
  //
  //function toggleMenu(event) {
  //  var target = event.currentTarget;
  //
  //  // close others when hover not in use
  //  $(target).siblings('li').children('ul').stop(true, true).removeClass('active').hide('fast');
  //  if ($event === 'click') {
  //    $(target).children('ul').toggleClass('active').slideToggle('fast');
  //  }
  //  else {
  //    if(event.type === 'mouseleave') {
  //      $(target).children('ul').stop(true, true).removeClass('active').hide('fast');
  //    } else {
  //      $(target).children('ul').addClass('active').delay(80).slideDown('fast');
  //    }
  //  }
  //}
  //
  //function is_touch_device() {
  //  return !!('ontouchstart' in window);
  //}
})(jQuery);
