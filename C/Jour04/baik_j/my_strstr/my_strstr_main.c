/*
** my_strstr.c for my_strstr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Sat Mar 26 10:05:09 2016 BAIK Jaehyun
** Last update Mon Apr  4 19:35:20 2016 BAIK Jaehyun
*/
#include <stdio.h>
void	my_putchar(char c);

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  if (str[i] != '\0')
    {
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str[i])
	    {
	      return (my_strstr(str + 1, to_find));
	    }
	  i++;
	}
      my_putchar(*str);
      my_putchar('\n');
      return (str);
     }
  return ("null");
}

int	main()
{
  char	*str = "123123";
  char	*to_find = "aol";
  
  printf("%s\n", my_strstr(str, to_find));
  
  return (0);
}
