/*
** my_strcmp.c for my_strcmp in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 16:47:24 2016 BAIK Jaehyun
** Last update Mon Mar 28 01:40:01 2016 BAIK Jaehyun
*/
#include <stdio.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	s3;

  i = 0;
  
  while ((s1[i] == s2[i]) && (s1 != '\0') && (s2[i] != '\0'))
    {
      i++;
      s3 = (s1[i] - s2[i]);
    }
  if (s3 < 0)
    {
      printf("-1");
      return (-1);
    }
  else if (s3 > 0)
    {
      printf("1");
      return (1);
    }
  else
    {
      printf("0");
      return (0);
    }
}

int	main()
{
  char	s1[] = "etna5";
  char	s2[]  = "etna";
  
 my_strcmp(s1, s2);
 printf("\n");  
}
