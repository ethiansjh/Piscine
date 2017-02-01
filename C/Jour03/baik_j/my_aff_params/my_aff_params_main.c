/*
** my_aff_params.c for my_aff_params in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 22:25:21 2016 BAIK Jaehyun
** Last update Mon Mar 28 13:34:00 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  for (i = 0; *(str + i) != '\0'; i = i + 1)
    {
      my_putchar(*(str + i));
    }
}

void	my_aff_params(int nbr, char **arg)
{
  int	i;

  i = 0;  
  while (i < nbr)
    {
      my_putstr(*(arg + i));
      my_putchar('\n');
      i = i + 1;
    }
}

int	main(int argc, char **argv)
{

  my_aff_params(argc, argv);
  return (0);
}
