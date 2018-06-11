<?php
$location = explode(",",$row->description);
$parent_location = array();
foreach ($location as $city) {
  $city_term = taxonomy_get_term_by_name($city, 'tieto_jobs_locations');
  $location_term = current($city_term);
  $parent = taxonomy_get_parents($location_term->tid);
  $parent_term = current($parent);
  if (!empty($parent_term) && !in_array($parent_term->name, $parent_location)) {
     array_push($parent_location, $parent_term->name);
  }
}
?>
<item>
  <title><?php print($row->title);?></title>
  <link><?php print($row->link);?></link>
  <locations>
   <location>
  <?php foreach ($parent_location as $country) {?>
  <country><?php echo $country;?></country>
  <?php } ?>
   </location>
  </locations>
 </item>
