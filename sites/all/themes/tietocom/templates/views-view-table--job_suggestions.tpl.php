<?php
  $backgrounds = array(
    "sites/all/themes/tietocom/images/career/careers_jobs_3.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_4.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_5.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_6.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_9.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_10.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_11.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_12.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_13.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_14.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_15.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_16.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_17.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_18.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_19.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_20.jpg",
    "sites/all/themes/tietocom/images/career/careers_jobs_21.jpg"
  );
  shuffle($backgrounds);

?>
<table class="job-list-section">
  <tr>
    <td class="primary-parent">
      <?php for($index=0;$index<5;$index++):?>
      <?php $row = $rows[$index]?>
      <?php if($index==2):?>
    </td>
    <td class="secondary-parent">
      <?php endif;?>
      <?php if($index==3):?>
    </td>
    <td class="primary-parent">
      <?php endif;?>
      <span class="<?php print $index==2 ? "secondary":"primary"?>" style="background-image: url(<?php echo $backgrounds[$index]?>)">
        <?php if($row):?>
          <span><?php echo $row['title'];?><br><?php echo $row['field_jobs_location'];?></span>
        <?php endif;?>
      </span>
      <?php endfor;?>
    </td>
  </tr>
</table>  



