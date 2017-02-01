/*
** my_putstr.c for my_putstr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 10:51:20 2016 BAIK Jaehyun
** Last update Wed Mar 23 14:54:13 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  for (i = 0; *(str + i) != '\0'; i = i + 1)
    {
      my_putchar(*(str + i));
    }
}
