/*
** readline.c for dicowesh in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Fri Apr  8 17:32:38 2016 BAIK Jaehyun
** Last update Sat Apr  9 09:28:12 2016 BAIK Jaehyun
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char	*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    {
      return (NULL);
    }
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
