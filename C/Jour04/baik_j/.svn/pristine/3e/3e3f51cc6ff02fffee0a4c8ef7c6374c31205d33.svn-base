/*
** my_strncmp.c for my_strncmp in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 19:04:48 2016 BAIK Jaehyun
** Last update Sun Mar 27 21:40:38 2016 BAIK Jaehyun
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] != '\0')
    {
      while (s2[i]!= '\0')
	{
	  if (n == 0)
	    {
	      return ('\0');
	    }
	  while (i < n)
	    {
	      if (s1[i] > s2[i])
		{
		  return (1);
		}
	      else if (s1[i] < s2[i])
		{
		  return (-1);
		}
	      i++;
	    }
	  return (0);
	}
    }
  return ('\0');
}
