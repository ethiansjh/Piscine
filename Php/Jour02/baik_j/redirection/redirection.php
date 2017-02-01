#!/usr/bin/env php
<?php
// redirection.php for redirection in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Tue Apr 12 16:21:50 2016 BAIK Jaehyun
// Last update Wed Apr 13 12:23:39 2016 BAIK Jaehyun
//
function	error($arg)
{
  if (is_dir($arg))
    {
      echo ("redirection.php: " . $arg . ": Is a directory\n");
      return (1);
    }
  else if (is_readable($arg) == false || is_writable($arg) == false)
    {
      echo ("redirection.php: " . $arg . ": Permission denied\n");
      return (1);
    }
  else
    return (0);
}

if ($argc > 2)
  {
    if (error($arg) == 0)
      {
	if ($argv[2] == ">")
	  {
	    $open = fopen($argv[3], "w");
	    if (!$open)
	      echo ("redirection.php: " . $argv[3] . ": Cannot open file\n");
	    else
	      fwrite($open, $argv[1]);
	  }
	if ($argv[2] == ">>")
	  {
	    $open = fopen($argv[3], "a");
	    if (!$open)
	      echo ("redirection.php: " . $argv[3] . ": Cannot open file\n");
	    else
	      fwrite($open, $argv[1]);
	  }
	fclose($open);
      }
  }
else
  echo ("Usage :./redirection.php 'string' '[> >>]' 'File'\n");