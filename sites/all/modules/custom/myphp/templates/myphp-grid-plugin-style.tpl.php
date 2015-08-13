<div id="views-bootstrap-grid-<?php print $id ?>" class="<?php print $classes ?>"><?php
    if ($options['alignment'] == 'horizontal'):?>
        <div class="row"><?php
        foreach ($rows as $i => $row): ?>
            <div class="<?php print $info['class'] ?>"><?php
            print $row ?>
            </div><?php
            foreach ($info['devices'] as $device) :
                if ((($i + 1) % $device['col']) == 0)  : ?>
                <div class="clearfix visible-<?php print $device['index'] ?>-block"></div><?php
                endif;
            endforeach;
        endforeach ?>
        </div><?php
    elseif ($options['alignment'] == 'masonry'): ?>
        <div class="row masonry"><?php
        foreach ($rows as $row): ?>
            <div class="<?php print $info['class'] ?>"><?php
            print $row ?>
            </div><?php
        endforeach;
        ?>
        </div><?php
    endif ?>
</div>

