/*
** my_strdup.c for my_strdup in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 28 14:13:24 2016 BAIK Jaehyun
** Last update Wed Mar 30 21:21:08 2016 BAIK Jaehyun
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char	*cpy;
  int	size;

  size = my_strlen(str);
  cpy = malloc((size + 1) * sizeof(char));
  if (str == 0)
  {
    return (0);
  }
  my_strcpy(cpy, str);
  return (cpy);
}
