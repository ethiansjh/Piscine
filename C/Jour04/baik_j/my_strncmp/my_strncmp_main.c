/*
 ** my_strncmp.c for my_strncmp in
 **
 ** Made by BAIK Jaehyun
 ** Login   <baik_j@etna-alternance.net>
 **
 ** Started on  Thu Mar 24 19:04:48 2016 BAIK Jaehyun
** Last update Tue Apr  5 09:10:11 2016 BAIK Jaehyun
 */
#include <stdio.h>
int	my_strlen(char *str);

int	my_strncmp(char *s1, char *s2, int nb)
{
  int	i;

  i = 0;
  while (i <= my_strlen(s1) || i <= my_strlen(s2))
    {
      if (i < nb)
	{
	  if (s1[i] == s2[i])
	    {
	      i = i + 1;
	    }
	  else if (
	    {
	      return (s1[i] - s2[i]); 
	    }
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}

int	main()
{
  printf("%d\n", my_strncmp("LOL", "LO", 3));
  printf("%d\n", my_strncmp(" ", "!@#cd", 2)); 
  printf("%d\n", my_strncmp("123111", "1111", 5));
}
