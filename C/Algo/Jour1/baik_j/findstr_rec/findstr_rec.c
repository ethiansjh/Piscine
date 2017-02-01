/*
** findstr_rec.c for findstr_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Apr  5 00:24:04 2016 BAIK Jaehyun
** Last update Tue Apr  5 08:54:58 2016 BAIK Jaehyun
*/

int	findstr_rec(char* str, char* to_find)
{
  if (*str != *to_find)
    {
      if (*str == '\0')
	{
	  return (0);
	}
      return (findstr_rec(str+1, to_find));
    }
  else
    {
      if (to_find == '\0')
	{
	  return (1);
	}
      return (findstr_rec(str + 1, to_find + 1));
    }
}
