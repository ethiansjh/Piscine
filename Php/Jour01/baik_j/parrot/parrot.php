#!/usr/bin/env php
<?php
// parrot.php for parrot in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Tue Apr 12 02:02:01 2016 BAIK Jaehyun
// Last update Tue Apr 12 02:03:41 2016 BAIK Jaehyun
//

function human($str = NULL)
{
  global $glo;
  if ($glo != NULL)
    {
      $glo = "$glo"." ... " ."$str";
    }
  else
    $glo = "$str";
}
function parrot()
{
  global $glo;  
  if ($glo == NULL)
    echo ("Coco?\n");
  else
    {
      $strcat = "$glo";
      echo ("$glo");
      echo (" ... Coco ...\n");
    }
  $glo = NULL;
}