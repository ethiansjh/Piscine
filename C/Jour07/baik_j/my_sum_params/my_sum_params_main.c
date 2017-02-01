/*
** my_sum_params.c for my_sum_params in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 28 21:32:49 2016 BAIK Jaehyun
** Last update Mon Mar 28 22:48:29 2016 BAIK Jaehyun
*/
#include <stdio.h>
#include <stdlib.h>

char	my_strcat(char *str1, char *str2);

int	my_strlen(char *str);

char	*my_sum_params(int argc, char **argv)
{
  int	i;
  int	size;
  char	*cpy;

  for (i = 0; i < argc; i++)
    {
      size = size + my_strlen(argv[i] + 1);
      i++;
    }
  cpy = malloc(size * sizeof(char));
  for (i = 0; i < argc; i++)
    {
      my_strcat(cpy, argv[i]);
      my_strcat(cpy, "\n");
    }
  printf("%s", cpy);
  return (cpy);
  
}

int	main(int argc, char **argv)
{
  my_sum_params(argc, argv);
  return (0);
}
