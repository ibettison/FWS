<?php
if(!defined('SALT')){
	define('SALT','pyp90774ertwwLB8Yiipop$%23asdqwee99=-:??/zxd55');
}
if($_SERVER["SERVER_NAME"] == "localhost"){
	$host = "localhost";
}else{
	$host = "database.ncl.ac.uk";
}
if(!isset($_SESSION["loggedin"])) {
	dl::connect($host, "nflex_read", "akwyit7k", "nflexiem_crf");
}else{
	dl::connect($host, "nflexiem_crf", "rj8219pt", "nflexiem_crf");
}


