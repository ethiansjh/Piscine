/*
** my_str_to_wordtab.c for my_str_to_wordtab in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 28 15:45:30 2016 BAIK Jaehyun
** Last update Thu Mar 31 11:59:58 2016 BAIK Jaehyun
*/

#include <stdio.h>
#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strdup(char *str);
char	*my_strcpy(char *dest, char *src);

int	word_count(char *str)
{
  int	i;
  int	word;

  i = 0;
  word = 0;
  while (str[i] != '\0')
    {
      while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
      {
        word++;
	  while (str[i] && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
	    {
	      i++;
	      word++;
	    }
      }
      i++;
    }
  return (word);
}

int	char_count(char *str, int *i)
{
  int	ch;

  ch = 0;
  while ((str[*i] !='\0') && ((str[*i] >= 'a' && str[*i] <= 'z') || (str[*i] >= 'A' && str[*i] <= 'Z') || (str[*i] >= '0' && str[*i] <= '9')))
    {
      ch++;
      *i = *i + 1;
    }
  //printf("%d\n", ch);
  //printf("char\n");
  return (ch);
}

char	**my_str_to_wordtab(char *str)
{
  int	n;
  int	g;
  int	words;
  char	**tab;
  
  n = 0;
  g = 0;
  words = word_count(my_strdup(str));
  tab = malloc(sizeof(*tab) * ((word_count(str) + 1)));
  while (str[n] && words > 0)
    {
      if ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z') || (str[n] >= '0' && str[n] <= '9'))
	{
	  tab[g] = my_strdup(str + n);
	  // printf("%s\n", tab[g]);
	  tab[g][char_count(str, &n)] = '\0';
	  //printf("%s\n", tab[g]);
	  g++;
	  words = words - 1;
	}
      printf("%s", tab[g]);
     
      n++;
    }
  tab[g + 1] = 0;
return (tab);
}

int	main()
{
  char *str = "Bonjour, comment ca va toi????";

  printf("%s", *my_str_to_wordtab(str));
  return (0);
}
