/*
** my_strncmp.c for my_strncmp in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 19:04:48 2016 BAIK Jaehyun
** Last update Tue Apr  5 09:10:09 2016 BAIK Jaehyun
*/
#include <stdio.h>
int	my_strncmp(char *s1, char *s2, int n)
{
  for (;n > 0; s1++, s2++, --n)
    {
      if (*s1 < *s2)
	{
	  return (-1);
	}
      else if (*s1 > *s2)
	{
	  return (1);
	}
      else
	{
	  return (0);
	}
    }
  return (0);
}

int	main()
{
  printf("%d\n", my_strncmp("LOL", "LO", 3));
  printf("%d\n", my_strncmp(" ", "!@#cd", 2)); 
  printf("%d\n", my_strncmp("123111", "1111", 5));
}
