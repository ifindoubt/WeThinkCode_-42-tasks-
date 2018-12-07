#!/usr/bin/php
<?php
$handle = fopen("php://stdin", "r");    
$num = 42;
while ($stdin && !feof($stdin))
{
    echo "Enter Number: ";
    $number = fget($stdin);
}
if($num % 2 == 0)
{
    echo"even";
}
else
    {
        echo "odd";
    }
fclose($stdin)
echo "\n";
?>


