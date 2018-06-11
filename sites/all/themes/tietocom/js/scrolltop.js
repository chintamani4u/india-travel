(function ($) {
  'use strict';

  $(window).on("load resize scroll",function(e){

      var targets = $('.header-inner .logo');
      var min_height = 50;
      var megamenu = $('li.megamenu-link').children('span').siblings($('.tieto-submenu-megamenu-container'));

      // hide topbar on scroll down
      if ($(window).scrollTop() > min_height) {
        targets.removeClass('not-fixed');
        targets.addClass('fixed');
      }
      else if ($(window).scrollTop() < min_height && megamenu.hasClass('is_active')) {
        targets.removeClass('not-fixed');
        targets.addClass('fixed');
      }
      else if ($(window).scrollTop() < min_height) {
        targets.removeClass('fixed');
        targets.addClass('not-fixed');
      }

  });

}(jQuery));

