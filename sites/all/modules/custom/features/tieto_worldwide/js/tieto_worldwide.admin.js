/**
 * @file
 * Javascript for manage the language/country selection vs menuselection.
 *
 */
(function ($, Drupal, window, document, undefined) {
  $(document).ready(function () {

    var countrymenu = {
      'en': 'main-menu',
      'zh-hans': 'menu-china',
      'cs': 'menu-czech',
      'da': 'menu-denmark',
      'de': 'menu-germany',
      'de-at': 'menu-austria',
      'en-in': 'menu-india',
      'fi': 'menu-finland',
      'sv': 'menu-sweden',
      'lv': 'menu-latvia',
      'lt': 'menu-lithuania',
      'nl': 'menu-metherlands',
      'nn': 'menu-norway',
      'fil': 'menu-philippines',
      'it': 'menu-italy',
      'et': 'menu-estonia',
      'pl': 'menu-poland',
      'ru': 'menu-russia'
    };

    var country = $('#edit-language');
    var providemenu = $('#edit-menu-enabled');

    // Mark Country selecting mandatory in form
    var formitemlanguage = $('.form-item-language label');
    formitemlanguage.append('<span class="form-required" title="This field is required.">*</span>');

    if (country.change(
      function () {
        if (providemenu.is(':checked')) {
          var menu = $('#edit-menu-parent-menu');
          selectedcountry = country.val();

          // Loop trough valid countries
          // i18n_access is controlling these
          var validMenuVals = [];
          country.children().each(function () {
            validMenuVals.push(countrymenu[this.value]);
          });

          //Remove all other options from menu options than those user has access
          menu.children().each(function (index, el) {
            var $el = $(el);
            if ($.inArray(el.value, validMenuVals) < 0) {
              $el.remove();
            }
          });

          menu.val(countrymenu[selectedcountry]);
          menu.change();
        }
      }
    ));
    if (providemenu.change(
      function () {
        var menu = $('#edit-menu-parent-menu');
        selectedcountry = country.val();

        // Loop trough valid countries
        // i18n_access is controlling these
        var validMenuVals = [];
        country.children().each(function () {
          validMenuVals.push(countrymenu[this.value]);
        });

        //Remove all other options from menu options than those user has access
        menu.children().each(function (index, el) {
          var $el = $(el);
          if ($.inArray(el.value, validMenuVals) < 0) {
            $el.remove();
          }
        });

        menu.val(countrymenu[selectedcountry]);
        menu.change();
      }
    ));
  });

})(jQuery, Drupal, this, this.document);

