/*
** my_soft_params.c for my_soft_params in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 22:45:17 2016 BAIK Jaehyun
** Last update Mon Mar 28 23:20:50 2016 BAIK Jaehyun
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

void	my_sort_params(int nb, char **arg)
{
  int	i;
  int	j;

  i = 0;
  while (i != '\0')
    {
      my_putstr(arg[i]);
      i++;
    }

  j = 0;
  while (
  
}

int	main(int argc, char *argv[])
{
  int	argc = 5;
  my_soft_params(5, argv);
}
