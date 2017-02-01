/*
** my_putchar.c for my_putchar_main in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 13:59:33 2016 BAIK Jaehyun
** Last update Mon Mar 21 15:41:21 2016 BAIK Jaehyun
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
