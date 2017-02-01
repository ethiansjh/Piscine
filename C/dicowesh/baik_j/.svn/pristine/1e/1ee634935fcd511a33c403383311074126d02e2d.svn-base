/*
** main.c for DicoWESH in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Apr  7 19:20:45 2016 BAIK Jaehyun
** Last update Sat Apr  9 09:43:24 2016 BAIK Jaehyun
*/

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "dico.h"

void	my_putchar(char c);
void	my_putstr(char *str);
char	*my_strcpy(char *dest, char *src);

void	menu()
{
  t_dico	**dico;
  char		*input;

  dico = malloc(sizof(t_dico*));
  *dico = malloc(sizeof(t_dico));
  init(*dico);
  input = "";
  my_putstr("Bienvenue sur le DicoWesh !\n");
  while (my_strcmp(input, "q") != 0)
    {
      my_putstr("a : afficher le dictionnaire sous la forme wesh : fr\n");
      my_putstr("b : afficher le dictionnaire sous la forme fr : wesh\n");
      my_putstr("1 : ajouter une definition\n");
      my_putstr("2 : traduire du wesh au francais\n");
      my_putstr("3 : traduire du francais au wesh");
      input = readline();
        while (my_strcmp(input, "1") != 0 && my_strcmp(input, "2") != 0 && my_strcmp(input, "3") != 0 && my_strcmp(input, "4") != 0 && my_strcmp(input, "5") != 0)
	  {
	    my_putstr("Veuillez entrer un chiffre entre 1 et 5\n");
	    input = readLine();
	  }
	choice(input, dico);
	input = readLine();
    }
}



int	main(int argc, char **argv)
{
  if (argc > 1)
    {
      my_putstr("Argument interdit\n");
    }
  else
    {
      menu();
    }
  argv++;
  return (0);
}
