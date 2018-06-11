Marketo Munchkin
****************
Marketo Munckin is a very simple module to output the Marketo Munchkin tracking
code obtained from http://www.marketo.com/. Marketo Munckin can also use the 
Marketo Munckin API to allow Lead data submissionfrom your site's forms to your
account at http://www.marketo.com/.

Usage Instructions
******************
 1. Enable the module at admin/modules.
 2. Configure the Marketo Munchkin tracking code and URL at
    admin/config/search/marketo-munchkin.  Please note that the URL will rarely
    need to be changed from the default.
 3. To enable Lead data submission, configure the Marketo Munchkin secret key at
    admin/config/search/marketo-munchkin.  Please note that Lead data cannot be
    submitted without this secret key, created at using your account at
    http://www.marketo.com/
 4. Implement hooks in your module to modify Lead data by altering forms to
    trigger calls to the MunchkinFunction API.

Authors
*******
andyp22 [1] is the current maintainer.  DamienMcKenna [2], on behalf of
Bluespark Labs [3], wrote v1 for Drupal 6, andyp22, on behalf of Enspire
Learning [4], ported v1 to Drupal 7 and wrote the improvements in v2.


1: http://drupal.org/user/584308
2: http://drupal.org/user/108450
3: http://www.bluesparklabs.com/
4: http://www.enspire.com/
