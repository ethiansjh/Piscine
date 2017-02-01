/*
** my_put_nbr.c for my_put_nbr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Fri Mar 25 13:41:44 2016 BAIK Jaehyun
** Last update Wed Mar 30 18:00:14 2016 BAIK Jaehyun
*/

char	my_putchar(char c);

void	my_put_nbr(int n)
{
  int i;

  i = 0;
  if (n < 0)
    {
      my_putchar('-');
      if (n == -2147483648)
	{
	  i = 1;
	  n++;
	}
      n = n * -1;
    }
  if (n >= 10)
    {
      my_put_nbr(n / 10);
    }
  if (i == 1)
    {
      i = 0;
      my_putchar((n % 10) + '1');
    }
  my_putchar((n % 10) + '0');    
}
