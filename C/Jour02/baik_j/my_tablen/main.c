/*
** main.c for my_tablen in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 14:27:35 2016 BAIK Jaehyun
** Last update Tue Mar 22 16:16:05 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

int	my_tablen(char tab[]);

int	main()
{
  char	tab[5] = {'1','2','3','4'};
  my_putchar(my_tablen(tab)+'0');
  my_putchar('\n');
}
