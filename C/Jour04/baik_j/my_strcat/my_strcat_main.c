/*
** my_strcat.c for my_strcat in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 21:11:12 2016 BAIK Jaehyun
** Last update Thu Mar 24 22:12:50 2016 BAIK Jaehyun
*/
#include <stdio.h>
char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	n;

  i = 0;
  while (str1[i] != '\0')
    {     
      i++;
    }
  n = 0;
  while (str2[n] != '\0')
    {
      str1[i] = str2[n];
      i++;
      n++;
    }
  return (str1);
}

int	main()
{
  char	str1[10] = "ETNA";
  char	str2[1] ="1";
  
  my_strcat(str1, str2);
  printf("%s\n", str1);
  return (0);
}
