/*
** my_strncat.c for my_strncat in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 22:16:57 2016 BAIK Jaehyun
** Last update Thu Mar 24 22:41:53 2016 BAIK Jaehyun
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	j;

  i = 0;
  while (str1[i] != '\0')
    {
      i++;
    }

  j = 0;
  while (j < n && str2[j] != '\0')
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  return (str1);
}
