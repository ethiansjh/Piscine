/*
** my_str_to_wordtab.c for my_str_to_wordtab in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 28 15:45:30 2016 BAIK Jaehyun
** Last update Thu Mar 31 18:55:38 2016 BAIK Jaehyun
*/

#include <stdio.h>
#include <stdlib.h>

int	my_strlen(char *str);

int size_word(char *str, int i)
{
  int size;

  size = 0;
  while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
    {
      size++;
      i++;
    }
  // printf("%d", size);
  return (size);
}

int count_word(char *str)
{
  int i;
  int word;

  word = 0;
  for (i = 0; i < my_strlen(str); i++)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
	{
	  word++;
	  while (i < my_strlen(str) && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')))
	    i++;
	}
    }
  printf("%d", word);
  return (word);
}

char **my_str_to_wordtab(char *str)
{
  char **tab;
  int i;
  int a;
  int b;
  int size;

  a = 0;
  tab = malloc(count_word(str) * sizeof(*tab) + 1);
  for (i = 0; str[i]; i++)
    {
      if ((size = size_word(str, i)))
	tab[a] = malloc(size_word(str, i) * sizeof(**tab) + 1);
      for (b =  0; str[i] && b < size; b++, i++)
	tab[a][b] = str[i];
      if (size)
	{
	  tab[a][b] = '\0';
	  a++;
	  i--;
	}
    }
  tab[a] = 0;
  return (tab);
}
int	main()
{
  char *str = "%%%%%bonjour####ca   va$$@#????";

  int i;
  char **tab = my_str_to_wordtab(str);
  i = 0;
  while (tab[i] != '\0')
    {
      printf("%s\n", tab[i]);
      i++;
    }
  return (0);
}
