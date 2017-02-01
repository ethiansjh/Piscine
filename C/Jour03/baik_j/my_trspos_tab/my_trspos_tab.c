/*
** my_trspos_tab.c for my_trspos_tab in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 17:13:14 2016 BAIK Jaehyun
** Last update Wed Mar 23 22:20:33 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_trspos_tab(int c, int l, int tab[l][c])
{
  int	countl;
  int	countc;

  countl = 0;
  countc = 0;
  while(countc <= c - 1)
    {
      while(countl <= l - 1)
	{
	  my_putchar(tab[countl][countc] + 48);
	  countl = countl + 1;
	}
      countl = 0;
      my_putchar('\n');
      countc = countc + 1;
    }
}
