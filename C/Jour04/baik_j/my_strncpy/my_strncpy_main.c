/*
** my_strncpy.c for my_strncpy in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 14:39:16 2016 BAIK Jaehyun
** Last update Thu Mar 24 16:37:59 2016 BAIK Jaehyun
*/
#include <stdio.h>

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  for (i = 0; i < n; i = i + 1)
    {
     
      if (*(src + i) == '\0')
	{
	  *(dest + i) = '\0';
	}
       *(dest + i) = *(src + i);
    }
  return (dest);
}

int	main()
{
  char	dest[3] = "ABC";
  char	src[3] = "abc";
  
  my_strncpy(dest, src, 3);
  printf("%s\n", dest);
  return (0);
}
