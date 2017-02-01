/*
** my_palindrome_rec.c for my_palindrome_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Apr  4 13:22:37 2016 BAIK Jaehyun
** Last update Mon Apr  4 23:57:23 2016 BAIK Jaehyun
*/

int	palindrome_rec(char *str, int debut, int fin)
{
  if (str[debut] == str[fin])
    {
      if (fin == 0)
	{
	  return (1);
	}
      else
	{
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
      return (0);
    }
}

