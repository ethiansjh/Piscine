/*
** main.c for my_putchar in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 13:55:30 2016 BAIK Jaehyun
** Last update Mon Mar 21 18:52:04 2016 BAIK Jaehyun
*/
char	my_prev_char(char c);

void	my_putchar(char c);

int	main()
{
    my_putchar(my_prev_char('E'));
    my_putchar(my_prev_char('@'));
}
