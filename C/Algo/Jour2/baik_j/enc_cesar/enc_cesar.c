/*
** enc_cesar.c for enc_cesar in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Apr  5 09:10:49 2016 BAIK Jaehyun
** Last update Tue Apr  5 18:43:47 2016 BAIK Jaehyun
*/

char	my_putchar(char c);

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

void	enc_cesar(char *str, int n)
{
  int	i;
  int	size;

  size = my_strlen(str);

  for (i = 0; i != size; ++i)
    {
      if (*(str + i) >= 'A' && *(str + i) <= 'Z')
	{
	  my_putchar((*(str + i) - 'A' + n) % 26 + 'A');
        }
      else if (*(str + i) >= 'a' && *(str + i) <= 'z')
	{
	  my_putchar((*(str + i) - 'a' + n) % 26 + 'a');
	}
      else 
	{
	  my_putchar(*(str + i));
	}
    }
}
