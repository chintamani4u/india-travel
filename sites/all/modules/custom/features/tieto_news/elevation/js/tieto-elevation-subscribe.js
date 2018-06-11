(function ($) {

// potentially dangerous chars to be removed before sending a request to ASP.NET
var dagerousChars = new RegExp('(&#)|(<(?=(!|\\w|\\%|/)))', 'g');

$(document).ready(function () {

    $(".eventcheck").click(function () {
        ChangeSelection(this);
        return false;
    });

    // validate releases subscription form
    $('#send-releases-subscription').click(function () {
        return ValidateReleasesSubscriptionForm(true);
    });

    // validate releases unsubscription form
    $('#send-releases-unsubscription').click(function () {
        return ValidateReleasesSubscriptionForm(false);
    });

    // add more industries/offerings
    $('.add-more').click(function () {
        AddMoreIndustriesOfferings();
        return false;
    });

    // populate industries/offerings dropdown
    PopulateIndustriesOfferingsDropdown();

    // select default checkboxes and dropdown item on releases subscribe form
    SelectDefaultCheckboxes(this);
    SelectDefaultDropDownItem(this);
});  // end of document.ready

function ShowErrorOnForm(field, messageID, currentElem) {
    $("#" + field).addClass('error');
    $("span#" + messageID).css('display', 'block');
    return null;
}

function RemoveErrorMessages() {
    $('div.error').removeClass("error");
    $('input.error').removeClass("error");
    $('span.error').hide();
}

function ClickRadioBox(elem) {
    if (elem.hasClass('eventchecked')) {
        // don't uncheck radio box
    } else {
        // uncheck eventually checked other radio box(es)
        var par = elem.parent();

        if (par.hasClass('selection-field-area')) {

            par.parent().find('div.field-area-selected').each(function () {
                $(this).removeClass('field-area-selected').addClass('field-area-disabled');
            });
            par.removeClass('field-area-disabled').addClass('field-area-selected');

            par = par.parent();
        }

        par.find('.eventchecked :radio').each(function () {
            $(this).parent().removeClass('eventchecked')
            $(this).prop('checked', false);
        });

        // checking
        elem.addClass('eventchecked');
        elem.children('input').prop('checked', true);

        // disable/enable industry/offerings drop down
        if ($(elem).find('#selected-industries').length > 0)
            $('#dropdown-values').prop('disabled', false);
        else {
            $('#dropdown-values').find('option:first').attr('selected', 'selected');
            $('#dropdown-values').prop('disabled', true);
        }
    }
    return false;
}

function IsValidEmail(email) {
    var emailPattern = /^[a-zA-Z0-9]+[\w-]*([\.-]+[a-zA-Z0-9]+)*@[a-zA-Z0-9][a-zA-Z0-9-]+\.([a-zA-Z0-9-]+\.){0,2}[a-zA-Z]{2,10}$/;
    return emailPattern.test(email);
}

function GetInputBoxValue(box) {
	var value = box.val().replace(dagerousChars, "");
    if (value == box.attr('title')) {
        return "";
    }
    return value;
}

function ValidateReleasesSubscriptionForm(subscribe) {
    var isValid = true;
    RemoveErrorMessages();

    var email = GetInputBoxValue($('#email'));
    if (email == "") {
        isValid = false;
        ShowErrorOnForm("email", "emailMissing");
    } else if (!IsValidEmail(email)) {
        ShowErrorOnForm("email", "emailAddresNotValid");
        isValid = false;
    }

    // if unsubscribe form need only to validate email
    if (!subscribe)
        return isValid;

    var name = GetInputBoxValue($('#f_name'));
    if (name == "") {
        isValid = false;
        ShowErrorOnForm("f_name", "nameMissing");
    }

    var selectedRadio = $('.form-selection .eventchecked :radio');

    // check if there is selected at least one check box in selected group
    if ($(selectedRadio).attr('id') == 'selected-industries') {
        if ($('.industries-selection input:checked').length == 0) {
            ShowErrorOnForm("all-releases", "languageMissing");
            isValid = false;
        }
    }
    else if ($(selectedRadio).attr('id') == 'press-and-stock') {
        if ($(selectedRadio).parent().next().find('input:checked').length == 0) {
            ShowErrorOnForm("all-releases", "languageMissing");
            isValid = false;
        }
    }

    // remove selection for checkboxes from not selected groups before submitting if form is valid
    if (isValid) {
        $('.form-selection :radio').each(function () {
            if ($(this).attr('id') == 'selected-industries') {
                if ($(this).prop('checked') == false) {
                    $('.industries-selection input:checked').each(function () {
                        $(this).parent().removeClass('eventchecked');
                        $(this).prop('checked', false);
                    });
                }
            }
            else {
                if ($(this).prop('checked') == false) {
                    $(this).parent().next().find('input:checked').each(function () {
                        $(this).parent().removeClass('eventchecked');
                        $(this).prop('checked', false);
                    });
                }
            }
        });


        // if selected radio button for all releases need to check which checkbox is selected and add hidden fields with all values for specific industries
        var allReleases = $('#press-and-stock');
        if ($(allReleases).prop('checked') == true) {
            $(allReleases).parent().next().find('input:checked').each(function () {
                var className;
                var index = 0;
                if ($(this).parent().hasClass('eng')) {
                    index = 0;
                }
                else if ($(this).parent().hasClass('fin')) {
                    index = 1;
                }
                else if ($(this).parent().hasClass('swe')) {
                    index = 2;
                }

                $('#dropdown-all-values option').each(function () {
                    var val = $(this).val();
                    if (val != '') {
                        var values = val.split('|');

                        if (values.length == 3) {
                            $('.form-leave-comment').append('<input type="hidden" name="p_list_id" value="' + values[index] + '" />');
                        }
                    }
                });
            });
        }

        var stockOnly = $('#stock-only');
        var url;
        if ($(stockOnly).prop('checked') == true) {
            url = $('#StockUrl').val();

            //create inputs with correct names for stock provider
            $('#stockHelpers').append('<input type="hidden" name="selectedEmail" value="' + email + '" />');
            $('#stockHelpers').append('<input type="hidden" name="selectedFirstName" value="' + name + '" />');
            $('#stockHelpers').append('<input type="hidden" name="selectedCompany" value="' + GetInputBoxValue($('#organization')) + '" />');

            // remove press releases hidden fields
            $('#pressHelpers').remove();
        }
        else {
            url = $('#PressUrl').val();

            // remove stock releases hidden fields
            $('#stockHelpers').remove();

            // remove also preffered language for stock releases, press releases subscription module doesn't accept extra parameters
            $('#preferredLanguage').remove();
        }

        // set correct subscription URL
        $("#releases-subscribe-form").attr("action", url);
    }

    return isValid;
}

function PopulateIndustriesOfferingsDropdown() {
    $('#dropdown-values').html($('#dropdown-all-values').html());

    // fix for Chrome - if select is disabled selector $('#dropdown-values option:disabled') returns all options
    if ($('#dropdown-values').prop('disabled')) {
        $('#dropdown-values').prop('disabled', false);
        $('#dropdown-values option:disabled').remove();
        $('#dropdown-values').prop('disabled', true);
    }
    else
        $('#dropdown-values option:disabled').remove();
}

function AddMoreIndustriesOfferings() {
    var dropdownArea = $('.dropdown-area:first');
    var select = $(dropdownArea).find('select#dropdown-values');
    var selected = $(select).find('option:selected');
    var val = $(selected).val();
    var html = $(selected).html();

    if (val == '')
        return;
    $(dropdownArea).parent().append('<div class="dropdown-area">' + dropdownArea.html() + '</div>');

    // set in all values selected item as disabled
    $(dropdownArea).find("select#dropdown-all-values option[value='" + val + "']").prop('disabled', true);

    // remove selected item from drop down
    $(selected).remove();

    dropdownArea = $('.dropdown-area:last');
    select = $(dropdownArea).find('select#dropdown-values');


    var values = val.split('|');

    // set correctly checkboxes values
    if (values.length == 3) {
        $(select).parent().parent().find('.eng input').val(values[0]);
        $(select).parent().parent().find('.fin input').val(values[1]);
        $(select).parent().parent().find('.swe input').val(values[2]);
    }

    SelectDefaultCheckboxes($(select).parent().parent());

    // add text value with selected item
    $(select).before(html);

    // remove drop down from new section
    $(select).remove();
    $(dropdownArea).find('#dropdown-all-values').remove();

    // remove add more link from new section
    $(dropdownArea).find('.add-more').remove();

    // show checkboxes 
    $(dropdownArea).find('.select-industries').show();

    // bind change selection event for checkboxes
    $(dropdownArea).find('.select-industries .select-language .eventcheck').each(function () {
        $(this).click(function () {
            ChangeSelection(this);
            return false;
        });
    });

    var remove = $(dropdownArea).find('#remove');

    // display remove link
    $(remove).css('display', 'inline');

    // bind click event on remove link
    $(remove).click(function () {
        RemoveIndustriesOfferings(this);
        return false;
    });
}

function RemoveIndustriesOfferings(obj) {
    // if correct radio button is not checked don't do anything
    if ($('#selected-industries:checked').length == 0)
        return false

    var parent = $(obj).parents('div.dropdown-area');
    var val = $(parent).find('.eng input').val() + '|' + $(parent).find('.fin input').val() + '|' + $(parent).find('.swe input').val();

    // remove disabled attribute for later repopulation of items
    $("#dropdown-all-values option[value='" + val + "']").prop('disabled', false);

    $(obj).parents('div.dropdown-area').remove();

    PopulateIndustriesOfferingsDropdown();
}

function SelectDefaultCheckboxes(obj) {
    var lang = $('#RootPageLanguage').val();

    $(obj).find('a.' + lang).each(function () {
        if ($(this).children('input').val() != '') {
            $(this).addClass('eventchecked');
            $(this).children('input').prop('checked', true);
        }
    });
}

function SelectDefaultDropDownItem(obj) {
    var lang = $('#RootPageLanguage').val();
    
    $(obj).find('option.' + lang).attr('selected', 'selected')
}

function ChangeSelection(obj) {
    if ($(obj).children(':radio').length > 0) {
        // handle radio box clicking
        ClickRadioBox($(obj));
        return false;
    }

    // block selecting of checkbox when it has over it radio button
    var radio = $(obj).parent().prev();
    if ($(radio).length > 0 && $(radio)[0].tagName.toLowerCase() == 'a') {
        if ($(radio).hasClass('radio') && $(radio).hasClass('eventchecked')) {
            // it is active radio button group so don't need to return
        } else {
            return false;
        }
    } else {
        var parent = $(obj).parents('.industries-selection');
        if ($(parent).length > 0) {
            // if we are here it means some checkbox was selected from industries selection
            var selectLink = $('#selected-industries');

            if ($(selectLink).length > 0 && $(selectLink).parent().hasClass('radio') && $(selectLink).parent().hasClass('eventchecked')) {
                // it is active radio button group so don't need to return
            } else {
                return false;
            }
        }
    }

    if ($(obj).hasClass('eventchecked')) {
        // unchecking
        $(obj).removeClass('eventchecked');
        $(obj).children('input').prop('checked', false);
    } else {
        // checking
        $(obj).addClass('eventchecked');
        $(obj).children('input').prop('checked', true);
        var thisParents = $(obj).parents();
        if (thisParents.eq(1).hasClass('columns-top')) {
            // "all results" checked
            // unchceck all other inputs
            var checkboxes = thisParents.eq(2).find('.columns-center,.columns-right');
            checkboxes.find('.eventchecked').each(function () {
                $(this).removeClass('eventchecked')
                $(this).children('input').prop('checked', false);
            });
        } else {
            // other item checked
            var allItemsInput = thisParents.eq(2).children('.columns-top').find('a');
            // uncheck "all results" check
            allItemsInput.removeClass('eventchecked')
            allItemsInput.children('input').prop('checked', false);
        }
    }
}

})(jQuery);
