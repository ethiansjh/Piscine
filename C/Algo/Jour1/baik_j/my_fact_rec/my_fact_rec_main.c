/*
** my_fact_rec.c for my_fact_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Apr  4 11:16:31 2016 BAIK Jaehyun
** Last update Mon Apr  4 16:24:25 2016 BAIK Jaehyun
*/
#include <stdio.h>
int	my_fact_rec(int nb)
{
  int	res;
  
  if (nb < 0 || nb > 12)
    {
      return (0);
    }
  if (nb <= 1)
    {
      return (1);
    }
  res = nb * my_fact_rec(nb - 1);
  return (res);
}

int	main()
{
  printf("%d\n", my_fact_rec(0));
  printf("%d\n", my_fact_rec(1));
  printf("%d\n", my_fact_rec(2));
  printf("%d\n", my_fact_rec(3));
  printf("%d\n", my_fact_rec(4));
  printf("%d\n", my_fact_rec(5));
  printf("%d\n", my_fact_rec(6));
  printf("%d\n", my_fact_rec(7));
  printf("%d\n", my_fact_rec(8));
  printf("%d\n", my_fact_rec(9));
  printf("%d\n", my_fact_rec(10));
  printf("%d\n", my_fact_rec(11));
  printf("%d\n", my_fact_rec(12));
  printf("%d\n", my_fact_rec(13));
  printf("%d\n", my_fact_rec(14));
  printf("%d\n", my_fact_rec(15));
  
}
