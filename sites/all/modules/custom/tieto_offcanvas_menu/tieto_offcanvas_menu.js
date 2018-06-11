var eventBound = false;

(function ($) {
  var $event;

  Drupal.behaviors.tieto_offcanvas_menu = {

    attach : function (context) {
      var offcanvas_menu = $('#offcanvas_menu');
      var offcanvas_menu_links = $('li.offcanvas_menu-link');
      var offcanvas_submenu = $('#block-tieto-offcanvas-menu-offcanvas-menu .menu .menu');

      // Clone all menu links to offcanvas_menu block
      offcanvas_menu.not('.offcanvas_menu-block').addClass('offcanvas_menu-block').append(offcanvas_menu_links.clone()).wrapInner('<ul class="menu"></ul>');

      offcanvas_menu_links.find('.offcanvas_menu-link').each(function() {
        // Removes child offcanvas_menu links as they are already cloned separately
        // Removes non-offcanvas_menu links from first level of menu items
        $(this).find('.offcanvas_menu-link').remove().parents('.offcanvas_menu-link').last().siblings().not('.offcanvas_menu-link').remove();
      });

      // Leave only the items in the offcanvas block.
      offcanvas_menu_links.each(function () {
        var element = $(this);
        if (!element.parent().parent().is('#offcanvas_menu')) {
          $(element).remove();
        }
      });

      // Add a nav element for theming purposes
      offcanvas_menu.find('li.offcanvas_menu-link').children('a').append('<span class="color-slider"></span>').wrap('<span class="button"></span>');
      $('#block-menu-menu-tieto-worldwide .menu__item > span').append('<span class="color-slider"></span>').wrap('<span class="button"></span>');
      offcanvas_submenu.addClass('nav-menu-sub-link-container').find('a.menu__link').addClass('nav-menu-sub-link');

      function offCanvasResize() {
        $('#block-tieto-offcanvas-menu-offcanvas-menu').css('height', $('#page').height() - 76);
      }

      $(document).ready(function () {
        // Remove href attr.
        offcanvas_menu.find('li.offcanvas_menu-link').children('span').not('.button').append('<span class="color-slider"></span>').wrap('<span class="button"></span>');
        offcanvas_menu.find('.megamenu-link li.is-expanded > span').addClass('button-link');

        $('#block-tieto-offcanvas-menu-offcanvas-menu .megamenu-link .button, #block-tieto-offcanvas-menu-offcanvas-menu .button-link, #block-menu-menu-tieto-worldwide .button').click(function(e){
          $(this).toggleClass('is_active');
          $(this).siblings($('.menu')).toggleClass('is_active');
        });

        offCanvasResize();
      })
      offCanvasResize();

      // Additional classes
      offcanvas_menu.addClass('length-' + offcanvas_menu.find('li.offcanvas_menu-link').length).find('li.offcanvas_menu-link').removeClass('first last').first().addClass('first').siblings().andSelf().last().addClass('last');

      //$event = (is_touch_device()) ? 'click' : 'mouseenter mouseleave';
      //offcanvas_menu.find('li.offcanvas_menu-link').bind($event, toggleMenu);
    }
  };

  function toggleMenu(event) {
    var target = event.currentTarget;

    // close others when hover not in use
    $(target).siblings('li').children('ul').stop(true, true).removeClass('active').hide('fast');
    if ($event == 'click') {
      $(target).children('ul').toggleClass('active').slideToggle('fast');
    }
    else {
      if(event.type == 'mouseleave') {
        $(target).children('ul').stop(true, true).removeClass('active').hide('fast');
      } else {
        $(target).children('ul').addClass('active').delay(80).slideDown('fast');
      }
    }
  }

  function is_touch_device() {
    return ('ontouchstart' in window);
  }
})(jQuery);
