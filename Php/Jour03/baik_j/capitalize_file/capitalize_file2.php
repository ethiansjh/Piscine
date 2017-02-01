#!/usr/bin/env php
<?php
// capitalize_file.php<capitalize_file> for capitalize_file in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Wed Apr 13 09:58:14 2016 BAIK Jaehyun
// Last update Wed Apr 13 17:43:48 2016 BAIK Jaehyun
//

for ($i = 1; $i < $argc; $i++)
  {
    if (file_exists($argv) == false)
      echo ("content.php: " . $arg . ": No such file or directory\n");  
  else
    {
      if (is_dir($argv))
	{
	echo ("content.php: " . $arg. ": Is a directory\n");
	}
      else if (is_readable($argv) == false || is_writable($argv) == false)
	{
	echo ("content.php: " . $arg . ": Permission denied\n");
	}
    }
    $handle = fopen($argv[$i], "r");
    if (!$handle)
      echo ("content.php: " . $argv[$i] . ": Cannot open file\n");
    else
      {
	$contents = fread($handle, filesize($argv[$i]));
	fclose($handle);
	echo ($contents);
      }
  }