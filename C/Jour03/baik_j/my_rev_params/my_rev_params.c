/*
** my_rev_params.c for my_rev_params in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 23:03:11 2016 BAIK Jaehyun
** Last update Wed Mar 23 23:11:10 2016 BAIK Jaehyun
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

void	my_rev_params(int nbr, char **arg)
{
  int	i;

  nbr = nbr - 1;
  i = nbr;
  while (i >= 0)
    {
      my_putstr(arg[i]);
      my_putchar('\n');
      i = i - 1;
    }
}
