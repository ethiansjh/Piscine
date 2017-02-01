/*
** my_aff_tab_num.c for my_aff_tab_num in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 10:29:39 2016 BAIK Jaehyun
** Last update Tue Mar 22 20:14:12 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_aff_tab_num(int tab[], int size)
{
  int	i;

  for (i = 0; i != size; i = i + 1)
    {
      my_putchar(tab[i] + '0');
      my_putchar('\n');
    }
}
