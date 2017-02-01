/*
** my_strcat.c for my_strcat in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 21:11:12 2016 BAIK Jaehyun
** Last update Thu Mar 24 22:14:06 2016 BAIK Jaehyun
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	n;

  i = 0;
  while (str1[i] != '\0')
    {     
      i++;
    }
  
  n = 0;
  while (str2[n] != '\0')
    {
      str1[i] = str2[n];
      i++;
      n++;
    }
  return (str1);
}
