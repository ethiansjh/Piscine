/*
** my_strstr.c for my_strstr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Sat Mar 26 10:05:09 2016 BAIK Jaehyun
** Last update Sun Mar 27 18:42:10 2016 BAIK Jaehyun
*/
void	my_putchar(char c);

void	my_putstr(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int   i;
  int   j;
  
  i = 0;
  j = 0;
  while (str[j] != '\0')
    {
      if (to_find[i] == str[j])
	{
	  i++;
	}
      else
	{
	  i = 0;
	}
      if (to_find[i] == '\0')
	{
	  j = j - (i - 1);
	  return (str + j);
	}
      j = j + 1;
    }
  return ("\0");
}
int	main()
{
  char	str[5] = "lolme";
  char	to_find[8] = "aalolmea";
  

  my_strstr(str, to_find);

  return (0);
}
