/*
** my_palindrome_rec.c for my_palindrome_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Apr  4 13:22:37 2016 BAIK Jaehyun
** Last update Mon Apr  4 23:55:16 2016 BAIK Jaehyun
*/
#include <stdio.h>
int	palindrome_rec(char *str, int debut, int fin)
{
  if (str[debut] == str[fin])
    {
      if (fin == 0)
	{
	  printf("4%c\n", str[debut]);
	  printf("4%c\n", str[fin]);
	  return (1);
	}
      else
	{
	  printf("1%c\n", str[debut]);
	  printf("2%c\n", str[fin]);
	  return (palindrome_rec(str, debut + 1, fin - 1));
	}
    }
  else if (str[debut] == 32)
    {
      return (palindrome_rec(str, debut + 1, fin));
    }
  else if (str[fin] == 32)
    {
      return (palindrome_rec(str, debut, fin - 1));
    }
  else
    {
        printf("1%c\n", str[debut]);
	  printf("2%c\n", str[fin]);
      return (0);
    }
}

int	main()
{
  printf("%d\n", palindrome_rec("R OR", 0, 3));
  printf("%d\n", palindrome_rec("LOL", 0, 2));
  printf("%d\n", palindrome_rec("H OH", 0, 3));
  printf("%d\n", palindrome_rec("FU F", 0, 2));
  printf("%d\n", palindrome_rec("L e s", 0, 2));
  //return (0);
}
