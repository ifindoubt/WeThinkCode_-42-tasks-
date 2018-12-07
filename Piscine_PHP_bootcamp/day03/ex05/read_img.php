<?php
	$image = "image/42.png";
	header("Content-Type: image/png");
	readfile($image);
?>
