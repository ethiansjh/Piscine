/*
** my_putnbr_base.c for my_putnbr_base in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Apr  5 18:59:58 2016 BAIK Jaehyun
** Last update Wed Apr  6 02:13:25 2016 BAIK Jaehyun
*/
void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

void	my_putnbr_base(int nbr, char *base)
{
  int	size;

  size = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      my_putnbr_base(((-1) * nbr), base);
    }
  if (nbr >= size)
    {
      my_putnbr_base((nbr / size), base);
      my_putchar(base[nbr % size]);
    }
  if (nbr >= 0 && nbr < size)
    {
      my_putchar(base[nbr]);
    }
}
