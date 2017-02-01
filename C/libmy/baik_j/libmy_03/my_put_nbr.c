/*
** my_put_nbr.c for my_put_nbr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Fri Mar 25 13:41:44 2016 BAIK Jaehyun
** Last update Mon Apr  4 19:20:07 2016 BAIK Jaehyun
*/

char	my_putchar(char c);
void	my_putstr(char *str);

void	my_put_nbr(int n)
{
 char	*limit_value;

 limit_value = "-2147483648";
 
 if (n < 0 && n != -2147483648)
   {
     my_putchar('-');
     n = (-n);
   }
 if (n > 9)
   {
     my_put_nbr(n / 10);
   }
 if (n == -2147483648)
   {
     my_putstr(limit_value);
   }
 else
   {
     my_putchar(n % 10 + '0');
   }
}
