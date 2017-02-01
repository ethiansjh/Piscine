/*
** my_strlen.c for my_strlen in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 11:54:22 2016 BAIK Jaehyun
** Last update Wed Mar 23 12:53:59 2016 BAIK Jaehyun
*/
#include <stdio.h>
#include <string.h>

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  printf("%d", i);
  return (i);
}

int	main()
{
  my_strlen("Hello World");
  return (0);
}
