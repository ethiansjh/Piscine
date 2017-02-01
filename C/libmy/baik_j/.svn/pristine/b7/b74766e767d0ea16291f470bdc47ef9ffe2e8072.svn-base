/*
** my_strncmp.c for my_strncmp in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 19:04:48 2016 BAIK Jaehyun
** Last update Tue Apr  5 13:27:57 2016 BAIK Jaehyun
*/

int	my_tablen(char tab[])
{
  int	i;
  int	size;

  for (i = 0; tab[i] != '\0'; i++)
    {
      size = size + 1;
    }
  return (size);
}

int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  int	size1;
  int	size2;

  size1 = my_tablen(s1);
  size2 = my_tablen(s2);

   for (i = 0; s1[i] != '\0' || s2[i] != '\0' || i == n; i + 1)
     {
       if (s1[i] > s2[i])
         {
           return (-1);
         }
       else if (s1[i] < s2[i])
         {
           return (1);
         }
     }
   return (0);
}
