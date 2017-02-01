/*
** my_strstr.c for my_strstr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Sat Mar 26 10:05:09 2016 BAIK Jaehyun
** Last update Thu Mar 31 20:50:34 2016 BAIK Jaehyun
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  if (str[i] != '\0')
    {
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str[i])
	    {
	      return (my_strstr(str + 1, to_find));
	    }
	  i++;
	}
      return (str);
     }
  return (0);
}
