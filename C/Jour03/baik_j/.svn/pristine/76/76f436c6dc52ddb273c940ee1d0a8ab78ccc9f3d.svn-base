/*
** my_put_revstr.c for my_put_revstr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 16:01:14 2016 BAIK Jaehyun
** Last update Wed Mar 23 20:41:48 2016 BAIK Jaehyun
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

void	my_put_revstr(char *str)
{
  int	i;

  for (i = my_strlen(str) - 1; i >= 0; i--)
    {
      my_putchar(*(str + i));
    }
}
