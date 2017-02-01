/*
** my_strcmp.c for my_strcmp in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 16:47:24 2016 BAIK Jaehyun
** Last update Mon Mar 28 01:50:33 2016 BAIK Jaehyun
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	s3;

  i = 0;
  while ((s1[i] == s2[i]) && (s1 != '\0') && (s2[i] != '\0'))
    {
      i++;
      s3 = (s1[i] - s2[i]);
    }
  if (s3 < 0)
    {
      return (-1);
    }
  else if (s3 > 0)
    {
     return (1);
    }
  else
    {
     return (0);
    }
}
