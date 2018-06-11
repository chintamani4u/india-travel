<?php

/**
 * @file
 * Link maps for the international menu.
 */

// Maps.
function international_get_disable_menu_map() {
  return [
    'Autumn greetings' => [
      'weight' => 70,
      'hidden' => TRUE,
    ],
    'Press' => [
      'weight' => 71,
      'hidden' => TRUE,
    ],
    'Key topics' => [
      'weight' => 72,
      'hidden' => TRUE,
    ],
    'Tieto Times' => [
      'weight' => 73,
      'hidden' => TRUE,
    ],
    'Успішний розвиток карткового бізнесу' => [
      'weight' => 74,
      'hidden' => TRUE,
    ],
    'XHub forum' => [
      'weight' => 75,
      'hidden' => TRUE,
    ],
    'Customer stories' => [
      'weight' => 76,
      'hidden' => TRUE,
    ],
    'Product development' => [
      'weight' => 77,
      'hidden' => TRUE,
    ],
    'Technologies' => [
      'weight' => 78,
      'hidden' => TRUE,
    ],
  ];
}

function international_get_menu_link_weights() {
  return [
    'About us' => [
      'weight' => 1,
      'off_canvas' => FALSE,
      'megamenu' => FALSE,
    ],
    'What we do' => [
      'weight' => 2,
      'off_canvas' => FALSE,
      'megamenu' => TRUE,
    ],
    'Customers' => [
      'weight' => 3,
      'off_canvas' => FALSE,
      'megamenu' => FALSE,
    ],
    'News' => [
      'weight' => 4,
      'off_canvas' => FALSE,
      'megamenu' => FALSE,
    ],
    'Careers' => [
      'weight' => 5,
      'off_canvas' => FALSE,
      'megamenu' => FALSE,
    ],
    'Sustainability' => [
      'weight' => 6,
      'off_canvas' => TRUE,
      'megamenu' => FALSE,
    ],
    'Investors' => [
      'weight' => 7,
      'off_canvas' => TRUE,
      'megamenu' => FALSE,
    ],
    'Events' => [
      'weight' => 8,
      'off_canvas' => TRUE,
      'megamenu' => FALSE,
    ],
    'Blogs' => [
      'weight' => 9,
      'off_canvas' => TRUE,
      'megamenu' => FALSE,
    ],
  ];
}

function international_get_additional_menu_map() {
  return [
    [
      'title' => 'Customers',
      'link' => 'customer-cases',
      'external' => FALSE,
      'off_canvas' => FALSE,
    ],
    [
      'title' => 'Events',
      'link' => 'calendar',
      'external' => FALSE,
      'off_canvas' => TRUE,
    ],
    [
      'title' => 'Blogs',
      'link' => 'https://perspectives.tieto.com/',
      'external' => TRUE,
      'off_canvas' => TRUE,
    ],
  ];
}

function international_get_offcanvas_menu_map() {
  return [
    'sustainability',
    'investors',
  ];
}

function international_get_map_for_existing() {
  return [
    'industries' => [
      'industries/energy',
      'industries/financial-services',
      'industries/forestry-wood-pulp-paper',
      'industries/healthcare-and-welfare',
      'industries/manufacturing',
      'industries/logistics',
      'industries/media',
      'industries/oil-and-gas',
      'industries/public',
      'industries/retail-and-wholesale',
      'industries/telecom',
    ],
    'services' => [
      'services/application-services',
      'services/business-application-platforms',
      'services/business-process-services',
      'services/consulting-services',
      'services/end-user-services',
      'services/infrastructure-services',
      'services/outsourcing',
      'product-development/overview',
    ],
  ];
}

function international_get_focus_areas_map() {
  return [
    'internal' => [
      'key-topics/cloud',
      'key-topics/customer-experience-management',
      'key-topics/gdpr',
      'key-topics/data-driven',
      'key-topics/security-services',
    ],
    'external' => [
      'Artificial Intelligence' => 'https://perspectives.tieto.com/blog/2016/03/artificial-intelligence-are-we-there-yet',
      'Digitalization' => 'https://campaigns.tieto.com/digitalizing-your-business',
    ],
  ];
}

function international_get_focus_areas_submenu_link_map() {
  return [
    [
      'link_path' => 'https://perspectives.tieto.com/blog/2016/03/artificial-intelligence-are-we-there-yet',
      'weight' => 1,
      'title' => FALSE,
      'external' => TRUE,
    ],
    [
      'link_path' => 'key-topics/cloud',
      'weight' => 2,
      'title' => FALSE,
      'external' => FALSE,
    ],
    [
      'link_path' => 'key-topics/customer-experience-management',
      'weight' => 3,
      'title' => 'CEM',
      'external' => FALSE,
    ],
    [
      'link_path' => 'https://campaigns.tieto.com/digitalizing-your-business',
      'weight' => 4,
      'title' => FALSE,
      'external' => TRUE,
    ],
    [
      'link_path' => 'key-topics/gdpr',
      'weight' => 5,
      'title' => 'GDPR',
      'external' => FALSE,
    ],
    [
      'link_path' => 'key-topics/data-driven',
      'weight' => 6,
      'title' => 'IOT',
      'external' => FALSE,
    ],
    [
      'link_path' => 'key-topics/security-services',
      'weight' => 7,
      'title' => 'Security',
      'external' => FALSE,
    ],
  ];
}

function international_get_what_we_do_item_map() {
  return [
    [
      'link_path' => 'industries',
      'link_title' => FALSE,
      'weight' => 1,
    ],
    [
      'link_path' => 'services',
      'link_title' => FALSE,
      'weight' => 2,
    ],
    [
      'link_path' => FALSE,
      'link_title' => 'Focus Areas',
      'weight' => 3,
    ],
  ];
}

// @todo: Refactor to use this.
function get_full_map__international() {
  return [
    [
      'link_title' => 'Customers',
      'link_path' => 'customer-cases',
      'parent_link_path' => FALSE,
      'external' => FALSE,
      'off_canvas' => FALSE,
      'megamenu' => FALSE,
      'hidden' => FALSE,
      'exists' => TRUE,
      'weight' => 3,
      'children' => FALSE,
    ],
  ];
}
