/*
** my_strchr.c for my_strchr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Mar 23 11:25:38 2016 BAIK Jaehyun
** Last update Wed Mar 23 14:54:48 2016 BAIK Jaehyun
*/

void	my_putstr(char *str);

void	my_putchar(char c);

char*	my_strchr(char *str, int c)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      i = i + 1;
      if (*(str + i) == c)
	{
	  return ((str + i));
	}
    }
  return ("\0");
}

int	main()
{
  my_putstr(my_strchr("Hello World", 'o'));
  my_putchar('\n');
  my_putstr(my_strchr("plopz zworld world", 'z'));
  my_putchar('\n');
  return (0);
}
