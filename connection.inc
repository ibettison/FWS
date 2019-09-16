<?php
if(!defined('SALT')){
	define('SALT','pyp90774ertwwLB8Yiipop$%23asdqwee99=-:??/zxd55');
}
if(!isset($_SESSION["loggedin"])) {
	dl::connect("mysql.ncl.ac.uk", "FMS_nflexiem_crf_RO", "xznYquUKi8", "nflexiem_crf");
}else{
	dl::connect("mysql.ncl.ac.uk", "FMS_nflexiem_crf_RW", "wIiFcgVMGJ", "nflexiem_crf");
}


