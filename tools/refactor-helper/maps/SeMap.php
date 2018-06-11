<?php

/**
 * Class SeMap.
 */
class SeMap implements MenuMapInterface {

  public $menuName = 'menu-sweden';
  public $langCode = 'sv';
  public $domainCode = 'se';

  /**
   * Return the data for the megamenu parent link.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuParentData() {
    return [
      'link_title' => 'Vad vi gör',
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
        'existing_title' => FALSE,
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
        'link_title' => 'Pressrum',
        'existing_title' => FALSE,
        'off_canvas' => FALSE,
        'link_path' => 'pressrum',
        'external' => FALSE,
      ],
      [
        'weight' => 5,
        'link_title' => 'Karriär',
        'existing_title' => FALSE,
        'off_canvas' => FALSE,
        'link_path' => 'karriar',
        'external' => FALSE,
      ],
      [
        'weight' => 6,
        'link_title' => 'Hållbarhet',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'sustainability',
        'external' => FALSE,
      ],
      [
        'weight' => 7,
        'link_title' => 'Investerare',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'investerare',
        'external' => FALSE,
      ],
      [
        'weight' => 8,
        'link_title' => 'Event',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'calendar',
        'external' => FALSE,
      ],
      [
        'weight' => 9,
        'link_title' => 'Blogg',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'https://perspectives.tieto.com',
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
        'link_title' => 'Branscher',
        'children' => $this->getMegamenuMenu1ChildLinks(),
      ],
      [
        'weight' => 2,
        'link_title' => 'Tjänster',
        'children' => $this->getMegamenuMenu2ChildLinks(),
      ],
      [
        'weight' => 3,
        'link_title' => 'Fokusområden',
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
        'link_path' => 'branscher/energi',
      ],
      [
        'link_title' => 'Bank och försäkring',
        'link_path' => 'branscher/bank-och-forsakring',
      ],
      [
        'link_title' => 'Skogsindustri',
        'link_path' => 'branscher/skogsindustri',
      ],
      [
        'link_title' => 'Hälsa och välfärd',
        'link_path' => 'branscher/halsa-och-valfard',
      ],
      [
        'link_title' => 'Logistik',
        'link_path' => 'branscher/logistik',
      ],
      [
        'link_title' => 'Tillverkning',
        'link_path' => 'branscher/tillverkning',
      ],
      [
        'link_title' => 'Media',
        'link_path' => 'branscher/media',
      ],
      [
        'link_title' => 'Olja och gas',
        'link_path' => 'industries/oil-and-gas',
      ],
      [
        'link_title' => 'Offentlig sektor',
        'link_path' => 'branscher/offentlig-sektor',
      ],
      [
        'link_title' => 'Detaljhandel',
        'link_path' => 'branscher/handel',
      ],
      [
        'link_title' => 'Telekom',
        'link_path' => 'branscher/telekom',
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
        'link_title' => 'Applikationstjänster',
        'link_path' => 'tjanster/applikationstjanster',
      ],
      [
        'link_title' => 'Plattformar för företagsapplikationer',
        'link_path' => 'tjanster/foretagsapplikationer',
      ],
      [
        'link_title' => 'Affärsprocesstjänster',
        'link_path' => 'tjanster/processtjanster',
      ],
      [
        'link_title' => 'Affärs- och IT-konsulttjänster',
        'link_path' => 'tjanster/affars-och-it-konsulttjanster',
      ],
      [
        'link_title' => 'Tjänster för slutanvändare',
        'link_path' => 'tjanster/end-user-services',
      ],
      [
        'link_title' => 'Infrastrukturlösningar och tjänster',
        'link_path' => 'tjanster/infrastrukturlosningar-och-tjanster',
      ],
      [
        'link_title' => 'Outsourcing',
        'link_path' => 'tjanster/outsourcing',
      ],
      [
        'link_title' => 'Produktutvecklingstjänster',
        'link_path' => 'product-development/overview',
      ],
      [
        'link_title' => 'Front end-lösningar',
        'link_path' => 'tjanster/digitalt-ramverk-front-end-losningar',
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
        'link_title' => 'Artificiell intelligens',
        'link_path' => 'https://perspectives.tieto.com/blog/2016/03/artificial-intelligence-are-we-there-yet',
      ],
      [
        'link_title' => 'Molnlösningar',
        'link_path' => 'fokusomraden/molnlosningar',
      ],
      [
        'link_title' => 'Customer Experience Management',
        'link_path' => 'fokusomraden/customer-experience-management',
      ],
      [
        'link_title' => 'Digitalisering',
        'link_path' => 'https://campaigns.tieto.com/digitalizing-your-business',
      ],
      [
        'link_title' => 'General Data Protection Regulation',
        'link_path' => 'key-topics/gdpr',
      ],
      [
        'link_title' => 'Internet of Things',
        'link_path' => 'fokusomraden/datadrivna-affarer',
      ],
      [
        'link_title' => 'Datasäkerhet',
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
