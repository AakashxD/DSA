<?php
$un=$_POST['t1'];
$q1=$_POST['r1'];
$q1=$_POST['r2'];
$sug=$_POST['r3'];
echo "username",$un;
echo "you rated",$q1.$q2;
echo "your Suggestion".$sug;
$sql="INSERT INTO survey VALUES('$un','$q1','$q2','$sug')";
if(mysqli_query()
?>
