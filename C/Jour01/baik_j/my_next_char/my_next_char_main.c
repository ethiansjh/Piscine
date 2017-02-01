/*
** my_next_char.c for my_next_char in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 15:59:31 2016 BAIK Jaehyun
** Last update Wed Mar 30 18:13:09 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

char	my_next_char(char c)
{
  char a;
  
  if (c >= 'A'  && c <= 'z')
    {
      if ((c == 'Z') || (c == 'z'))
	{
	  a = c - ('Z' - 'A');
	  return (a);
	}
      else
	{
	  a = c + 1;
	  return (a);
	}
    }
  else
    {
      return (' ');
    }
}

int	main()
{
    my_putchar(my_next_char('z'));
    my_putchar('\n');
    my_putchar(my_next_char('Z'));
    my_putchar('\n');
    my_putchar(my_next_char('a'));
    my_putchar('\n');
    my_putchar(my_next_char('A'));
    my_putchar('\n');
}
