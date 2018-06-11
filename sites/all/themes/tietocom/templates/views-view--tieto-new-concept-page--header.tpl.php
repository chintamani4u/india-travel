<?php
$node_path = explode('/',$_GET['q']); 
$node= node_load($node_path[1]);

if(isset($node->field_background_atom['und'][0]['sid'])) {
  $img = $node->field_background_atom['und'][0]['sid'];
  $atom = scald_atom_load($img);
  $bg_image = $atom->rendered->file_source_url;
}
?>
<div class="views-exposed-form generic-page" style = "background-image: url('<?php echo $bg_image?>');"  >
  <div class="views-exposed-widgets clearfix">
	<h2><?php print $view->result['0']->node_title ?></h2>
	<div class="views-widget col-1" >
			<?php  print $view->result['0']->field_field_sub_title['0']['rendered']['#markup']?>
	</div>
	
    </div>
</div>
<?php
$block = module_invoke('tieto_new_concept_page', 'block_view', 'concept_page_menu');
?>
<div class="generic-page-menu">
<?php
print render($block['content']);
?>
</div>