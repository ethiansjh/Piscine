/*
** my_aff_tab.c for my_aff_tab in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 09:53:30 2016 BAIK Jaehyun
** Last update Tue Mar 22 11:32:22 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_aff_tab(char str[])
{
  int	i;

  for (i = 0; str[i] != '\0'; ++i)
    {
      my_putchar(str[i]);
    }
}
