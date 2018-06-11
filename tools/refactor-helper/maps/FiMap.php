<?php

/**
 * Class FiMap.
 */
class FiMap implements MenuMapInterface {

  public $menuName = 'menu-finland';
  public $langCode = 'fi';
  public $domainCode = 'fi';

  /**
   * Return the data for the megamenu parent link.
   *
   * @return array
   *   The link data.
   */
  public function getMegamenuParentData() {
    return [
      'link_title' => 'Tiedon palvelutarjonta',
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
        'link_title' => 'Tiedosta',
        'existing_title' => 'Tiedosta',
        'off_canvas' => FALSE,
        'link_path' => 'tiedosta',
        'external' => FALSE,
      ],
      [
        'weight' => 3,
        'link_title' => 'Menestystarinat',
        'existing_title' => FALSE,
        'off_canvas' => FALSE,
        'link_path' => 'menestystarinat',
        'external' => FALSE,
      ],
      [
        'weight' => 4,
        'link_title' => 'Uutiset',
        'existing_title' => FALSE,
        'off_canvas' => FALSE,
        'link_path' => 'uutiset',
        'external' => FALSE,
      ],
      [
        'weight' => 5,
        'link_title' => 'Uramahdollisuudet',
        'existing_title' => 'Uramahdollisuudet',
        'off_canvas' => FALSE,
        'link_path' => 'uramahdollisuudet',
        'external' => FALSE,
      ],
      [
        'weight' => 6,
        'link_title' => 'Kestävä kehitys',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'sustainability',
        'external' => FALSE,
      ],
      [
        'weight' => 7,
        'link_title' => 'Sijoittajille',
        'existing_title' => 'Sijoittajille',
        'off_canvas' => TRUE,
        'link_path' => 'sijoittajille-tieto',
        'external' => FALSE,
      ],
      [
        'weight' => 8,
        'link_title' => 'Tapahtumat',
        'existing_title' => FALSE,
        'off_canvas' => TRUE,
        'link_path' => 'kalenteri',
        'external' => FALSE,
      ],
      [
        'weight' => 9,
        'link_title' => 'Blogi',
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
        'link_title' => 'Toimialat',
        'existing_title' => 'Toimialat',
        'children' => $this->getMegamenuMenu1ChildLinks(),
      ],
      [
        'weight' => 2,
        'link_title' => 'Palvelut',
        'existing_title' => 'Palvelut',
        'children' => $this->getMegamenuMenu2ChildLinks(),
      ],
      [
        'weight' => 3,
        'link_title' => 'Fokusalueet',
        'existing_title' => 'Fokusalueet',
        'children' => $this->getMegamenuMenu3ChildLinks(),
      ],
    ];

    // Add common stuff after the specific elements so code is less cluttered.
    foreach ($menus as &$menu) {
      $menu += [
        'plid' => 0,
        'menu_name' => $this->menuName,
        'lang_code' => $this->langCode,
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
        'link_title' => 'Energia',
        'link_path' => 'toimialat/energia',
      ],
      [
        'link_title' => 'Pankki ja vakuutus',
        'link_path' => 'toimialat/pankki-ja-vakuutus',
      ],
      [
        'link_title' => 'Metsäteollisuus',
        'link_path' => 'toimialat/metsateollisuus',
      ],
      [
        'link_title' => 'Sosiaali- ja terveydenhuolto',
        'link_path' => 'toimialat/sosiaali-ja-terveydenhuolto',
      ],
      [
        'link_title' => 'Logistiikka',
        'link_path' => 'toimialat/logistiikka',
      ],
      [
        'link_title' => 'Valmistava teollisuus',
        'link_path' => 'toimialat/valmistava-teollisuus',
      ],
      [
        'link_title' => 'Media',
        'link_path' => 'toimialat/media',
      ],
      [
        'link_title' => 'Öljy ja kaasu',
        'link_path' => 'industries/oil-and-gas',
      ],
      [
        'link_title' => 'Julkinen sektori',
        'link_path' => 'toimialat/julkinen-sektori',
      ],
      [
        'link_title' => 'Tukku- ja vähittäiskauppa',
        'link_path' => 'toimialat/tukku-ja-vahittaiskauppa',
      ],
      [
        'link_title' => 'Tietoliikenne',
        'link_path' => 'industries/telecom',
      ],
      [
        'link_title' => 'Kasvatus ja opetus',
        'link_path' => 'toimialat/kasvatus-ja-opetus',
      ],
      [
        'link_title' => 'Tietoliikenne',
        'link_path' => 'toimialat/tietoliikenne',
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
        'link_title' => 'Sovelluspalvelut',
        'link_path' => 'palvelut/sovelluspalvelut',
      ],
      [
        'link_title' => 'Liiketoiminnan sovellusalustat',
        'link_path' => 'palvelut/liiketoiminnan-sovellusalustat',
      ],
      [
        'link_title' => 'Liiketoimintaprosessipalvelut',
        'link_path' => 'palvelut/liiketoimintaprosessipalvelut',
      ],
      [
        'link_title' => 'Konsultointipalvelut',
        'link_path' => 'palvelut/konsultointipalvelut',
      ],
      [
        'link_title' => 'Loppukäyttäjäpalvelut',
        'link_path' => 'palvelut/loppukayttajapalvelut',
      ],
      [
        'link_title' => 'Infrastruktuuripalvelut',
        'link_path' => 'palvelut/infrastruktuuripalvelut',
      ],
      [
        'link_title' => 'Ulkoistuspalvelut',
        'link_path' => 'palvelut/ulkoistuspalvelut',
      ],
      [
        'link_title' => 'Tuotekehityspalvelut',
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
        'link_title' => 'Datakeskeiset liiketoiminno',
        'link_path' => 'fokusalueet/datakeskeiset-liiketoiminnot',
      ],
      [
        'link_title' => 'Pilvipalvelut',
        'link_path' => 'fokusalueet/pilvipalvelut',
      ],
      [
        'link_title' => 'Asiakaskokemuksen johtaminen',
        'link_path' => 'fokusalueet/asiakaskokemuksen-johtaminen',
      ],
      [
        'link_title' => 'Digitalisation',
        'link_path' => 'key-topics/digitalizing-your-business',
      ],
      [
        'link_title' => 'General Data Protection Regulation',
        'link_path' => 'key-topics/gdpr',
      ],
      [
        'link_title' => 'Internet of Things',
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
