/*
** my_put_nbr.c for my_put_nbr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Fri Mar 25 13:41:44 2016 BAIK Jaehyun
** Last update Fri Mar 25 14:49:05 2016 BAIK Jaehyun
*/

char	my_putchar(char c);

void	my_put_nbr(int n)
{
  if (n < 0)
    {
      my_putchar('-');
      n = -n;
    }
  if (n > 9)
    {
      my_put_nbr(n / 10);
    }
  my_putchar((n % 10) + '0');
}
