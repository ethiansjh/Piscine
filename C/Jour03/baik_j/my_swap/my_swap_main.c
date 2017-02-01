/*
** my_swap.c for my_swap in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 15:04:20 2016 BAIK Jaehyun
** Last update Wed Apr  6 22:54:54 2016 BAIK Jaehyun
*/
#include <stdio.h>
void	my_swap(int *a, int *b)
{
  int	swap;

  swap = *b;
  *b = *a;
  *a = swap;

  printf("%d\n", *a);
  printf("%d\n", *b);
}

int	main()
{
  my_swap(1, 2);
}
