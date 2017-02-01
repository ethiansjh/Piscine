/*
** my_getnbr.c for my_getnbr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Fri Mar 25 15:03:45 2016 BAIK Jaehyun
** Last update Sat Mar 26 11:11:13 2016 BAIK Jaehyun
*/

int     my_getnbr(char *str)
{
  int	pos;
  int	sign;
  int	nbr;

  sign = 1;
  pos = 0;
  while (str[pos] != '\0' && (str[pos] == '+' || str[pos] == '-'))
    {
      if (str[pos] == '-')
	{
	  sign = sign * - 1;
	}
      pos = pos + 1;
    }
  str = str + pos;
  nbr = 0;
  pos = 0;
  while (str[pos] >= '0' && str[pos] <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr - (str[pos] - '0');
      pos = pos + 1;
    }
  return (nbr * sign * - 1);
}
