<?php

/**
 * Class NoMap.
 */
class NoMap implements MenuMapInterface {

  public $menuName = 'menu-norway';
  public $langCode = 'nn';
  public $domainCode = 'no';

  /**
   * Return the data for the megamenu parent link.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuParentData() {
    return [
      'link_title' => 'Hva vi tilbyr',
      'weight' => 2,
      'tieto_megamenu_link' => TRUE,
      'tieto_megamenu_link_expanded' => TRUE,
      'link_path' => '<nolink>',
      'hidden' => 0,
      'plid' => 0,
      'menu_name' => $this->menuName,
    ];
  }

  /**
   * Return the data for the top level links, excluding the megamenu.
   *
   * @return array
   *   The link data.
   */
  public function getTopLevelMenuLinks() {
    $menus = [
      [
        'weight' => 1,
        'link_title' => 'Om oss',
        'existing_title' => 'Om Tieto',
        'off_canvas' => FALSE,
        'link_path' => 'om-tieto',
        'external' => FALSE,
      ],
      [
        'weight' => 3,
        'link_title' => 'Kunder',
        'existing_title' => FALSE,
        'off_canvas' => FALSE,
        'link_path' => 'customer-cases',
        'external' => FALSE,
      ],
      [
        'weight' => 4,
        'link_title' => 'Nyheter',
        'existing_title' => FALSE,
        'off_canvas' => FALSE,
        'link_path' => 'nyheter',
        'external' => FALSE,
      ],
      [
        'weight' => 5,
        'link_title' => 'Karriere',
        'existing_title' => 'Karriere',
        'off_canvas' => FALSE,
        'link_path' => 'karriere',
        'external' => FALSE,
      ],
      [
        'weight' => 6,
        'link_title' => 'Samfunnsansvar',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'om-tieto/selskapets-samfunnsansvar',
        'external' => FALSE,
      ],
      [
        'weight' => 7,
        'link_title' => 'Investorer',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'investors',
        'external' => FALSE,
      ],
      [
        'weight' => 8,
        'link_title' => 'Events',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'calendar',
        'external' => FALSE,
      ],
      [
        'weight' => 9,
        'link_title' => 'Blogger',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'https://perspectives.tieto.com/',
        'external' => TRUE,
      ],
    ];

    // Add common stuff after the specific elements so code is less cluttered.
    foreach ($menus as &$menu) {
      $menu += [
        'plid' => 0,
        'menu_name' => $this->menuName,
        'lang_code' => $this->langCode,
      ];
    }

    return $menus;
  }

  /**
   * Return the data for the megamenu links.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuLinks() {
    $menus = [
      [
        'weight' => 1,
        'link_title' => 'Forretningsområder',
        'children' => $this->getMegamenuMenu1ChildLinks(),
      ],
      [
        'weight' => 2,
        'link_title' => 'Tjenester',
        'children' => $this->getMegamenuMenu2ChildLinks(),
      ],
      [
        'weight' => 3,
        'link_title' => 'Focus areas',
        'children' => $this->getMegamenuMenu3ChildLinks(),
      ],
    ];

    // Add common stuff after the specific elements so code is less cluttered.
    foreach ($menus as &$menu) {
      $menu += [
        'plid' => 0,
        'menu_name' => $this->menuName,
        'lang_code' => $this->langCode,
        'existing_title' => FALSE,
        'link_path' => '<nolink>',
        'external' => FALSE,
      ];
    }

    return $menus;
  }

  /**
   * Return the data for the first megamenu child.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuMenu1ChildLinks() {
    $menus = [
      [
        'link_title' => 'Energi',
        'link_path' => 'industries/energy',
      ],
      [
        'link_title' => 'Finans',
        'link_path' => 'industries/financial-services',
      ],
      [
        'link_title' => 'Skogsindustri',
        'link_path' => 'industries/forestry-wood-pulp-paper',
      ],
      [
        'link_title' => 'Helse og velferd',
        'link_path' => 'industries/healthcare-and-welfare',
      ],
      [
        'link_title' => 'Logistikk',
        'link_path' => 'industries/logistics',
      ],
      [
        'link_title' => 'Produksjon',
        'link_path' => 'industries/manufacturing',
      ],
      [
        'link_title' => 'Media',
        'link_path' => 'industries/media',
      ],
      [
        'link_title' => 'Olje og gass',
        'link_path' => 'industries/oil-and-gas',
      ],
      [
        'link_title' => 'Offentlig sektor',
        'link_path' => 'industries/public',
      ],
      [
        'link_title' => 'Varehandel',
        'link_path' => 'industries/retail-and-wholesale',
      ],
      [
        'link_title' => 'Telecom',
        'link_path' => 'industries/telecom',
      ],
    ];

    // Add common stuff after the specific elements so code is less cluttered.
    foreach ($menus as &$menu) {
      $menu += [
        'lang_code' => $this->langCode,
      ];
    }

    return $menus;
  }

  /**
   * Return the data for the second megamenu child.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuMenu2ChildLinks() {
    $menus = [
      [
        'link_title' => 'Applikasjoner',
        'link_path' => 'services/application-services',
      ],
      [
        'link_title' => 'Applikasjonsplattformer',
        'link_path' => 'services/business-application-platforms',
      ],
      [
        'link_title' => 'Prosess',
        'link_path' => 'services/business-process-services',
      ],
      [
        'link_title' => 'Forretningsrådgivning',
        'link_path' => 'services/consulting-services',
      ],
      [
        'link_title' => 'Sluttbrukertjenester',
        'link_path' => 'services/end-user-services',
      ],
      [
        'link_title' => 'Infrastruktur',
        'link_path' => 'services/infrastructure-services',
      ],
      [
        'link_title' => 'Drift',
        'link_path' => 'services/outsourcing',
      ],
      [
        'link_title' => 'Produktutvikling',
        'link_path' => 'product-development/overview',
      ],
    ];

    // Add common stuff after the specific elements so code is less cluttered.
    foreach ($menus as &$menu) {
      $menu += [
        'lang_code' => $this->langCode,
      ];
    }

    return $menus;
  }

  /**
   * Return the data for the third megamenu child.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuMenu3ChildLinks() {
    $menus = [
      [
        'link_title' => 'Artificial Intelligence',
        'link_path' => 'https://perspectives.tieto.com/blog/2016/03/artificial-intelligence-are-we-there-yet',
      ],
      [
        'link_title' => 'Cloud',
        'link_path' => 'key-topics/cloud',
      ],
      [
        'link_title' => 'CEM',
        'link_path' => 'key-topics/customer-experience-management',
      ],
      [
        'link_title' => 'Digitalization',
        'link_path' => 'https://campaigns.tieto.com/digitalizing-your-business',
      ],
      [
        'link_title' => 'GDPR',
        'link_path' => 'key-topics/gdpr',
      ],
      [
        'link_title' => 'IOT',
        'link_path' => 'key-topics/data-driven',
      ],
      [
        'link_title' => 'Security',
        'link_path' => 'key-topics/security-services',
      ],
    ];

    // Add common stuff after the specific elements so code is less cluttered.
    foreach ($menus as &$menu) {
      $menu += [
        'lang_code' => $this->langCode,
      ];
    }

    return $menus;
  }

  /**
   * Get map of additional required fixes.
   *
   * @todo
   *
   * @return array
   */
  public function getAdditionalFixes() {
    return [];
  }

}
