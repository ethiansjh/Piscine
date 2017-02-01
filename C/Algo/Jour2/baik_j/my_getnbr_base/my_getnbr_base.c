/*
** my_getnbr_base.c for my_getnbr_base in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Apr  6 02:16:14 2016 BAIK Jaehyun
** Last update Wed Apr  6 02:57:27 2016 BAIK Jaehyun
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

int	my_getnbr_base(char *str, char *base)
{
  int	size;
  int	i;
  int	nbr;
  int	multi;
  int	sign;

  nbr = 0;
  multi = 1;
  sign = 1;
  if (str[0] == '-')
    {
      sign = sign *  -1;
      str = &str[1];
    }
  size = my_strlen(str) - 1;
  while (size >= 0)
    {
      i = 0;
      while (str [size] != base[i])
	i = i + 1;
      nbr = nbr + i * multi;
      multi = multi * my_strlen(base);
      size--;
    }
  return (nbr * sign);
}

int	main()
{
  my_getnbr_base("100011", "01");
  my_putchar('\n');
  return (0);
}
