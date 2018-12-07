#!/usr/bin/php

<?php
unset($argv[0]);
foreach($argv as $v)
	echo $v;

function	ft_split($str)
{
	$ret = array_filter(explode(''.$str));
	sort($ret);
	return $ret;
}

?>
