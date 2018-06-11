<?php
/*
 * The purpose for this is just to extend the Curler class and make cookie parameter configurable
 * so Curler.class.php can be easily updated
 */
class Cookie extends Curler
{
  function _setCookie($cookie)
  {
    $this->_cookie = $cookie;
  }
}