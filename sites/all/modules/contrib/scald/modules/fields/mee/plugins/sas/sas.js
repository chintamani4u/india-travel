(function($) {
// Define the WYSIWYG plugin.
Drupal.wysiwyg.plugins.sas = {
  invoke: function (data, settings, instanceId) {
    alert(Drupal.t('This button does nothing. The conversion happens on attach/detach.'));
  },

  /**
   * Attach function, called when a rich text editor loads.
   */
  attach: function (content, settings, instanceId) {
    if(typeof Drupal.settings.mee != 'undefined')
    return Drupal.settings.mee.sas && Drupal.dnd ? Drupal.dnd.sas2html(content) : content;
    else
    return Drupal.dnd ? Drupal.dnd.sas2html(content) : content;
  },

  /**
   * Detach function, called when a rich text editor detaches.
   */
  detach: function (content, settings, instanceId) {
    if(typeof Drupal.settings.mee != 'undefined')
    return Drupal.settings.mee.sas && Drupal.dnd ? Drupal.dnd.html2sas(content) : content;
    else
    return Drupal.dnd ? Drupal.dnd.sas2html(content) : content;
  }
};
})(jQuery);