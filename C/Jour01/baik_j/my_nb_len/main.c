/*
** main.c for my_nb_len in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 20:46:54 2016 BAIK Jaehyun
** Last update Mon Mar 21 23:37:18 2016 BAIK Jaehyun
*/

void	aff_res(int res);

void	my_putchar(char c);

int	my_nb_len(int n);

int	main()
{
  int	res;

  res = my_nb_len(-542);
  aff_res(res);
  my_putchar('\n');
  res = my_nb_len(-5116);
  aff_res(res);
  my_putchar('\n');
  return (0);
}
