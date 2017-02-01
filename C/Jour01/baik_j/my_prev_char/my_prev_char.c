/*
** my_prev_char.c for my_prev_char in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 18:15:35 2016 BAIK Jaehyun
** Last update Wed Mar 30 19:54:26 2016 BAIK Jaehyun
*/

char	my_prev_char(char c)
{
  char a;

  if (c >= 'A' && c <= 'z')
    {
      if ((c == 'a') || (c == 'A'))
	{
	  a = c + ('z' - 'A');
	  return (a);
	}
	else
	  {
	    a = c = 1;
	    return (a);
	  }
    }
  else
    {
      return (' ');
    }
}
