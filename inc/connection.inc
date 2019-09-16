<?php
if(!defined('SALT')){
	define('SALT','pyp90774ertwwLB8Yiipop$%23asdqwee99=-:??/zxd55');
}
if($_SERVER["SERVER_NAME"] == "localhost"){
	$host = "localhost";
}else {
    $host = "mysql.ncl.ac.uk";
}
if(!isset($_SESSION["loggedin"])) {
    dl::connect($host, "FMS_nflexiem_crf_RO", "xznYquUKi8", "nflexiem_crf");
}else{
    dl::connect($host, "FMS_nflexiem_crf_RW", "wIiFcgVMGJ", "nflexiem_crf");
}


