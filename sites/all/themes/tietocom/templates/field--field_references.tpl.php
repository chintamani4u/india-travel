<?php
$menu_items = array();
$reference_views = array();
foreach ($items as $id => $item) {
  foreach($item['entity']['field_collection_item'] as $id => $node){
  $menu_items[] = $node['#entity']->field_menu[LANGUAGE_NONE][0]['value'];
  $reference_views[] = explode(':', $node['#entity']->field_view[LANGUAGE_NONE][0]['view_id']);
	
}
  
} 
?>
    <!--<section class="nav-menu">
	<div class="megamenu-block length-5">
		<ul class="menu">
		<?php /* foreach($menu_items as $item):?>
			<li class="menu__item"><a href="#<?php print str_replace(' ', '_', $item)?>"><?php print $item;?></a></li>
		<?php endforeach;*/?>
		</ul>
	</div>
</section>-->
<?php foreach($reference_views as $id => $view):?>
  <?php
  // Check if it is not for first menu tab in career page.
  if($id!=0) {?>
    	<section id="<?php print str_replace(' ','_',$menu_items[$id])?>" class="<?php print $id ? "" : "expand" ?> sticky-menu-dependent">
		<a name="<?php print str_replace(' ','_',$menu_items[$id])?>"></a>
		<?php print  views_embed_view($view[0], $view[1]);?>
	</section>
    <!-- Extra section for jobs tab anchor tag. -->
  <?php }else{?>
    <section class="expand sticky-menu-dependent">
     <?php print  views_embed_view($view[0], $view[1]);?>
    </section>
<?php } endforeach;?>
