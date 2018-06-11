<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>
<!--[if IEMobile 7]><html class="iem7" <?php print $html_attributes; ?>><![endif]-->
<!--[if lte IE 6]><html class="lt-ie9 lt-ie8 lt-ie7" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="lt-ie9 lt-ie8" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 8]><html class="lt-ie9" <?php print $html_attributes; ?>><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="width=device-width">
  <?php endif; ?>
  <meta http-equiv="cleartype" content="on">

  <?php print $styles; ?>
  <?php print $scripts; ?>
  <?php if ($add_html5_shim and !$add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5.js"></script>
    <![endif]-->
  <?php elseif ($add_html5_shim and $add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5-respond.js"></script>
    <![endif]-->
  <?php elseif ($add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/respond.js"></script>
    <![endif]-->
  <?php endif; ?>
<!-- schema.org social media association -->
<script type="application/ld+json">
{ 
  "@context" : "http://schema.org",
  "@type" : "Organization",
  "name" : "Tieto",
  "url" : "https://www.tieto.com",
  "sameAs" : [ 
    "https://twitter.com/TietoCorp",
	"https://plus.google.com/113147646198511098976",
	"https://www.facebook.com/TietoCorporation/",
	"https://www.linkedin.com/company/tieto",
	"https://www.youtube.com/user/TietoCorporation" 
	]
}
</script>
  <?php
  if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "en.tietodev.tieto.com" ||$_SERVER['HTTP_HOST'] == "en.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.fi" || $_SERVER['HTTP_HOST'] == "www.tieto.se")) { ?>
    <!-- Start Visual Website Optimizer Asynchronous Code -->
    <script type='text/javascript'>
      var _vwo_code=(function(){
        var account_id=282347,
          settings_tolerance=2000,
          library_tolerance=2500,
          use_existing_jquery=false,
        /* DO NOT EDIT BELOW THIS LINE */
          f=false,d=document;return{use_existing_jquery:function(){return use_existing_jquery;},library_tolerance:function(){return library_tolerance;},finish:function(){if(!f){f=true;var a=d.getElementById('_vis_opt_path_hides');if(a)a.parentNode.removeChild(a);}},finished:function(){return f;},load:function(a){var b=d.createElement('script');b.src=a;b.type='text/javascript';b.innerText;b.onerror=function(){_vwo_code.finish();};d.getElementsByTagName('head')[0].appendChild(b);},init:function(){settings_timer=setTimeout('_vwo_code.finish()',settings_tolerance);var a=d.createElement('style'),b='body{opacity:0 !important;filter:alpha(opacity=0) !important;background:none !important;}',h=d.getElementsByTagName('head')[0];a.setAttribute('id','_vis_opt_path_hides');a.setAttribute('type','text/css');if(a.styleSheet)a.styleSheet.cssText=b;else a.appendChild(d.createTextNode(b));h.appendChild(a);this.load('//dev.visualwebsiteoptimizer.com/j.php?a='+account_id+'&u='+encodeURIComponent(d.URL)+'&r='+Math.random());return settings_timer;}};}());_vwo_settings_timer=_vwo_code.init();
    </script>
    <!-- End Visual Website Optimizer Asynchronous Code -->
  <?php
  }
  ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<?php global $user;?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "en.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "en.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.com")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-NKZGW3"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-NKZGW3');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "fi.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "fi.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.fi")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-5QGPZX"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-5QGPZX');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "se.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "se.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.se")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-KJP4NP"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-KJP4NP');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "at.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "at.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.at")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-5G2KXX"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-5G2KXX');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "ee.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "ee.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.ee")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-KC4XPR"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-KC4XPR');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "cn.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "cn.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.cn")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-TWZ95K"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-TWZ95K');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "cz.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "cz.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.cz")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-TWS2ZR"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-TWS2ZR');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "de.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "de.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.de")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-N4TXSM"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-N4TXSM');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "lv.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "lv.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.lv")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-5GS46Z"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-5GS46Z');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "lt.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "lt.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.lt")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-N5ZFGX"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-N5ZFGX');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "nl.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "nl.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.nl")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-TG23WD"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-TG23WD');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "no.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "no.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.no")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-P53ZGC"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-P53ZGC');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "pl.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "pl.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.pl")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-MRQXW3"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-MRQXW3');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "ru.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "ru.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.ru")) { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-WCT4KP"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-WCT4KP');</script>
<!-- End Google Tag Manager -->
<?php 
}
?>
  <?php if ($skip_link_text && $skip_link_anchor): ?>
    <p id="skip-link">
      <a href="#<?php print $skip_link_anchor; ?>" class="element-invisible element-focusable"><?php print $skip_link_text; ?></a>
    </p>
  <?php endif; ?>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
<!-- Twitter universal website tag code -->
<script>
  !function(e,t,n,s,u,a){e.twq||(s=e.twq=function(){s.exe?s.exe.apply(s,arguments):s.queue.push(arguments);
  },s.version='1.1',s.queue=[],u=t.createElement(n),u.async=!0,u.src='//static.ads-twitter.com/uwt.js',
    a=t.getElementsByTagName(n)[0],a.parentNode.insertBefore(u,a))}(window,document,'script');
  // Insert Twitter Pixel ID and Standard Event data below
  twq('init','nvmac');
  twq('track','PageView');
</script>
<!-- End Twitter universal website tag code -->
<?php
if ($user->uid == 0 && ($_SERVER['HTTP_HOST'] == "en.tietodev.tieto.com" || $_SERVER['HTTP_HOST'] == "en.tietostage.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.com" || $_SERVER['HTTP_HOST'] == "www.tieto.se" )) { ?>
  <!-- Azalead tracking code -->
  <script src="//b2btagmgr.azalead.com/tag?az=aWRTdWJzY3JpYmVyPTIyNTcmaWRTaXRlPTIzNDcmb3JpZ2luPXd3dy50aWV0by5zZSZjdXN0b209bm9uZQ==" type="application/javascript"></script>
  <!-- End Azalead tracking code -->
<?php
}
?>
</body>
</html>