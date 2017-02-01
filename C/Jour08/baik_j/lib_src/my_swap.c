/*
** my_swap.c for my_swap in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 15:04:20 2016 BAIK Jaehyun
** Last update Wed Mar 23 15:45:03 2016 BAIK Jaehyun
*/

void	my_swap(int *a, int *b)
{
  int	swap;

  swap = *b;
  *b = *a;
  *a = swap;
}
