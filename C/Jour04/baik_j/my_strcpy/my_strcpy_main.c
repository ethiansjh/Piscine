/*
 ** my_strcpy.c for my_strcpy in
 **
 ** Made by BAIK Jaehyun
 ** Login   <baik_j@etna-alternance.net>
 **
 ** Started on  Thu Mar 24 12:08:53 2016 BAIK Jaehyun
** Last update Thu Mar 24 14:31:38 2016 BAIK Jaehyun
 */
#include <stdio.h>

char	*my_strcpy(char *dest, char *src)
{
    int	i;
    
    i = 0;
    while ((*(src + i)) != '\0')
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = '\0';
    return (dest);
}

int	main()
{
    char	src[4] = "etna";
    char	dest[5] = "etnia";
    my_strcpy(dest, src);
    printf("%s\n", dest);
    return (0);
}
