/*
** my_tablen.c for my_tablen in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 14:26:58 2016 BAIK Jaehyun
** Last update Tue Mar 22 16:25:09 2016 BAIK Jaehyun
*/

int	my_tablen(char tab[])
{
  int	i;

  i = 0;
  while (tab[i] > '\0')
    {
      i++;
    }    
  return (i);
}
