#!/usr/bin/php
<?php
    if($argc == 2)
    {
        $array = array_filter(explode(' ', $argv[1]));
        unset($argv[0]);
        $res = implode(" ", $array);    
    }   echo $res . "\n";
?>
