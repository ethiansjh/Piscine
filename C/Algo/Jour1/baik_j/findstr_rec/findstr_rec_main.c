/*
** findstr_rec.c for findstr_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Apr  5 00:24:04 2016 BAIK Jaehyun
** Last update Tue Apr  5 01:30:42 2016 BAIK Jaehyun
*/
#include <stdio.h>
int	findstr_rec(char* str, char* to_find)
{
  if (*str != *to_find)
    {
      if (*str == '\0')
	{
	  return (0);
	}
      return (findstr_rec(str+1, to_find));
    }
  else
    {
      if (to_find == '\0')
	{
	  return (1);
	}
      printf("3%c\n", *str);
      printf("4%c\n", *to_find);
      return (findstr_rec(str + 1, to_find + 1));
    }
}


int	main()
{
  //printf("%d\n", findstr_rec("yeslolyes", "lol"));
  printf("%d\n", findstr_rec("yeslolyes", "yelol"));
}
