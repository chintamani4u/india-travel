(function ($, Drupal, window, document, undefined) {
    $(document).ready(function () {

        var country = $("#edit-country").val();
        //Initially empty the ZipCode Value
        //$('#edit-zip').val("");


        $('#edit-country').change(function () {
            var country = $("#edit-country").val();
            // @@TODO: If country is changed we need to empty query string also
            /*
             * Empty the zip if country changes or is different than All
             */
            if (country != Drupal.t('All')) {
                $('#edit-city').val("");
                $('#edit-zip').val("");
            }
        });

        // addresses laying out horizontal divs nicely
/*
        $('.view-display-id-office_addresses .view-content').masonry({
          itemSelector : '.view-grouping',
          isAnimated : false,
          isResizable : true,
          columnWidth : function( containerWidth ) {
            return containerWidth / 3;
          }
        });
        */

    });


})(jQuery, Drupal, this, this.document);