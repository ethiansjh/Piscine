#!/usr/bin/env php
<?php
// capitalize_file.php<capitalize_file> for capitalize_file in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Wed Apr 13 09:58:14 2016 BAIK Jaehyun
// Last update Thu Apr 14 00:33:15 2016 BAIK Jaehyun
//

if ($argc > 1)
  {
    $file = file_get_contents($argv[1]);
    echo ($file);
  }

