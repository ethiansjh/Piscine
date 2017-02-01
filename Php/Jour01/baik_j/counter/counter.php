#!/usr/bin/env php
<?php
// counter.php for counter in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Tue Apr 12 01:14:37 2016 BAIK Jaehyun
// Last update Tue Apr 12 01:54:58 2016 BAIK Jaehyun
//

function counter($val = NULL)
{
  global $nbr;
  if ($nbr == NULL)
    $nbr = 0;
  if ($val == NULL)
    return ($nbr);
  else
    $nbr = $nbr + $val;
}