<div class='newsroom-wrapper'>
<div class='newsroom-section-one'>
	<div class='newsroom-row'>
		<div class='news-tile tile-col-1 one-a'>
		      <div class='news-tile-title'><?php echo l(t('Press releases'),$press_release_link);?></div>
				<?php
						print views_embed_view('newsroomlatestrelease','press_releases');
				?>
				<span class='news-tile-more'><?php echo l(t('See More'),$press_release_link);?>  <i class="fa fa-angle-right"></i></span>
		</div>
		<div class='news-tile tile-col-2 one-b'>
	      <div class='news-tile-title'><?php echo l(t('Stock exchange releases'),$stock_exchange_link);?></div>
            <?php print $stock_exchange_releases; ?>
		    <span class='news-tile-mgr-transactions'>
            <span class= 'see-more'><?php echo l(t('See More'),$stock_exchange_link);?><i class="fa fa-angle-right"></i></span></br>
            <?php echo l(t("Managers’ transactions"),$managers_transaction_link);?>  <i class="fa fa-angle-right"></i>
           </span>
		</div>
	</div>
	<div class='newsroom-row'>
		<div class='news-tile tile-col-1 two-a'>
				<div class='news-tile-title'><?php echo l(t('Trade releases'),$trade_release_link);?></div>
				<?php
						print views_embed_view('newsroomlatestrelease','trade_releases');
				?>
				<span class='news-tile-more'><?php echo l(t('See More'),$trade_release_link);?>  <i class="fa fa-angle-right"></i></span>

		</div>
		<div class='news-tile tile-col-2 two-b'>
		        <div class='news-tile-title'><?php echo l(t('Other news'),$other_release_link);?></div>
				<?php
						print views_embed_view('newsroomlatestrelease','other_news');
				?>
				<span class='news-tile-more'><?php echo l(t('See More'),$other_release_link);?>  <i class="fa fa-angle-right"></i></span>
		</div>
	</div>
</div>

	<div class='news-title'></br><h2><?php print t('Tieto in Social media');?></h2></div>
<div class='newsroom-section-two'>
	<div class='newsroom-row'>
		<div class='news-tile tile-col-1'>
				<div class='news-tile-title'><?php echo l(t('Tieto in Twitter'),$twitter_link, array('attributes' => array('target' => '_blank')));?></div>
				<?php
						print $twitter;
				?>
		</div>
		<div class='news-tile tile-col-2'>
		        <div class='news-tile-title'><?php echo l(t('Tieto blog posts'),'https://perspectives.tieto.com/blog',array('attributes' => array('target' => '_blank')));?></div>
				<?php
						print views_embed_view('tieto_blogs','newsroom_blog');
				?>
		</div>
	</div>
	<div class='newsroom-row'>
		<div class='news-tile tile-col-1 yt-tile'>
				<div class='news-tile-title'><?php echo l(t('Tieto in Youtube'),'https://www.youtube.com/user/TietoCorporation',array('attributes' => array('target' => '_blank')));?></div>
				<?php
						print views_embed_view('news_room_youtube_block','newroom_yt');
				?>
		</div>
		<div class='news-tile tile-col-2 fb-tile'>
		        <div class='news-tile-title'><?php echo l(t('Facebook'),'https://www.facebook.com/TietoCorporation/',array('attributes' => array('target' => '_blank')));?></div>
				<?php
						print views_embed_view('news_room_fb_block','block');
				?>
		</div>
	</div>
</div>
</div>
