/*
** epur_str.c for epur_str in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Apr  6 09:33:57 2016 BAIK Jaehyun
** Last update Wed Apr  6 15:25:30 2016 BAIK Jaehyun
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

char*	epur_str(char *str)
{
  char  *tmp;
  int   i; 
  int   j; 

  i = 0;
  j = 0; 
  tmp = malloc(my_strlen(str) * sizeof(*tmp) + 1);
  while (str[i] != '\0')
    {
      if (str[i] != ' ' && str[i] != '\t' )
	{
	  tmp[j] = str[i];
	  j++;
	  if (str[i + 1] == ' ' || str[i + 1] == '\t')
	    {
	      tmp[j] = ' ';
	      j++;
	    }
	}
      i++;
    }
tmp[j] = 0;
return (tmp);
}
