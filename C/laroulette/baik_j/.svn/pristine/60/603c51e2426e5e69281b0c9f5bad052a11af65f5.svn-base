/*
  Cette fonction permet de recuper une ligne
  de moins de 50 caracteres sur l'entree standard.
  La fonction ne prend pas de parametre et renvoi une chaine
  allou챕e.
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str);

char	*my_strcpy(char *dest, char *src);

char		*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}

int	main()
{
  char	entree[50];
  char	src = readline();

  my_strcpy(entree, readline());
  my_putstr(entree);

  return (0);
}
