/*
** my_fibo_rec.c for my_fibo_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Apr  4 12:45:20 2016 BAIK Jaehyun
** Last update Mon Apr  4 21:13:45 2016 BAIK Jaehyun
*/
#include <stdio.h>
int	my_fibo_rec(int nb)
{
  if (nb < 0 || nb > 46 || nb == 0)
    {
      return (0);
    }
  else if (nb == 1)
    {
      return (1);
    }
  else
    {
      return (my_fibo_rec(nb - 1) + my_fibo_rec(nb - 2));
    }
}

int	main()
{
  int	i;
  int	res;

  for (i = -10; i < 50; i++)
    {
      printf("My Fibo %d : ", i);
      res = my_fibo_rec(i);
      printf("%d\n", res);
    }
  return (0);
}
