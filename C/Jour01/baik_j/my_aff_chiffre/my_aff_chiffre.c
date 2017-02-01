/*
** my_aff_chiffre.c for my_aff_chiffre in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 20:06:05 2016 BAIK Jaehyun
** Last update Mon Mar 21 20:10:32 2016 BAIK Jaehyun
*/
void	my_putchar(char c);

void	my_aff_chiffre()
{
  int	i;
  
  for (i = 48; i <= 57; i++)
    {
      my_putchar(i);
    }
}
