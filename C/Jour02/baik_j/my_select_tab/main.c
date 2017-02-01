/*
** main.c for my_select_tab in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 12:19:00 2016 BAIK Jaehyun
** Last update Tue Mar 22 14:08:08 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

char	my_select_tab(char tab[4][14], int i, int j);

int	main()
{
  char tab[4][14] = {"1","2","3","4"};
  
  my_putchar(my_select_tab(tab, 4, 14));
  my_putchar('\n');
  return (0);
}
