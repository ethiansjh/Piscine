/*
** main.c for my_aff_tab in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 09:53:22 2016 BAIK Jaehyun
** Last update Tue Mar 22 10:00:39 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_aff_tab(char str[]);

int	main()
{
  char str[10] = "bOnjour ;";
  my_aff_tab(str);
  my_putchar('\n');
  return (0);
}
