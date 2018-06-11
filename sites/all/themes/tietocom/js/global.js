(function (exports) {
'use strict';

/**
 * @file
 * Global scripts, loaded on every page.
 */

(function ($) {

  $(document).ready(function () {
    var hamburger = $('#hamburger');
    var offcanvasSubmenu = $('#block-tieto-offcanvas-menu-offcanvas-menu .nav-menu-sub-link-container');
    var mainmenuMenuitem = $('.region-header .block-menu-block .menu-block-wrapper > .menu > .menu__item');
    var customerareaMenuitem = $('.region-header #block-menu-menu-customer-area .header-block-inner > .menu > .menu__item');

    customerareaMenuitem.clone().prependTo("#offcanvas_menu > .menu").addClass('offcanvas_menu-link visible-mobile').children('a').append('<span class="color-slider"></span>').wrap('<span class="button"></span>');
    mainmenuMenuitem.clone().prependTo("#offcanvas_menu > .menu").addClass('offcanvas_menu-link visible-mobile').children('a').append('<span class="color-slider"></span>').wrap('<span class="button"></span>');

    hamburger.on('click', function () {
      hamburger.toggleClass('is-active');
      $('body').toggleClass('pushed');
      offcanvasSubmenu.removeClass('is_active');
      $('html,body').animate({
        scrollTop: $('#page').offset().top
      }, 1000);
      if (window.scrollY == 0) {
        $('#header .logo').removeClass('fixed').addClass('not-fixed');
      }
      $('.tieto-submenu-megamenu-container').removeClass('is_active');
    });

    $(window).on("load resize",function(e){

      if ($(window).width() <= 870){

        hamburger.on('click', function () {
          $('#block-search-form').toggleClass('is_hidden');
        });

      }

    });

    // Script for automatically move menu items, if there's no enought space.
    var nextHideableElement = 0;
    var isRunning = false; // Need for basic protection for multiple triggers.

    // Start state.
    function checkForEnoughSpaceStart() {
      if (!isRunning) {
        isRunning = true;
        checkForEnoughSpace();
      }
    }

    // Check if there's anought space to hide or show menu element.
    // Also this is a return state after hide or show.
    function checkForEnoughSpace() {
      if (window.innerWidth >= 870) {
        var pos = $('.block-menu-block .header-block-inner > .menu-block-wrapper').offset().left;

        if (pos < 134) {
          hideMenuItem();
        }
        else if (nextHideableElement > 0 && pos - $('.block-menu-block .header-block-inner > .menu-block-wrapper > ul > li').eq(nextHideableElement - 1).outerWidth() > 134) {
          showMenuItem();
        }
      }
      else if (window.innerWidth < 870 && nextHideableElement > 0) {
        showMenuItem();
      }
      isRunning = false;
    }

    // Hide current menu item and show it in the burger menu.
    function hideMenuItem() {
      $('.block-menu-block .header-block-inner > .menu-block-wrapper > ul > li').eq(nextHideableElement).css('display', 'none');
      $('.offcanvas_menu-block > ul > li').eq(nextHideableElement).css('display', 'inline-block');

      nextHideableElement++;
      checkForEnoughSpace();
    }

    // Show current menu item and hide it in the burger menu.
    function showMenuItem() {
      nextHideableElement--;

      $('.block-menu-block .header-block-inner > .menu-block-wrapper > ul > li').eq(nextHideableElement).css('display', '');
      $('.offcanvas_menu-block > ul > li').eq(nextHideableElement).css('display', '');

      checkForEnoughSpace();
    }

    // Set trigger event for initial state.
    $(window).resize(checkForEnoughSpaceStart).trigger('resize');
  });

/*
	// Updates parallax header height with px value instead of vh, so it won't be jumping on Android
	// @todo - remove this from here
	var $header = $('.paragraph--type--header.paragraph--view-mode--default');
	if ($header.length) {
		$header.height($header.height());
	}*/

  /*var megamenuParent = $('#megamenu-parent');
  var megamenuChild = $('.tieto-submenu-megamenu-container');
  var megamenuExit = $('.megamenu-exit');

  megamenuParent.on('click', function(){
    megamenuChild.toggleClass('is-active');
    megamenuParent.toggleClass('is-active');
  });

  megamenuExit.on('click', function(){
    megamenuChild.removeClass('is-active');
    megamenuParent.removeClass('is-active');
  });*/


})(jQuery);

}((this.LaravelElixirBundle = this.LaravelElixirBundle || {})));

//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjpudWxsLCJzb3VyY2VzIjpbIi9ob21lL2dwYXAvQ29kZS93d3cvY2FtcGFpZ25zLmRldi93ZWIvdGhlbWVzL3RpZXRvX2FkbWluL3NyYy9zY3JpcHRzL2dsb2JhbC5qcyJdLCJzb3VyY2VzQ29udGVudCI6WyIvKipcbiAqIEBmaWxlXG4gKiBHbG9iYWwgc2NyaXB0cywgbG9hZGVkIG9uIGV2ZXJ5IHBhZ2UuXG4gKi9cblxuKCQgPT4ge1xuXG5cdGNvbnN0IGhhbWJ1cmdlciA9ICQoJyNoYW1idXJnZXInKVxuXG5cdGhhbWJ1cmdlci5vbignY2xpY2snLCAoKSA9PiB7XG5cdFx0aGFtYnVyZ2VyLnRvZ2dsZUNsYXNzKCdpcy1hY3RpdmUnKVxuXHR9KVxuXG5cdC8vIFVwZGF0ZXMgcGFyYWxsYXggaGVhZGVyIGhlaWdodCB3aXRoIHB4IHZhbHVlIGluc3RlYWQgb2YgdmgsIHNvIGl0IHdvbid0IGJlIGp1bXBpbmcgb24gQW5kcm9pZFxuXHQvLyBAdG9kbyAtIHJlbW92ZSB0aGlzIGZyb20gaGVyZVxuXHRjb25zdCAkaGVhZGVyID0gJCgnLnBhcmFncmFwaC0tdHlwZS0taGVhZGVyLnBhcmFncmFwaC0tdmlldy1tb2RlLS1kZWZhdWx0Jyk7XG5cdGlmICgkaGVhZGVyLmxlbmd0aCkge1xuXHRcdCRoZWFkZXIuaGVpZ2h0KCRoZWFkZXIuaGVpZ2h0KCkpO1xuXHR9XG5cbn0pKGpRdWVyeSlcbiJdLCJuYW1lcyI6WyJjb25zdCJdLCJtYXBwaW5ncyI6Ijs7O0FBQUE7Ozs7O0FBS0EsQ0FBQyxVQUFBLENBQUMsRUFBQzs7Q0FFRkEsSUFBTSxTQUFTLEdBQUcsQ0FBQyxDQUFDLFlBQVksQ0FBQyxDQUFBOztDQUVqQyxTQUFTLENBQUMsRUFBRSxDQUFDLE9BQU8sRUFBRSxZQUFHO0VBQ3hCLFNBQVMsQ0FBQyxXQUFXLENBQUMsV0FBVyxDQUFDLENBQUE7RUFDbEMsQ0FBQyxDQUFBOzs7O0NBSUZBLElBQU0sT0FBTyxHQUFHLENBQUMsQ0FBQyx3REFBd0QsQ0FBQyxDQUFDO0NBQzVFLElBQUksT0FBTyxDQUFDLE1BQU0sRUFBRTtFQUNuQixPQUFPLENBQUMsTUFBTSxDQUFDLE9BQU8sQ0FBQyxNQUFNLEVBQUUsQ0FBQyxDQUFDO0VBQ2pDOztDQUVELENBQUMsQ0FBQyxNQUFNLENBQUMsQ0FBQTs7In0=
