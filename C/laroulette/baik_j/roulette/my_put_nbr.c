/*
** my_put_nbr.c for my_put_nbr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Fri Mar 25 11:35:19 2016 BAIK Jaehyun
** Last update Fri Mar 25 11:39:03 2016 BAIK Jaehyun
*/

char	my_putchar(char c);

void	my_put_nbr(int nb)
{
  int	mod;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  mod = (nb % 10);
          nb = (nb - mod) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + mod);
        }
      else
        my_putchar(48 + nb % 10);
    }
}
