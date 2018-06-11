// potentially dangerous chars to be removed before sending a request to ASP.NET
var dagerousChars = new RegExp('(&#)|(<(?=(!|\\w|\\%|/)))', 'g');
var carouselTimeout;
var carouselDelay = 7000;
var themeIcon = '/img/new-icon-themes-page.png';
var themeSelIcon = '/img/new-icon-themes-page-sel.png';

(function ($) {
    // vertically align element
    $.fn.vAlign = function () {
        return this.each(function (i) {
            var ah = $(this).height();
            var ph = $(this).parent().height();
            var mh = (ph - ah) / 2;
            $(this).css('margin-top', mh);
        });
    };
})(jQuery);

$(document).ready(function () {
    var language = window.navigator.userLanguage || window.navigator.language;
    if (language.indexOf('ru') > -1) {
        document.body.style.fontFamily = "Helvetica CY,Helvetica,Arial,sans-serif";
    }
    
	//top menu navigation
	var subMenuLinks = $('#main-nav').find('.down-nav'), timeout;
	var industryTopNavigation = $("#main-nav").find('#industry-menu-cont');
	
	industryTopNavigation.css({'visibility':'hidden'});
	industryTopNavigation.addClass('open');
	wraperMinHeight=parseInt($('#wrapper').css('min-height'), 10);
	if($(window).width()>480) {
		var industryTopNavigationContentHeight = (($('#main-nav').children('ul').height()) + industryTopNavigation.find('.industry-menu:first').height() + 93);
		if(industryTopNavigationContentHeight < wraperMinHeight) industryTopNavigationContentHeight=wraperMinHeight; 
	}
	else {
		var industryTopNavigationContentHeight = (($('#main-nav').children('ul').height()) + industryTopNavigation.find('.industry-menu:last').height() + 83);
	}
	industryTopNavigation.removeClass('open');
	industryTopNavigation.css({'visibility':'visible'});

    if (subMenuLinks.length > 0) {
        subMenuLinks.after("<span class='submenu-arrow'></span><span id='industry-shadow-fix'></span>")
		//top submenu hover for desktops
		if(parseInt($('#wrapper').width())>770) {
			subMenuLinks.parent().mouseenter(function () {
	            var item = $(this);
	            if(item.attr('id')=="industry-top-menu") {
					$(this).css('z-index', 1000);
					subMenuLinks.after(""); 				
					if (item.hasClass('industry-open') === false) {
						timeout = setTimeout(function () {
		                    industryTopNavigation.addClass('open');
		                    item.addClass('industry-open');	                    
		                    $('#wrapper').css('min-height',industryTopNavigationContentHeight + 'px');
		                }, 500);
					} 
					else {
						clearTimeout(timeout);
					}        	
	            }
				else { 
		            $(this).css('z-index', 1000).siblings('li').css('z-index', 500);
		            if (item.find('.submenu').hasClass('open') === false) {
		                timeout = setTimeout(function () {
		                    item.find('.submenu').addClass('open');
		                    item.find('.submenu').css('display', 'inline');
		                    $('#wrapper').css('min-height',industryTopNavigationContentHeight + 'px');
		                }, 500);
		            } else {
		                clearTimeout(timeout);
		            }
		        }
	        }).bind("mouseleave", function (e) {
	            var item = $(this);           
	        	if(item.attr('id')=="industry-top-menu") {
	        	
	        		timeout = setTimeout(function () {
						industryTopNavigation.removeClass('open');
						item.removeClass('industry-open');
						$('#wrapper').removeAttr("style");
					}, 500);
					
					industryTopNavigation.mouseenter(function () {
						clearTimeout(timeout);
						timeout = setTimeout(function () {
							industryTopNavigation.addClass('open');
		                	item.addClass('industry-open');
		                	$('#wrapper').css('min-height',industryTopNavigationContentHeight + 'px');
		                }, 500);
					}).bind("mouseleave", function (e) {
						clearTimeout(timeout);
	        			timeout = setTimeout(function () {
							industryTopNavigation.removeClass('open');
							item.removeClass('industry-open');
							$('#wrapper').removeAttr("style");
						}, 500);
	        			item.mouseenter(function () {
	        				timeout = setTimeout(function () {
								industryTopNavigation.addClass('open');
								item.addClass('industry-open');
								$('#wrapper').css('min-height',industryTopNavigationContentHeight + 'px');
							}, 500);
	        			});						
					});
	        	}
				else { 
					clearTimeout(timeout);            
		            timeout = setTimeout(function () {
						item.find('.submenu').removeClass('open');
		            	item.find('.submenu').css('display', 'none');
		            }, 500);
		    	}
	        });
    	}
    	//top submenu arrow click for other devices
    	else { 
			subMenuLinks.each(function () {
				var item = $(this).parent();
				item.find('.submenu-arrow').click(function () {
					//clear all open submenus
					if(item.attr('id')=="industry-top-menu") {
						if (industryTopNavigation.hasClass('open') === false) {
							item.find('.submenu').removeClass('open');
							curPosY = parseInt(industryTopNavigation.css('top'));
							//home page
							if($("body[id='home-page']").length) {
								//smart phones landscape
								if($(window).width()>350) {
									newPosY = $(this).offset().top - 28;
								}
								//smart phones portrait
								else {
									newPosY = $(this).offset().top - 50;
								}
							}
							//industry 
							else {
								//tablets -> taken from CSS
								if($(window).width()>480) {
									newPosY = curPosY;
								}
								//smart phones
								else {
									newPosY = $(this).offset().top - 15;
								}
							}
							item.parent().find('.submenu').each(function() {
								if($(this).hasClass('open') === true) {
									$(this).removeClass('open');
									$(this).css('display', 'none');
								}
							});
							industryTopNavigation.addClass('open');
							if(curPosY  != newPosY) {
								industryTopNavigation.css('top', newPosY + 'px');	
							} 
		                	item.addClass('industry-open');	                    
		                	$('#wrapper').css('min-height',industryTopNavigationContentHeight + 'px');
		                }
		                else {
		                	industryTopNavigation.removeClass('open');
							item.removeClass('industry-open');
							$('#wrapper').removeAttr("style");
							industryTopNavigation.removeAttr("style");
		                }
					}
					else {
			            $(this).css('z-index', 1000).siblings('li').css('z-index', 500);
			            if (item.find('.submenu').hasClass('open') === false) {
							industryTopNavigation.removeClass('open');
							item.parent().find("li[id='industry-top-menu']").removeClass('industry-open');			            
			                item.find('.submenu').addClass('open');
			                item.find('.submenu').css('display', 'inline');
			            }
						else {
			                item.find('.submenu').removeClass('open');
			                item.find('.submenu').css('display', 'none');
						}
					}
				}); 
	            
	        });
	    }
        
    }
	//top menu navigation end
	
    // vertically align bottom highlight titles
    $('.bottom-highlights .highlight .first h4').vAlign();

    // solutions search-box submit
    $("#searchForm").submit(function () {
        searchSolutions(0, null);
        return false;
    });

    // comment blog
    $("#commentForm").submit(function () {
        postComment();
        return false;
    });

    // show more blogs
    $("#showMoreBlogs").click(function () {
        showMoreBlogs(1);
        return false;
    });

    $('.hilits-blogs-area').mouseenter(function () {
        $(this).addClass('show-page-navi');
    });
    $('.hilits-blogs-area').mouseleave(function () {
        $(this).removeClass('show-page-navi');
    });
    $('.said-by-area').mouseenter(function () {
        $(this).addClass('show-page-navi');
    });
    $('.said-by-area').mouseleave(function () {
        $(this).removeClass('show-page-navi');
    });

    // show investors releases tab
    $("#showReleases").click(function () {
        $("#investorsStockExchangeReleases").hide();
        $("#investorsReleases").show();
        $("#showStockExchangeRelases").parent().removeClass('current');
        $(this).parent().addClass('current');
        return false;
    });

    // show investors stock exchange releases tab
    $("#showStockExchangeRelases").click(function () {
        $("#investorsReleases").hide();
        $("#investorsStockExchangeReleases").show();
        $("#showReleases").parent().removeClass('current');
        $(this).parent().addClass('current');
        return false;
    });

    //Tieto countries
    $('.tieto-countries').click(function () {
        $(this).addClass('country-open');
    }).mouseleave(function () {
        clearTimeout(timeout);
        timeout = setTimeout(function () {
            $('.tieto-countries').removeClass('country-open');
        }, 500);
    }).mouseenter(function () {
        clearTimeout(timeout);
    });

    //bottom highlights z-index
    $('.bottom-highlights').click(function () {
        $(this).addClass('layer-on');
    }).mouseleave(function () {
        $(this).removeClass('layer-on');
    });

    // country select - selected index change
    $("#countries").change(function () {
        UpdateCities(this, 'cities');
        return false;
    });

    // update tieto addresses URL on submit
    $('#addressesForm').submit(function () {
        UpdateTietoAddressesUrl();
    });

    //highlights
    //fly-out
    var bottomHighlights = $('.bottom-highlights').find('.highlight');

    if (bottomHighlights.length > 0) {
        //open fly-out
        var flyOutLink = bottomHighlights.find('.open-flyOut');
        if (flyOutLink.length > 0) {
            flyOutLink.click(function () {
                var currentHighlight = $(this).parents('.fly-out');

                currentHighlight.addClass('open').bind("mouseleave", function () {
                    $(this).removeClass('open')
                });
            });
        }
    }

    $('.content-highlights > .highlight').mouseenter(function () {
        $(this).addClass('hover');
    });
    $('.content-highlights > .highlight').mouseleave(function () {
        $(this).removeClass('hover');
    });

    $('.fly-out > .highlight > div').mouseenter(function () {
        $(this).addClass('hover');
    });
    $('.fly-out > .highlight > div').mouseleave(function () {
        $(this).removeClass('hover');
    });

    /* Archive page */
    $('ul.filter-menu-blocks > li > ul > li > a').click(function () {
        // remove selected filter
        var item = $(this);
        var filterValue = item.text();
        // get name(class) of the parent dropdown menu
        var filter = item.parents().eq(2).children('a').attr('class');
        // get appropriate checkbox in dialog
        var filterMenuSelector = "#" + filter + " div.columns-bottom a:contains('" + filterValue + "') input";
        var filterMenu = $(filterMenuSelector);
        // uncheck it
        filterMenu.prop('checked', false);
        filterMenu.parent().removeClass('eventchecked');
        if (item.parent().parent().children().length > 1) {
            // remove item(li) from filters
            item.parent().remove();
        } else {
            // remove whole list (ul) since no more items left
            item.parent().parent().remove();
            // check "all results" item in filter dialog
            var filterMenuTopBox = $("#" + filter + " .columns-top .eventcheck");
            filterMenuTopBox.addClass('eventchecked');
            filterMenuTopBox.children('input').prop('checked', true);
        }
        // reload results according changed filters
        ReloadArchivePage();
        //add overlay
        var overlay = $('<div />').addClass('overlay').appendTo('body');
        overlay.css('height', $(document).height() + 'px'); //document.body.parentNode.offsetHeight
        overlay.show();
    });

    // Setting archive height dynamically
    var maxHeight = 0;
    $(".archive-top").each(function () {
        if ($(this).height() > maxHeight) maxHeight = $(this).height();
    });
    $(".archive-top").height(maxHeight);



    $(".eventcheck").click(function () {
        ChangeSelection(this);
        return false;
    });

    // close filter dialog
    $('.buttons .done').click(function () {
        // gather checked filters and reload page
        ReloadArchivePage();
        var dialogId = $(this).parents().eq(3).attr('id');
        //var dialog = $('#' + dialogId);
        var dialog = $('#simplemodal-container');
        //dialog.slideUp('slow');
        dialog.fadeOut('slow');
        //$('#simplemodal-overlay').css('cursor', 'wait');
    });
    $('.buttons .cancel').click(function () {
        $.modal.close();
    });

    // show filter dialog
    $('ul.filter-menu-blocks > li > a').click(function () {
        var dialogID = $(this).attr('class');
        var dialog = $('#' + dialogID);
        $('#' + dialogID).modal({
            position: findPos(this),
            overlayClose: true,
            opacity: 70,
            overlayCss: { backgroundColor: "#fff" }
        });
        $('#simplemodal-container').css('height', 'auto'); // fix height issue in IE7
        $('#simplemodal-container').css('position', 'absolute');
    });

    // Create Bing Map for LocationHighLight
    if (document.getElementById('LocationHighLightBingMap') != null) {
        LocationHighLightGetMap('LocationHighLightBingMap', 15, $("#MapLatitude").val(), $("#MapLongitude").val(), $("#MapDescriptionTitle").val(), $("#MapDescriptionHTML").val());
    }

    // Bing maps for Tieto addresses
    $("div.map div.bing-map").each(function () {
        var latitude = $(this).find('.map-latitude');
        var longitude = $(this).find('.map-longitude');
        LocationHighLightGetMap($(this).attr('id'), 13, latitude.html(), longitude.html(), null, null);
    });

    // calendar event view by links on click
    $("#viewByWeek").click(function () {
        ChangeCalendarEventView('w');
        return false;
    });
    $("#viewByMonth").click(function () {
        ChangeCalendarEventView('m');
        return false;
    });
    $("#viewByQuarter").click(function () {
        ChangeCalendarEventView('q');
        return false;
    });


    // When the user puts focus on the input field the default value of this element will be removed.
    $('.search-text').bind('focus', InputBoxFocus);
    // When focus is lost and no input is given the default value is restored
    $('.search-text').bind('blur', InputBoxBlur);

    /* GLOBAL SEARCH */
    // Check pressing Enter key on input field
    $('#globalSearchText').keypress(function (e) {
        code = e.keyCode ? e.keyCode : e.which;
        if (code.toString() == 13) {
            MakeGlobalSearch($(this).val(), "");
        }
    });
    $('#globalSearchButton').click(function () {
        var input = $('#globalSearchText');
        var title = input.attr('title');
        var query = input.val();
        if (query != title) {
            MakeGlobalSearch(query, "");
        }
    });

    // Check pressing Enter key on input field
    $('#generalSearch').keypress(function (e) {
        code = e.keyCode ? e.keyCode : e.which;
        if (code.toString() == 13) {
            MakeGlobalSearch($(this).val(), $('.search input[name=filters]').val());
        }
    });
    $('#generalSearchButton').click(function () {
        var input = $('#generalSearch');
        var title = input.attr('title');
        var query = input.val();
        if (query == title) {
            input.val('');
        }
        $("#quickSearchForm").submit();
    });
    $("#quickSearchForm").submit(function() {
    	var input = $('#generalSearch');
    	input.val(input.val().replace(dagerousChars, ""));
    });

    $('#jobsSearchButton').click(function () {
        var input = $('#jobsSearch');
        var title = input.attr('title');
        var query = input.val();
        if (query == title) {
            input.val('');
        }
        $("#jobsSearchForm").submit();
    });
    $("#jobsSearchForm").submit(function () {
       	var input = $('#jobsSearch');
       	input.val(input.val().replace(dagerousChars, ""));
    });

    // sorting of search results
    $('#search-list-place-holder .results-per-page a').live('click', function () {
        if ($(this).attr('class') != 'selected') ChangeResultsCountOnSearchPage($(this).text());
        return false;
    });

    // sorting of search results
    $('#search-list-place-holder .sort a').live('click', function () {
        if ($(this).attr('class') != 'selected') ChangeSortOrderOnSearchPage();
        return false;
    });

    function UpdateSearchPageList(pageIndex) {
        var url = 'GlobalSearch.aspx?path=' + Page.path;
        var query = GlobalSearchParams.q;
        var resultsPerPage = GlobalSearchParams.rpp;
        var type = GlobalSearchParams.type;
        var filters = GlobalSearchParams.filters;
        var sortBy = GlobalSearchParams.sortBy;
        var params = { 'type': type, 'from': (resultsPerPage * pageIndex), 'q': query, 'filters': filters, 's': sortBy, 'rpp': resultsPerPage };

        $('#search-list-place-holder .pagination').mask();
        $.post(url, params, function (result) {
            $('#search-list-place-holder').replaceWith(result);
            return;
        });
    }

    // search pagging
    $('#search-list-place-holder .pagination a').live('click', function () { if ($(this).attr('class') != 'active') UpdateSearchPageList(parseInt(this.id.substr(2))); return false; });
    $('#search-list-place-holder .pagination a.next').live('click', function () { UpdateSearchPageList(parseInt(this.id.substr(2))); return false; });
    $('#search-list-place-holder .pagination a.prev').live('click', function () { UpdateSearchPageList(parseInt(this.id.substr(2))); return false; });

    /* FORM */
    $('.hidableInfo').bind('focus', InputBoxFocus);
    $('.hidableInfo').bind('blur', InputBoxBlur);

    $('#form :submit').click(function () {
        SendForm();
        return false;
    });

    $("a.videoLink").click(function () {
        var t = this.title || this.innerHTML || this.href;
        GB_videoShow(t, this.href, 'main');
        _gaq.push(['_trackEvent', 'Videos', 'Video Highlight', this.href]);
        return false;
    });

    $("a.videoTextLink").click(function () {
        var t = this.title || this.innerHTML || this.href;
        GB_videoShow(t, this.href, 'main');
        _gaq.push(['_trackEvent', 'Videos', 'Video Highlight', this.href]);
        return false;
    });

    $("a.linkedVideo").click(function () {
        var t = this.title || this.innerHTML || this.href;
        GB_videoShow(t, this.href, 'main', null, null, true);
        _gaq.push(['_trackEvent', 'Videos', 'Video Highlight', this.href]);
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

    // Elevation form submission
    ScrollToFormError();
    RemoveHtmlContentOfSubmittedForms();

    // add more industries/offerings
    $('.add-more').click(function () {
        AddMoreIndustriesOfferings();
        return false;
    });

    // track document
    $('.document-link').click(function () {
        var docUrl = $(this).attr('href');
        var docType = docUrl.substr(docUrl.lastIndexOf('.'));
        _gaq.push(['_trackEvent', 'Downloads', docType, docUrl]);
    });

    // populate industries/offerings dropdown
    PopulateIndustriesOfferingsDropdown();

    // select default checkboxes and dropdown item on releases subscribe form
    SelectDefaultCheckboxes(this);
    SelectDefaultDropDownItem(this);

    // remove back button link if no history available
    if (history.length < 2) {
        if ($.browser.mozilla) {
            // history array starts from 1 in Mozzila
            $('.left-menu .back').remove();
        } else if (history.length < 1) {
            $('.left-menu .back').remove();
        }
    }

    var hilitIcon = '/img/new-icon-hilits-page.png';
    var hilitSelIcon = '/img/new-icon-page-sel.png';

    // next/prev blogs buttons click
    $('#prev-blog').click(function () {
        var selected = ScrollboxNavigationClick(-1, $('#blogs-all'), $('#blogs div.hilits-paging'), hilitIcon, hilitSelIcon);
        UpdateCommentsNumber(selected);
        return false;
    });
    $('#next-blog').click(function () {
        var selected = ScrollboxNavigationClick(1, $('#blogs-all'), $('#blogs div.hilits-paging'), hilitIcon, hilitSelIcon);
        UpdateCommentsNumber(selected);
        return false;
    });

    if (location.hash.match(/blog=\d+/i) != null) {
        var blogIndex = location.hash.match(/blog=\d+/i)[0].match(/\d+/)[0];
        var selected = $('#blogs div.hilits-paging a.selected');
        var offset = blogIndex - selected.index();
        selected = ScrollboxNavigationClick(offset, $('#blogs-all'), $('#blogs div.hilits-paging'), hilitIcon, hilitSelIcon);
        UpdateCommentsNumber(selected);
    }

    // blogs highlight indication buttons click
    $('#blogs div.hilits-paging a').each(function () {
        $(this).click(function () {
            var selected = $('#blogs div.hilits-paging a.selected');
            var offset = $(this).index() - selected.index();
            selected = ScrollboxNavigationClick(offset, $('#blogs-all'), $('#blogs div.hilits-paging'), hilitIcon, hilitSelIcon);
            UpdateCommentsNumber(selected);
            return false;
        });
    });

    // next/prev highlights buttons click
    $('#prev-hilit').click(function () {
        ScrollboxNavigationClick(-1, $('#hilits-all'), $('#hilits div.hilits-paging'), hilitIcon, hilitSelIcon);
        return false;
    });
    $('#next-hilit').click(function () {
        ScrollboxNavigationClick(1, $('#hilits-all'), $('#hilits div.hilits-paging'), hilitIcon, hilitSelIcon);
        return false;
    });

    // highlight indication buttons click
    $('#hilits div.hilits-paging a').each(function () {
        $(this).click(function () {
            var selected = $('#hilits div.hilits-paging a.selected');
            var offset = $(this).index() - selected.index();
            ScrollboxNavigationClick(offset, $('#hilits-all'), $('#hilits div.hilits-paging'), hilitIcon, hilitSelIcon);
            return false;
        });
    });

    // next/prev theme area buttons click
    $('#prev-theme').click(function () {
        var selected = ScrollboxNavigationClick(-1, $('#theme-all'), $('#theme-wrapper div#theme-paging'), themeIcon, themeSelIcon);
        $('#theme-wrapper a.theme-link').attr('href', selected.attr('href'));
        resetScrollCarousel();
        return false;
    });
    $('#next-theme').click(function () {
        ScrollCarousel();
        resetScrollCarousel();
        return false;
    });

    // theme area thumbnail buttons click
    $('#theme-wrapper div#theme-paging a').each(function () {
        $(this).click(function () {
            var selected = $('#theme-wrapper div#theme-paging a.selected');
            var offset = $(this).index() - selected.index();
            selected = ScrollboxNavigationClick(offset, $('#theme-all'), $('#theme-wrapper div#theme-paging'), themeIcon, themeSelIcon);
            $('#theme-wrapper a.theme-link').attr('href', selected.attr('href'));
            resetScrollCarousel();
            return false;
        });
    });
        
    var storyIcon = '/img/new-icon-said-by-page.png';
    var storySelIcon = '/img/new-icon-said-by-page-sel.png';

    // next/prev top stories buttons click
    $('#prev-story').click(function () {
        ScrollboxNavigationClick(-1, $('#said-by-right-all'), $('#said-by-right div.said-by-right-paging'), storyIcon, storySelIcon);
        return false;
    });
    $('#next-story').click(function () {
        ScrollboxNavigationClick(1, $('#said-by-right-all'), $('#said-by-right div.said-by-right-paging'), storyIcon, storySelIcon);
        return false;
    });

    // top stories highlight indication buttons click
    $('#said-by-right div.said-by-right-paging a').each(function () {
        $(this).click(function () {
            var selected = $('#said-by-right div.said-by-right-paging a.selected');
            var offset = $(this).index() - selected.index();
            ScrollboxNavigationClick(offset, $('#said-by-right-all'), $('#said-by-right div.said-by-right-paging'), storyIcon, storySelIcon);
            return false;
        });
    });
	
	//career home page - open jobs
	//-----------------------start
	var jobIcon = '/img/career-icon-latest-jobs.png';
    var jobSelIcon = '/img/career-icon-latest-jobs-sel.png';

    $('#prev-jobs').click(function () {
        ScrollboxNavigationClick(-1, $('#jobs-box-all'), $('.jobs-box div#latest-paging'), jobIcon, jobSelIcon);
        return false;
    });
    $('#next-jobs').click(function () {
        ScrollboxNavigationClick(1, $('#jobs-box-all'), $('.jobs-box div#latest-paging'), jobIcon, jobSelIcon);
        return false;
    });

    $('.jobs-box div#latest-paging a').each(function () {
        $(this).click(function () {
            var selected = $('.jobs-box div#latest-paging a.selected');
            var offset = $(this).index() - selected.index();
            ScrollboxNavigationClick(offset, $('#jobs-box-all'), $('.jobs-box div#latest-paging'), jobIcon, jobSelIcon);
            return false;
        });
    });
	//career home page - open jobs
	//-----------------------end	 
	
	//career job desc - meet colleagues
	//-----------------------start
	var meetIcon = '/img/career-icon-meet.png';
    var meetSelIcon = '/img/career-icon-meet-sel.png';

    $('#prev-meet').click(function () {
        ScrollboxNavigationClick(-1, $('#meet-box-all'), $('.jobs-box div#meet-paging'), meetIcon, meetSelIcon);
        return false;
    });
    $('#next-meet').click(function () {
        ScrollboxNavigationClick(1, $('#meet-box-all'), $('.jobs-box div#meet-paging'), meetIcon, meetSelIcon);
        return false;
    });

    $('.jobs-box div#meet-paging a').each(function () {
        $(this).click(function () {
            var selected = $('.jobs-box div#meet-paging a.selected');
            var offset = $(this).index() - selected.index();
            ScrollboxNavigationClick(offset, $('#meet-box-all'), $('.jobs-box div#meet-paging'), meetIcon, meetSelIcon);
            return false;
        });
    });	   
	//career job desc - meet colleagues
	//-----------------------end 
	
	//career job desc - related jobs
	//-----------------------start
	var relIcon = '/img/career-icon-latest-jobs.png';
    var relSelIcon = '/img/career-icon-latest-jobs-sel.png';

    $('#prev-related').click(function () {
        ScrollboxNavigationClick(-1, $('#jobs-box-all'), $('.jobs-box div#related-paging'), relIcon, relSelIcon);
        return false;
    });
    $('#next-related').click(function () {
        ScrollboxNavigationClick(1, $('#jobs-box-all'), $('.jobs-box div#related-paging'), relIcon, relSelIcon);
        return false;
    });

    $('.jobs-box div#related-paging a').each(function () {
        $(this).click(function () {
            var selected = $('.jobs-box div#related-paging a.selected');
            var offset = $(this).index() - selected.index();
            ScrollboxNavigationClick(offset, $('#jobs-box-all'), $('.jobs-box div#related-paging'), relIcon, relSelIcon);
            return false;
        });
    });	   
	//career job desc - related jobs
	//-----------------------end 	   

    //industry - hub highlight
	//-----------------------start
	var hubIcon = '/img/new-icon-industry-page.png';
    var hubSelIcon = '/img/new-icon-industry-page-sel.png';

    $('#prev-hub').click(function () {
        ScrollboxNavigationClick(-1, $('#hub-box-all'), $('.jobs-box div#hub-paging'), hubIcon, hubSelIcon);
        return false;
    });
    $('#next-hub').click(function () {
        ScrollboxNavigationClick(1, $('#hub-box-all'), $('.jobs-box div#hub-paging'), hubIcon, hubSelIcon);
        return false;
    });

    $('.jobs-box div#hub-paging a').each(function () {
        $(this).click(function () {
            var selected = $('.jobs-box div#hub-paging a.selected');
            var offset = $(this).index() - selected.index();
            ScrollboxNavigationClick(offset, $('#hub-box-all'), $('.jobs-box div#hub-paging'), hubIcon, hubSelIcon);
            return false;
        });
    });	   
	//industry - hub highlight
	//-----------------------end 
	
	
	// theme room tags click
    $('#cloud-nav a, .theme-footer-tags a').each(function () {
        $(this).click(function () {
            FilterContentModules($(this).attr('title'), 0, true);
            return false;
        });
    });

    // trigger theme room content modules filtering if needed
    if ($('#content-modules').length > 0) {
        var tag = getParameterByName('tag');
        if (tag.length > 0)
            FilterContentModules(tag, 0, true);
        else
            FilterContentModules('', 0, true);
    }

    // theme room send message link click
    $('.theme-room-contact').click(function () {
        ModalContactForm($(this));
        return false;
    });

    // check if need to preload theme room background images    
    var imgDiv = $('div.bg_img:eq(0)');
    if (imgDiv.html() != null) {
        $('.theme-background').each(function (i) {
            var preloader = new Image();
            preloader.src = $(this).html();

            // add second div with background image for smooth image change
            if (i == 1) {
                imgDiv.parent().prepend('<div class="bg_img" style="display: none; background-image:url(' + $(this).html() + ');"></div>');
            }
        });
    }
    
    //career left menu hover effect
	$('#left-menu a').mouseenter(function () {
	    var attr = $(this).attr('class');
	    //alert($(this).attr("class").length());
	    /*if($(this).attr("class") && $(this).attr("class").indexOf("current-page")>0) {
			return true;
	    }
	    else {
	    	$(this).next().addClass('no-bg-img');
        	$(this).find("img").attr("src","../img/new-icon-arrow-white.png");
	    }*/
	    if($(this).attr("class").indexOf("current-page")==-1) {
			$(this).next().addClass('no-bg-img');
        	$(this).find("img").attr("src","/img/new-icon-arrow-white.png");
	    }
	    
    });
    $('#left-menu a').mouseleave(function () {
        if($(this).attr("class").indexOf("current-page")==-1) {
        	$(this).next().removeClass('no-bg-img');
        	$(this).find("img").attr("src","/img/new-icon-arrow-blue.png");
        }
    });
    $('#left-menu a.current-page').next().addClass('no-bg-img');
    $('#left-menu a.current-page').find("img").attr("src","/img/new-icon-arrow-white.png");
    
    //tablet devices left menu drop-down
    $('#menu-tablet').click(function () {
        if($('#left-menu').attr('class').indexOf('open')==-1) {
        	$('#left-menu').addClass('open');
        	$('#menu-tablet-wrapper').addClass('shadow');
        }
        else {
            $('#left-menu').removeClass('open');
            $('#menu-tablet-wrapper').removeClass('shadow');
        }
        return false;
    });

    //smart phones left menu drop-down
    $('#menu-mobile-link').click(function () {
        if($('#left-menu').attr('class').indexOf('open')==-1) {
        	$('#left-menu').addClass('open');
        }
        else {
            $('#left-menu').removeClass('open');
        }
        return false;
    });
    
    //smart phones country menu drop-down
    $('#country-menu-mobile-link').click(function () {
        if($('#country-menu-mobile').attr('class').indexOf('open')==-1) {
        	$('#country-menu-mobile').addClass('open');
        }
        else {
            $('#country-menu-mobile').removeClass('open');
        }
        return false;
    }); 
    
    //smart phones industry selection menu drop-down
    $('#industry-menu-mobile-link').click(function () {
        if($('.industry-menu-mobile').attr('class').indexOf('open')==-1) {
        	$('.industry-menu-mobile').addClass('open');
        	var menu_height=($('#menu-mobile').find('.industry-menu').height()) + 58;
        	$('#section-content').css('min-height',menu_height + 'px');
        }
        else {
            $('.industry-menu-mobile').removeClass('open');
            $('#section-content').removeAttr("style");
        }
        return false;
    }); 	   

    // highlight link click
    $('.highlight-lightbox').click(function () {
        ShowHighlightLayer($(this));
        return false;
    });

    // Pardot form link click
    $('.pardot-link').click(function () {
        ShowPardotForm($(this));
        return false;
    });

    // force autoscroll for themeroom carousel
    autoScrollCarousel(carouselDelay);

    window.onscroll = AddModulesOnScroll;

});  // end of document.ready

 //fix for ipad portrait - landscape resolution zoom problem: (webdesignerwall.com/tutorials/iphone-safari-viewport-scaling-bug)
(function (doc) {

   	var addEvent = 'addEventListener',
	    type = 'gesturestart',
	    qsa = 'querySelectorAll',
	    scales = [1, 1],
	    meta = qsa in doc ? doc[qsa]('meta[name=viewport]') : [];

   	function fix() {
   		meta.content = 'width=device-width,minimum-scale=' + scales[0] + ',maximum-scale=' + scales[1];
   		doc.removeEventListener(type, fix, true);
   	}

   	if ((meta = meta[meta.length - 1]) && addEvent in doc) {
   		fix();
   		scales = [.25, 1.6];
   		doc[addEvent](type, fix, true);
   	}

} (document));

function findPos(obj) {
    var curleft = 0;
    var curtop = 0;
    if (obj != null) {
        do {
            curleft += obj.offsetLeft;
            curtop += obj.offsetTop;
        } while (obj = obj.offsetParent);
    }
    curleft -= $(window).scrollLeft();
    curtop -= $(window).scrollTop();
    return [curtop, curleft];
}

function ScrollToFormError() {
	var errorMessage = $('#HtmlForm .missing-fields');
	if (errorMessage.length > 0) {
		errorMessage[0].scrollIntoView(true);
	}
}

function RemoveHtmlContentOfSubmittedForms() {
	var onSuccess = $('#HtmlForm .on-success'); // text in submission field
	// if something is written in submission field remove Html content
	if ((onSuccess.text() || onSuccess.siblings().length > 0) && Page) {
		if (Page.pageType == "TEEWForm") {
			$('.editor').remove();
		}
	}
}

function SendForm() {
    $('.main-content').mask();
    var formName = $('#form').attr('name');
    var formUrl = $('#form').attr('action');
    var formValues;
    if (formName == "annual-report-order-form") {
        formValues = GetAnnualReportOrderFormValues(formName);
    }
    if (formName == "annual-report-unsubscribe-form") {
        formValues = GetAnnualReportUnsubscribeFormValues(formName);
    }
    if (formName == "feedback-form") {
        formValues = GetFeedbackFormValues(formName);
    }
    if (formName == "request-info-form") {
        formValues = GetRequestInfoFormValues(formName);
    }
    if (formValues != null) {
    	$.post(formUrl, formValues, function (result) {
    		if (!result.success && result.error) {
    			if (result.error == "address" || result.error == "post-code" || result.error == "city" || result.error == "country")
    				ShowErrorInAddress([result.error], [result.message]);
    			else
    				ShowErrorOnForm(result.error, result.message, result.currentElem);
    		}
    		//show Thank you message
    		if (result.success) {
    			$('#form').hide();
    			$('.related-content.report-right').hide();
    			if (formValues.SendMe == "latest") {
    				$('#sendMeEveryYear').hide();
    			} else {
    				var everyYear = $('#sendMeEveryYear');
    				var infoWithEmail = everyYear.text();
    				everyYear.text(infoWithEmail.replace("[GIVEN_EMAIL]", formValues.Email));
    				$('#sendMeLatest').hide();
    			}
    			$('#thankYouMessage').show();
    		}
    		$('.main-content').unmask();

    		if (result.success && formName == "request-info-form") {
    			window.location.hash = "#submitted";
    			AddContactTracking();
    			//SendGAQuery();
    		}
    	}, "json");
    } else {
        $('.main-content').unmask();
    }
}

function BackInHistory() {
	if (window.location.hash == "#submitted") {
		// if there is hash "submitted" (thank you-page) we have to go back 2 pages
		// since first page is the same only without the hash
		history.go(-2);
	} else {
		history.back();
	}
}

function GetRequestInfoFormValues(formID) {
    RemoveErrorMessages();
    var valid = true;
    var name = GetInputBoxValue($('#name'));
    if (name == "") {
        ShowErrorOnForm("name", "nameMissing");
        valid = false;
    }
    var email = GetInputBoxValue($('#email'));
    if (email == "") {
        ShowErrorOnForm("email", "emailMissing");
        valid = false;
    } else {
        if (!IsValidEmail(email)) {
            ShowErrorOnForm("email", "emailAddresNotValid");
            valid = false;
        }
    }

    var phoneOptional = $('#phone').hasClass('filled');
    var phone = GetInputBoxValue($('#phone'));
    if (phone == "" && !phoneOptional) {
        ShowErrorOnForm("phone", "phoneMissing");
        valid = false;
    }
    var comment = GetInputBoxValue($('#comment'));
    if (comment == "") {
        ShowErrorOnForm("comment", "commentMissing");
        valid = false;
    }
    var organization = GetInputBoxValue($('#organization'));
    var section = $('#section').val();

    if (!valid) return null; // form is not valid

    var data = { FID: formID, Name: name, Email: email, Phone: phone, Organization: organization, Comment: comment, PhoneOptional: phoneOptional, Section: section };

    return data
}

function GetFeedbackFormValues(formID) {
    RemoveErrorMessages();
    var valid = true;
    var name = GetInputBoxValue($('#name'));
    if (name == "") {
        ShowErrorOnForm("name", "nameMissing");
        valid = false;
    }
    var email = GetInputBoxValue($('#email'));
    if (email == "") {
        ShowErrorOnForm("email", "emailMissing");
        valid = false;
    } else {
        if (!IsValidEmail(email)) {
            ShowErrorOnForm("email", "emailAddresNotValid");
            valid = false;
        }
    }
    var comment = GetInputBoxValue($('#comment'));
    if (comment == "") {
        ShowErrorOnForm("comment", "commentMissing");
        valid = false;
    }
    var organization = GetInputBoxValue($('#organization'));

    if (!valid) return null; // form is not valid

    var data = { FID: formID, Name: name, Email: email, Organization: organization, Comment: comment };

    return data
}

function GetAnnualReportUnsubscribeFormValues(formID) {
    RemoveErrorMessages();
    var valid = true;
    var name = GetInputBoxValue($('#name'));
    if (name == "") {
        ShowErrorOnForm("name", "nameMissing");
        valid = false;
    }
    var email = GetInputBoxValue($('#email'));
    if (email == "") {
        ShowErrorOnForm("email", "emailMissing");
        valid = false;
    } else {
        if (!IsValidEmail(email)) {
            ShowErrorOnForm("email", "emailAddresNotValid");
            valid = false;
        }
    }
    if (!valid) return null; // form is not valid

    var data = { FID: formID, Name: name, Email: email };

    return data
}

function GetAnnualReportOrderFormValues(formID) {
    RemoveErrorMessages();
    var valid = true;
    var languages = "";
    $('.form-selection input[type=checkbox]:checked').each(function () {
        languages += $(this).val() + ",";
    });
    if (languages.length > 0) {
        languages = languages.substr(0, languages.length - 1); // remove final comma
    } else {
        ShowErrorOnForm("languages", "languagesMissing", true);
        valid = false;
    }
    var sendMe = $('.form-selection input[type=radio]:checked').val();
    if (sendMe != "latest" && sendMe != "every-year") {
        ShowErrorOnForm("sendMe", "sendMeMissing", true);
        valid = false;
    }
    var name = GetInputBoxValue($('#name'));
    if (name == "") {
        ShowErrorOnForm("name", "nameMissing");
        valid = false;
    }
    var address = GetInputBoxValue($('#address'));
    var postCode = GetInputBoxValue($('#post-code'));
    var city = GetInputBoxValue($('#city'));
    var country = $('#country').val();
    if (address == "" || postCode == "" || city == "" || country == "") {
        var i = 0;
        var emtpyFields = [];
        var messages = [];
        if (address == "") {
            emtpyFields[i] = "address";
            messages[i] = "addressMissing";
            i++;
        }
        if (postCode == "") {
            //ShowErrorOnForm("post-code", "postCodeMissing", true);
            emtpyFields[i] = "post-code";
            messages[i] = "postCodeMissing";
            i++;
        }
        if (city == "") {
            //ShowErrorOnForm("city", "cityMissing", true);
            emtpyFields[i] = "city";
            messages[i] = "cityMissing";
            i++;
        }
        if (country == "") {
            emtpyFields[i] = "country";
            messages[i] = "countryMissing";
            i++;
        }
        ShowErrorInAddress(emtpyFields, messages);
        valid = false;
    }
    var email = GetInputBoxValue($('#email'));
    if (email == "") {
        ShowErrorOnForm("email", "emailMissing");
        valid = false;
    } else {
        if (!IsValidEmail(email)) {
            ShowErrorOnForm("email", "emailAddresNotValid");
            valid = false;
        }
    }
    var organization = GetInputBoxValue($('#organization'));
    var comment = GetInputBoxValue($('#comment'));

    if (!valid) return null; // form is not valid

    var data = { FID: formID, Languages: languages, SendMe: sendMe, Name: name, Address: address,
        PostCode: postCode, City: city, Country: country, Email: email, Organization: organization, Comment: comment
    };

    return data
}

function ShowErrorInAddress(fields, messageIDs) {
    var div;
    // get template for error message
    var errorSpan = $('span#addressErrorMessage');
    var errorMessage = $('span#inAddress').text();
    // build error message
    var missingMessages = "";
    var len = fields.length;
    if (len > 0) {
        var and = $('span#and').text();
        for (var i = 0; i < len; i++) {
            var field = fields[i];
            // highlight error field
            if (field == "post-code" || field == "city")
                div = $("#" + field);
            else
                div = $("#" + field).parent();
            div.addClass('error');
            // error messages
            var messageID = messageIDs[i];
            if (missingMessages != "") {
                if (i == len - 1) {
                    // last item in the array
                    missingMessages = missingMessages + " " + and + " " + $("#" + messageID).text();
                } else {
                    missingMessages = missingMessages + ", " + $("#" + messageID).text();
                }
            } else {
                missingMessages = $("#" + messageID).text();
            }
        }
        errorMessage = errorMessage.replace("[FIELDS]", missingMessages);
        errorSpan.text(errorMessage);
        errorSpan.css('display', 'block');
    }
    return null;
}

function ShowErrorOnForm(field, messageID, currentElem) {
    var div;
    var span = $("span#" + messageID);
    if (currentElem)
        div = $("#" + field);
    else
        div = $("#" + field).parent();
    div.addClass('error');
    span.css('display', 'block');
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

function InputBoxFocus() {
    var title = $(this).attr('title');
    var value = $(this).val();
    if (value == title) {
        $(this).val("");
    }
}

function InputBoxBlur() {
    if ($(this).val() == "") {
        $(this).val($(this).attr('title'));
    }
}

function MakeGlobalSearch(query, defaultFilter) {
	query = query.replace(dagerousChars, "");
    if (query != "") {
        var url = window.location.href;
        url = replaceQueryString(url, 'q', encodeURIComponent(query));
        if (defaultFilter != "") {
            url = replaceQueryString(url, 'filters', defaultFilter);
        }
        if (typeof GlobalSearchParams != "undefined") {
			url = replaceQueryString(url, 's', GlobalSearchParams.sortBy);
			url = replaceQueryString(url, 'rpp', GlobalSearchParams.rpp);
        }
		location.href = url;
    }
}

// when user clicks an about tag in global search results
function GlobalSearchByAboutTag(link) {
    var searchBox = $("#globalSearchText");
    var searchText = searchBox.val();

    if (link) {
        var tag = DecodeHtml($(link).html());
        if (tag.indexOf(" ") > 1) {
            // if the text contains white space, surround it by quotation marks
            tag = "\"" + tag + "\"";
        }
        if (searchText.indexOf(tag) == -1) {
            if (searchText == searchBox.attr('title'))
                searchText = tag;
            else
                searchText = searchText + " " + tag;
            //searchBox.val(searchText);
        }
    }
    MakeGlobalSearch(searchText, "");
    return false;
}

function ChangeSortOrderOnSearchPage() {
    var url = 'GlobalSearch.aspx?path=' + Page.path;
    var query = GlobalSearchParams.q;
    var resultsPerPage = GlobalSearchParams.rpp;
    var type = GlobalSearchParams.type;
    var filters = GlobalSearchParams.filters;
    var sortBy = GlobalSearchParams.sortBy;
    if (sortBy == "") sortBy = "d"; else sortBy = ""; // switch sortBy
    var params = { 'type': type, 'from': 0, 'q': query, 'filters': filters, 's': sortBy, 'rpp': resultsPerPage };

    $('#search-list-place-holder').mask();
    $.post(url, params, function (result) {
        $('#search-list-place-holder').replaceWith(result);
        return;
       });
}

function ChangeResultsCountOnSearchPage(count) {
	var url = 'GlobalSearch.aspx?path=' + Page.path;
	var query = GlobalSearchParams.q;
	var type = GlobalSearchParams.type;
	var filters = GlobalSearchParams.filters;
	var sortBy = GlobalSearchParams.sortBy;
	var params = { 'type': type, 'from': 0, 'q': query, 'filters': filters, 's': sortBy, 'rpp': count };

	$('#search-list-place-holder').mask();
	$.post(url, params, function (result) {
		$('#search-list-place-holder').replaceWith(result);
		return;
	});
}

function GetSelectedFilters() {
    var filters = "";
    var count = 0;
    var dialogs = $('div[id^=name]');
    var dialogCount = dialogs.length;

    dialogs.each(function () {
        var navigator = $(this).attr('id').replace('name-', '');
        var selection = [];
        var i = 0;
        //find checkboxes except the "all results" one
        var checkboxes = $(this).find('.columns-center,.columns-right');
        //find checked boxes and save their value into an array
        checkboxes.find('input:checked').each(function () {
            var value = $(this).attr('value');
            if (value != null)
                selection[i++] = value;
        });
        //if there are some boxes checked add their values into filters
        if (selection.length > 0) {
            if (count == 0) {
                filters = navigator + "=" + selection.join(",");
            } else {
                filters = filters + "|" + navigator + "=" + selection.join(","); ;
            }
            count++;
        }
    });
    return filters;
}

function ReloadArchivePage() {
    var filters = GetSelectedFilters();

    var url = window.location.href.replace(/#.*/, "");

    url = replaceQueryString(url, 'filters', encodeURIComponent(filters));
    url = UpdateCurrentDateQuery(url);

    location.href = url;
}

// function mapped on ShowMoreItems link in main Archive pages
function ShowMoreArchiveItems(pagePath, type, from, filters) {
    $("div.archive-list-place-holder").mask("");
    $("div.show-more").remove();
    var archiveList = $('.archive-list-place-holder');
    var archiveListUrl = 'ArchiveSearch.aspx?path=' + pagePath;
    var params = { 'type': type, 'more': 1, 'from': from, 'filters': filters };

    $.post(archiveListUrl, params, function (result) {
        archiveList.append(result);
        $("div.archive-list-place-holder").unmask();
        $("a.videoLink").unbind("click");
        $("a.videoLink").click(function () {
            var t = this.title || this.innerHTML || this.href;
            GB_videoShow(t, this.href);
            _gaq.push(['_trackEvent', 'Videos', 'Archive Video', this.href]);
            return false;
        });
        return;
    });

    return false;
}

// add/remove or change given parameter in URL
function replaceQueryString(url, param, value) {
    var re = new RegExp("([?|&])" + param + "=.*?(&|$)", "i");
    var re2 = new RegExp("([?|&])");
    var re3 = new RegExp("([?|&]$)");

    if (value != '') {
        if (url.match(re)) {
            return url.replace(re, '$1' + param + "=" + value + '$2');
        }
        else if (url.match(re2)) {
            return url + '&' + param + "=" + value;
        }
        else {
            return url + '?' + param + "=" + value;
        }
    } else {
        var newUrl = url.replace(re, '$1');

        if (!newUrl.match(re3)) {
            if (newUrl.match(re2)) {
                return url.replace(re, '$1');
            } else {
                return url.replace(re, '');
            }
        } else {
            return url.replace(re, '');
        }
    }
}

function GetPathFromId(id) {
    var pathAndVer = id.substring(1).replace(/-/g, ';'); // convert P1-2-3 to 1;2;3
    var verIndex = pathAndVer.indexOf('V');
    var path = pathAndVer;
    var version = -1;
    if (verIndex > 0) {
        var x = pathAndVer.split('V');
        path = x[0]; // 1;2;3V9 -> 1;2;3
        version = x[1]; // 1;2;3V9 -> 9
    }

    return path;
}

function postComment() {
    $("div.form-leave-comment div").each(function (i) {
        $(this).find("label span").remove();
        $(this).removeClass("error");
    });

    $(".wrapper").mask("");

    var email = $("#email").val();
    var name = $("#name").val();
    var comment = $("#comment").val();
    var path = $("#path").val();
    var postData = { Name: name, Email: email, Comment: comment };
    $.post("BlogComment.aspx?path=" + path, postData, function (result) {
        $(".wrapper").unmask();

        var tydiv = $("#tymessage");
        tydiv.removeClass("comment-message");
        tydiv.empty();

        if (!result.success && result.message) {
            var div = $("#" + result.error).parent();
            div.addClass("error");
            div.find("label").append("<span>" + result.message + "</span>");
            return;
        }
        else if (result.success && result.tymessage) {
            var div = $("#tymessage");
            div.addClass("comment-message");
            div.append(result.tymessage);
        }

        document.getElementById("commentForm").reset();

    }, "json");
}

function searchSolutions(pageNumber, link) {
	$("#solution-search-results").show();
    $(".search-results").mask("");
    var searchBox = $("#searchInput");
    var searchText = searchBox.val().replace(dagerousChars, "");
    searchBox.val(searchText);
    if (link) {
        var tag = DecodeHtml($(link).next().html());
        searchText = tag;
        searchBox.val(searchText);
    }

    var postData = { SearchText: searchText, PageNumber: pageNumber };
    $.post("SolutionsSearch.aspx?path=" + Page.path, postData, function (result) {
        $(".search-results").unmask();

        if (result.success) {
            // if first search clear results
            if (pageNumber == 0) {
                $("div.results").html('');
                $("div.materials").html('');
            }

            // if first search add results count
            if (pageNumber == 0)
                $("div.results").append('<span>' + result.count + '</span>');

            for (var i = 0; i < result.results.length; i++) {
                var html;

                if (i == result.pageSize - 1)
                    html = '<div class="result double-line">';
                else
                    html = '<div class="result">';

                html += '<h4><a href="' + result.results[i].url + '">' + result.results[i].title + '</a></h4>'
					+ '<p>' + result.results[i].description + '</p>';

                // add tags
                if (result.results[i].tags) {
                    if (result.results[i].tags.length > 0)
                        html += '<div class="about">' + result.about + ': ';

                    for (var j = 0; j < result.results[i].tags.length; j++) {

                        html += '<span><a href=\"#\" onclick=\"searchSolutions(0, this); return false;\">'
							+ result.results[i].tags[j].name + '</a><span style="display:none;">' + result.results[i].tags[j].value + '</span></span>';
                    }

                    if (result.results[i].tags.length > 0)
                        html += '<\div>';
                }
                $("div.results").append(html);
            }

            // add related materials
            var docsHtml = '';
            for (var k = 0; k < result.documents.length; k++) {

                if (k == 0)
                    docsHtml += '<h4>' + result.relatedMaterials + '</h4><ul>';

                docsHtml += '<li><a class="document-link" href="' + result.documents[k].url + '" title="' + result.documents[k].title
					+ '">' + result.documents[k].title + '</a><span>' + result.documents[k].extension
					+ ' ' + result.documents[k].language + '</span></li>';

                if (k == result.documents.length - 1) {
                    docsHtml += '</ul>';
                }
            }

            if (result.showMoreDocuments)
                docsHtml += '<div class="more-material"><a href="' + result.documentArchiveUrl + '">' + result.moreMaterials + '</a></div>';

            $("div.materials").append(docsHtml);

            // remove show more link
            $('div.show-more').remove();

            // append show more link if returned page number greater than 0 what means that there are some results left
            if (result.pageNumber > 0) {
                $("div.results").append('<div class="show-more" id="showMoreSolutions"><a href="#">' + result.more + '</a></div>');
                $('div.show-more').click(function () {
                    searchSolutions(result.pageNumber, null);
                    return false;
                });
            }
        }

    }, "json");
}

function showMoreBlogs(pageNumber) {
    $(".wrapper").mask("");

    var postData = { PageNumber: pageNumber };
    $.post("BlogsSearch.aspx?path=" + Page.path, postData, function (result) {
        $(".wrapper").unmask();

        if (result.success) {
            for (var i = 0; i < result.results.length; i++) {
                var html;
                if (i == result.pageSize - 1)
                    html = '<li class="double-line">';
                else
                    html = '<li>';
                html += '<div class="date">' + result.results[i].published + '</div>'
						+ '<div class="info">'
						+ '<h3><a href=\"' + result.results[i].url + '\">' + result.results[i].title + '</a></h3>'
						+ '<div class="blog-comment-info">';

                if (result.results[i].authorTitle) {
                    html += '<div>' + result.writtenBy + ': <a href=\"' + result.results[i].authorUrl + '\">' + result.results[i].authorTitle + '</a></div>'
                }
                if (result.results[i].tags) {
                    html += '<div>' + result.about + ': ';

                    for (var j = 0; j < result.results[i].tags.length; j++) {
                        html += '<a href=\"' + result.results[i].tags[j].url + '\">' + result.results[i].tags[j].title + '</a>';

                        if (j == result.results[i].tags.length - 1)
                            html += '</div>'
                        else
                            html += '; ';
                    }
                }

                html += '</div>'
						+ '<p class="caption">' + result.results[i].description
						+ ' <a href=\"' + result.results[i].url + '\" class="read-more">' + result.readMore + '</a></p>'
						+ '<div class="blog-comment-info bottom">'
						+ '<div class="comments">' + result.results[i].commentsNumber + ' ' + result.comments + '</div>'
						+ '<div class="share-it">'
						+ '<span class="stbar"> ' + result.share + ': </span>'
						+ '<a href=\"http://www.addthis.com/bookmark.php\" class=\"addthis_button_facebook stbar_img\" addthis:title=\"' + result.results[i].title + '\" addthis:url=\"' + result.results[i].url + '\"><img src="/tieto-images/facebook.gif" width="16" height="16" border="0" alt="Facebook" /></a>&nbsp;'
						+ '<a href=\"http://www.addthis.com/bookmark.php\" class=\"addthis_button_twitter stbar_img\" addthis:title=\"' + result.results[i].title + '\" addthis:url=\"' + result.results[i].url + '\"><img src="/tieto-images/twitter.gif" width="16" height="16" border="0" alt="Twitter" /></a>&nbsp;'
						+ '<a href=\"http://www.addthis.com/bookmark.php\" class=\"addthis_button_linkedin stbar_img\" addthis:title=\"' + result.results[i].title + '\" addthis:url=\"' + result.results[i].url + '\"><img src="/tieto-images/linkedIn.ico" width="16" height="16" border="0" alt="LinkedIn" /></a>&nbsp;'
						+ '<a href=\"http://www.addthis.com/bookmark.php\" class=\"addthis_button stbar_img addthis_button_more\" addthis:title=\"' + result.results[i].title + '\" addthis:url=\"' + result.results[i].url + '\"><img src="/tieto-images/shareAdd.gif" width="16" height="16" border="0" alt="" /></a>&nbsp;'
						+ '<a href=\"http://www.addthis.com/bookmark.php\" class=\"addthis_button addthis_button_more\" addthis:title=\"' + result.results[i].title + '\" addthis:url=\"' + result.results[i].url + '\">' + result.shareMore + '</a>'
						+ '</div></div></div></li>';

                $("div.block-list ul").append(html);
            }
            // reinicialize addThis script
            var addThisScript = 'http://s7.addthis.com/js/250/addthis_widget.js#domready=1';
            if (window.addthis) {
                window.addthis = null;
            }
            $.getScript(addThisScript, function () {
                $('.at300bs.at15t_more').remove();
            });

            // remove show more link
            if (result.pageNumber < 0)
                $('div.show-more').remove();
            else {
                $('div.show-more').unbind('click');
                $('div.show-more').click(function () {
                    showMoreBlogs(result.pageNumber);
                    return false;
                });
            }
        }

    }, "json");
}

function EncodeHtml(value) {
    return value.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;');
}

function DecodeHtml(value) {
    return value.replace(/&amp;/g, '&').replace(/&lt;/g, '<').replace(/&gt;/g, '>');
}

function LocationHighLightGetMap(id, zoom, MapLatitude, MapLongitude, MapDescriptionTitle, MapDescriptionHTML) {

    var LA = null;
    if (MapLatitude != null || MapLongitude != null) {
        var LA = new VELatLong(MapLatitude, MapLongitude);
    }

    if (LA == null)
        return;

    var descriptionTitle = null;
    if (MapDescriptionTitle != null) {
        var descriptionTitle = MapDescriptionTitle;
    }

    var descriptionHTML = null;
    if (MapDescriptionHTML != null) {
        descriptionHTML = MapDescriptionHTML;
    }
    else {
        descriptionHTML = _hqDescription;
    }

    _map = new VEMap(id);
    _map.SetDashboardSize(VEDashboardSize.Small);
    _map.LoadMap(LA, zoom, VEMapStyle.Road, false, VEMapMode.Mode2D, false, 1);
    _map.SetScaleBarDistanceUnit(VEDistanceUnit.Kilometers);

    var pin = new VEShape(VEShapeType.Pushpin, LA);

    if (descriptionTitle != null)
        pin.SetTitle(descriptionTitle);

    if (descriptionHTML != null)
        pin.SetDescription(descriptionHTML);

    //pin.SetPhotoURL(descriptionImage);
    pin.SetCustomIcon("/tieto-images/map_icon.png");

    if (_showHQ) {
        _map.AddShape(pin);
    }

}

function UpdateCalendarEventsList(view, date) {

    $(".block-list").mask("");

    var postData = { view: view, date: date, filters: GetSelectedFilters(), type: 'json' };
    $.post("CalendarEventsTimeline.aspx", postData, function (result) {
    	$(".block-list").unmask();

    	if (result.success) {
    		$(".block-list").hide();
    		var html = '<span>' + result.count + '</span><ul>';

    		for (var i = 0; i < result.results.length; i++) {
    			html += '<li><div class="date event">' + result.results[i].dates + '</div>';
    			html += '<div class="info"><h3><a href="' + result.results[i].url + '">' + result.results[i].title + '</a></h3>';
    			html += '<div class="eventlocation">' + result.results[i].location + '</div>';
    			html += '<p>' + result.results[i].caption + '</p></div>';
    			html += '<div class="material">';

    			if (result.results[i].enrollable) {
    				html += ' <div class="document" title="' + result.results[i].enrollable + '"></div> ';
    			}

    			if (result.results[i].attachments) {
    				html += ' <div class="attachment" title="' + result.results[i].attachments + '"></div> ';
    			}
    			else {
    				html += ' <div class="no-attachment"></div> ';
    			}

    			if (result.results[i].videos) {
    				html += ' <div class="video" title="' + result.results[i].videos + '"></div> ';
    			}

    			html += '</div></li>';
    		}

    		html += '</ul>';
    		$(".block-list").html(html);
    		$(".block-list").fadeIn("slow");
    		$("#currentDate").val(date);
    	}

    }, "json");

}

function ChangeCalendarEventView(view) {
    var url = window.location.href;

    url = replaceQueryString(url, 'view', view);
    url = UpdateCurrentDateQuery(url);
    location.href = url;
}

function UpdateCurrentDateQuery(url) {
    var date = $("#currentDate").val();
    if (date)
        return replaceQueryString(url, 'date', date);
    else
        return url;
}

function objRecord(ct, ct2) {
    this.child = ct;
    this.childvalue = ct2;
}

function UpdateCities(obj, targetBox) {
    //Get list of cities into an array.

    var arrChild = arrRecords[obj.selectedIndex + 1].child.split('|');

    //Get list of numeric city values into an array.
    var arrChildVal = arrRecords[obj.selectedIndex + 1].childvalue.split('|');

    //Call emptyList function.
    emptyList(obj.form.elements[targetBox]);

    //Populate the target box with new content.
    for (i = 0; i < arrChild.length; i++) {
        obj.form.elements[targetBox].options[i] = new Option(arrChild[i], arrChildVal[i]);
    }
}

function emptyList(objList) {
    for (i = objList.options.length; i > 0; i--) {
        objList.options[i] = null;
    }
}

function UpdateTietoAddressesUrl() {
    var url = $("#addressesForm").attr("action");

    var value = $('#countries').val();
    if (value == '0')
        value = '';
    url = replaceQueryString(url, 'CountryID', encodeURIComponent(value));

    value = $('#cities').val();
    if (value == '0')
        value = '';
    url = replaceQueryString(url, 'CityID', encodeURIComponent(value));

    value = $('#Phrase').val().replace(dagerousChars, "");
    $('#Phrase').val(value);
    url = replaceQueryString(url, 'Phrase', encodeURIComponent(value));

    url = replaceQueryString(url, 'Search', '1');
    $("#addressesForm").attr("action", url);
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

function ScrollContainer(container, offset, bgImage) {
    if (offset == 0)
        return;

    var children = container.children();
    var selected = container.children('.selected');
    var newSelected;
    var newIndex = selected.index() + offset;
    var moveBack = 0;

    // need to remember about clone nodes from both sides when indexing
    if (newIndex == 0) {
        newSelected = $(children[children.length - 2]);
        moveBack = -selected.width() * (children.length - 2);
    }
    else if (newIndex == children.length - 1) {
        newSelected = $(children[1]);
        moveBack = -selected.width();
    }
    else
        newSelected = $(children[newIndex]);

    selected.removeClass('selected');
    newSelected.addClass('selected');

    var px = -offset * selected.width();
    var move = (px > 0) ? ('+=' + px + 'px') : ('-=' + Math.abs(px) + 'px');

    if (bgImage == null) {
        container.animate({ "left": move }, 'slow', function () {
            if (moveBack != 0)
                container.css('left', moveBack + 'px');
        });
    }
    else {
        var imgNew = $('div.bg_img:eq(0)');
        var imgCurr = $('div.bg_img:eq(1)');

        // set correct image source for new image
        imgNew.css('background-image', 'url(' + bgImage + ')');
        
        imgCurr.fadeOut(1000);
        imgNew.fadeIn(1000);

        container.animate({ "left": move }, 'slow', function () {
            // move fadeout div to first position
            imgCurr.prependTo(imgCurr.parent());

            // set back correct left attribute for container
            if (moveBack != 0)
                container.css('left', moveBack + 'px');
        });
    }
}

function ChangeSelectedIndication(container, offset, img, selImg) {
    var links = container.find('a');
    var selected = container.find('a.selected');
    var newSelected;
    var newIndex = selected.index() + offset;

    if (newIndex < 0)
        newSelected = container.find('a:last');
    else if (newIndex >= links.length)
        newSelected = container.find('a:first');
    else
        newSelected = $(links[newIndex]);

    selected.removeClass('selected');
    newSelected.addClass('selected');

    selected.find('img:first').attr('src', img);
    newSelected.find('img:first').attr('src', selImg);

    return newSelected;
}
//carousels move fix if window width is resized
//set to window resize listening
var MyScreenWidth;
var NewScreenWidth;
MyScreenWidth = $(window).width();
$(window).bind("resize", carouselsToFix);
//user has resized the window
function carouselsToFix( e ) {

	$.modal.close();

    NewScreenWidth = $(window).width();
    if (NewScreenWidth>0 && MyScreenWidth !=  NewScreenWidth) {
		MyScreenWidth = NewScreenWidth;
		$('.container-to-move').parent().each(function() {
			var contentContainerToFix = $(this).find('.container-to-move');
			//special case -> home page theme rooms carousel
			if(contentContainerToFix.attr('id')=="theme-all") {
				var pagingContainerToFix = contentContainerToFix.next('div');
			}
			else {
				var pagingContainerToFix = $(this).next('div');
			}
			var pageIconToFix;
			var selectedPageIconToFix;
			var MyAttr = contentContainerToFix.attr('style');
			//check if a carousel has been used -> then set the carousel to the first item
			if (typeof MyAttr !== 'undefined' && MyAttr !== false) {
				pagingContainerToFix.find('a').each(function() {
					if(selectedPageIconToFix && pageIconToFix) return false;
					if($(this).attr('class')=="selected") {
						selectedPageIconToFix=$(this).find("img:first").attr('src');
					}
					else {
						pageIconToFix=$(this).find("img:first").attr('src');
					}
					
				});		
				//set the carusel shift to the 1st item -> correct CSS style is applied
				contentContainerToFix.removeAttr("style");
				//set the carousel paging for 1st item
				var selectedPaging = pagingContainerToFix.find('a.selected');
				var newSelectedPaging = pagingContainerToFix.find('a:first');
				selectedPaging.removeClass('selected');
				newSelectedPaging.addClass('selected');
				selectedPaging.find('img:first').attr('src', pageIconToFix);
				newSelectedPaging.find('img:first').attr('src', selectedPageIconToFix);
				//set the carousel internal structure to 1st item
				var children = contentContainerToFix.children();
				var selected = contentContainerToFix.children('.selected');
				var newSelected = $(children[1]);
				selected.removeClass('selected');
				newSelected.addClass('selected');
				//set the background img for the home page
				var bgImage = newSelectedPaging.find('.theme-background').html();
				if (bgImage != null) {
					var imgNew = $('div.bg_img:eq(0)');
					var imgCurr = $('div.bg_img:eq(1)');
					// set correct image source for new image
					imgNew.css('background-image', 'url(' + bgImage + ')');
					imgCurr.fadeOut(1000);
					imgNew.fadeIn(1000);
					imgCurr.prependTo(imgCurr.parent());
				}
						
			}		
		});
		
	}
	else {
		return false;
	}
}

function ScrollboxNavigationClick(offset, contentContainer, pagingContainer, pageIcon, selectedPageIcon) {
	var selected = ChangeSelectedIndication(pagingContainer, offset, pageIcon, selectedPageIcon);
	ScrollContainer(contentContainer, offset, selected.find('.theme-background').html());
	return selected;
}

function UpdateCommentsNumber(newSelected) {
    var p = newSelected.parent().find('p');
    var text = p.html();

    if (text != null) {
        var comments = newSelected.find('span').html();
        p.html(text.replace(/\([0-9]+\)/, '(' + comments + ')'));
    }

    // update URL for displaying selected blog also when you have clicked on the blog post and goes back in the browser (IE)
    if (location.hash.match(/blog=\d+/i) != null) {
    	location.hash = location.hash.replace(/blog=\d+/i, "blog=" + newSelected.index());
    } else {
    	location.hash += "blog=" + newSelected.index();
    }
}

function FilterContentModules(tag, page, needScroll) {
    var contentModules = $('#content-modules');
    var url = 'FilterContentModules.aspx?path=' + Page.path;
    var params = { 'tag': tag, 'page': page };

    $.post(url, params, function (result) {

        if (needScroll)
            contentModules.html(result);
        else
            contentModules.append(result);
        $('.new-results').fadeIn('slow');
        $('.new-results').removeClass('new-results');

        $('#cloud-nav a, .theme-footer-tags a').each(function () {
            $(this).unbind("click")
            $(this).click(function () {
                FilterContentModules($(this).attr('title'), 0, true);
                return false;
            });
        });

        $('.theme-room-contact').each(function () {
            $(this).unbind("click")
            $(this).click(function () {
                ModalContactForm($(this));
                return false;
            });
        });

        if (needScroll) {
            scroll(0, 0);

            if (tag != null && tag.length > 0) {
                var hash = 'tag=' + encodeURIComponent(tag);
                window.location.hash = hash;
            }
            else
                window.location.hash = '';
        }

        return;
    });

    return false;
}

function AddModulesOnScroll() {
    var tag = $('#tag').val();
    var page = $('#page').val();
     
    if (page) {
        if ($(document).height() - $(window).scrollTop() - $(window).height() < 200) {
            $('#helper').remove();
            FilterContentModules(tag, page, false);
        }
    }
}

function ModalContactForm(link) {
    var path = link.parent().parent().find('input.contact-path').val();
    var url = 'RequestInfoForm.aspx?path=' + path;
    var height = 450;
    var width = 330;

    $.post(url, function (result) {
        $.modal(result, {
            containerCss: {
                backgroundColor: "#fff",
                borderColor: "#fff",
                height: height,
                width: width
            },
            opacity: 60,
            overlayClose: true,
            position: CenterModalForm(height, width),
            overlayCss: { backgroundColor: "#212E34" }
        });

        $('#simplemodal-container').css('height', 'auto'); // fix height issue in IE7
        $('#simplemodal-container').css('position', 'absolute');

        $('#form :submit').click(function () {
            SendForm();
            return false;
        });

        $('.hidableInfo').bind('focus', InputBoxFocus);
        $('.hidableInfo').bind('blur', InputBoxBlur);

        $('.contact-form-back').click(function () {
            $.modal.close();
            return false;
        });
        
        return;
    });

    return false;
}

function CenterModalForm(height, width) {
    var top = ($(window).height() - height) / 2 + $(window).scrollTop();
    var left = ($(window).width() - width) / 2 + $(window).scrollLeft();
    
    return [top, left];
}

function getParameterByName(name) {
    name = name.replace(/[\[]/, "\\\[").replace(/[\]]/, "\\\]");
    var regexS = "[\\?&#]" + name + "=([^&#]*)";
    var regex = new RegExp(regexS);
    var results = regex.exec(window.location.href);
    if (results == null)
        return "";
    else
        return decodeURIComponent(results[1].replace(/\+/g, " "));
}

function autoScrollCarousel() {
    var next = $('#next-theme');

    if (next.length == 0)
        return false;

    carouselTimeout = setTimeout(function () {
        ScrollCarousel();
        autoScrollCarousel();        
    }, carouselDelay);    
    
    return false;
}

function resetScrollCarousel(){
    // reset autoscroll and set timeout again
    clearTimeout(carouselTimeout);
    autoScrollCarousel();
    return false;
}

function ScrollCarousel(){
    var selected = ScrollboxNavigationClick(1, $('#theme-all'), $('#theme-wrapper div#theme-paging'), themeIcon, themeSelIcon);
    $('#theme-wrapper a.theme-link').attr('href', selected.attr('href'));
}

function ShowHighlightLayer(link){
    var path = link.parent().find('input.highlight-path').val();
    var url = 'HighlightLightbox.aspx?path=' + path;
    var height = 500;
    //mobile devices open a new window
    if(MyScreenWidth<=910) {
		window.open(url + '&mobile=1', '_self');
    	return false;    
    }
    //all other cases
    else {
    	var width = 900;
    }

    // hide iFrames because of overlay problem with Youtube videos
    $('#section-content').find('iframe').css('visibility', 'hidden');

    $.post(url, function (result) {
        $.modal(result, {
            containerCss: {
                backgroundColor: "#fff",
                borderColor: "#fff",
                height: height,
                width: width
            },
            opacity: 60,
            overlayClose: true,
            position: CenterModalForm(height, width),
            overlayCss: { backgroundColor: "#212E34" },
            onClose: function (dialog) {
                $('#section-content').find('iframe').css('visibility', 'visible');
                $.modal.close();
            }
        });

        $('#simplemodal-container').css('height', 'auto'); // fix height issue in IE7
        $('#simplemodal-container').css('position', 'absolute');

        $('#highlight-close').click(function () {
            $.modal.close();
            return false;
        });

        LocationHighLightGetMap('LocationHighLightBingMap', 15, $("#MapLatitude").val(), $("#MapLongitude").val(), $("#MapDescriptionTitle").val(), $("#MapDescriptionHTML").val());

        return;
    });

    return false;
}

function ShowPardotForm(link) {
    var path = link.parent().find('input.pardot-path').val();
    var url = 'PardotForm.aspx?path=' + path;
    var height = 210;
    var width = 335;

    $.post(url, function (result) {
        $.modal(result, {
            containerCss: {
                backgroundColor: "#fff",
                borderColor: "#fff",
                height: height,
                width: width
            },
            opacity: 60,
            overlayClose: true,
            position: CenterModalForm(height, width),
            overlayCss: { backgroundColor: "#212E34" }
        });

        $('#simplemodal-container').css('height', 'auto'); // fix height issue in IE7
        $('#simplemodal-container').css('position', 'absolute');

        $('.hidableInfo').bind('focus', InputBoxFocus);
        $('.hidableInfo').bind('blur', InputBoxBlur);

        $('.pardot-form-back').click(function () {
            $.modal.close();
            return false;
        });
        
        return;
    });

    return false;
}
