/*
** my_strupcase.c for my_strupcase in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 20:35:14 2016 BAIK Jaehyun
** Last update Tue Mar 22 21:15:37 2016 BAIK Jaehyun
*/

char *my_strupcase(char str[])
{
  int	i;

  for (i = 0; str[i] != '\0'; i = i + 1)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  str[i] -= 'a' - 'A';
	}
    }
  return (str);
}

void my_putchar(char c);

void	my_aff_tab(char str[]);

int	main()
{
  char	str[8]={'b','o','n','j','o','u','r','\0'};
  my_aff_tab(my_strupcase(str));
  my_putchar('\n');
  return (0);
}
