#!/usr/bin/env php
<?php
// calc.php for calc in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Tue Apr 12 02:07:03 2016 BAIK Jaehyun
// Last update Tue Apr 12 02:07:11 2016 BAIK Jaehyun
//

function calc($operator = NULL, $nb = NULL)
{
  global $val;
  if ($val == NULL)
    $val = 0;
  if ($operator != NULL || $nb != NULL)
    {
      if (($val <= 0 || $nb <= 0) && ($operator == '%'
				      || $operator == '/'))
	echo ("Division by 0!\n");
      else
	{
	  if ($operator == '+')
	    $val = $val + $nb;
	  if ($operator == '-')
	    $val = $val - $nb;
	  if ($operator == '/')
	    $val = $val / $nb;
	  if ($operator == "%")
	    $val = $val % $nb;
	  if ($operator == '*')
	    $val = $val * $val;
	  if ($operator == "=")
	    $val = $nb;
	  return ($val);
	}
    }
  else
    return ($val);
}