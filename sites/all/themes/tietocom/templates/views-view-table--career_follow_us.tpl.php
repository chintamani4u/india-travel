<h2><?php echo t("Follow Us")?></h2>
<div class="social-media">
	<div class="blog1 col-3 view-tieto-blogs">
		<h3><?php echo t("Blog posts")?></h3>
		<ul>
		<?php foreach($rows as $index=>$row):?>
		 <li class=""> 
		    <div class="post">
			 <div class="views-field views-field-title"><span class="field-content"><?php echo $row['title'];?></span></div>
			  <span class="views-field views-field-timestamp"><span class="field-content"><?php echo $row['timestamp'];?></span></span>
			</div>
			</li>
		<?php endforeach;?>
		</ul>
	</div><div class="blog2 col-3">
		<h3><?php echo t("From Twitter")?></h3>
		<div class="widget">
<a class="twitter-timeline" data-dnt="true" href="https://twitter.com/TietoCorp" data-widget-id="512544906376523776">Tweets by @TietoCorp</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
		</div>
	</div><div class="blog3 col-3">
		<h3><?php echo t("From Linkedin")?></h3>
		<div class="widget"> 
			<script src="//platform.linkedin.com/in.js" type="text/javascript"></script>
<script type="IN/JYMBII" data-companyid="1892" data-format="inline"></script>
		</div>
	</div>
</div>

