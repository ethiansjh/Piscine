#!/usr/bin/env php
<?php
// hello.php for hello in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Mon Apr 11 09:16:10 2016 BAIK Jaehyun
// Last update Mon Apr 11 21:45:24 2016 BAIK Jaehyun
//

function hello($param = null)
{
  if ($param)
    {
      echo ("Hello " . $param . " !\n");
    }
  else
    {
      echo ("Hello world !\n");
    }
}