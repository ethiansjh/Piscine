/*
** my_strlowcase.c for my_strlowcase in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 21:00:43 2016 BAIK Jaehyun
** Last update Tue Mar 22 21:18:33 2016 BAIK Jaehyun
*/

char	*my_strlowcase(char str[])
{
  int	i;

  for (i = 0; str[i] != '\0'; i = i + 1)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  str[i] = str[i] + 32;
	}
    }
  return (str);
}

void my_putchar(char c);

void	my_aff_tab(char str[]);

int	main()
{
  char	str[8]={'B','O','N','J','O','U','R','\0'};
  my_aff_tab(my_strlowcase(str));
  my_putchar('\n');
  return (0);
}
      
