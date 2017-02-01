/*
** my_aff_comb.c for my_aff_comb in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 23:31:32 2016 BAIK Jaehyun
** Last update Mon Mar 21 23:35:05 2016 BAIK Jaehyun
*/
#include <unistd.h>

void	my_aff_comb(void)
{
  int	numb1;
  int	numb2;
  int	numb3;
  char	cara1;
  char	cara2;
  char	cara3;
  int	count1;
  int	count2;
  int	count3;

  numb1 = 0;
  numb2 = 0;
  numb3 = 0;
  for (count1 = 0; count1 < 10; count1++)
    {
      for (count2 = 0; count2 < 10; count2++)
	{
	  for (count3 = 0; count3 < 10; count3++)
	    {
	      cara1 = (char)numb1 + '0';
	      cara2 = (char)numb2 + '0';
	      cara3 = (char)numb3 + '0';
	      if(numb1 != numb2 && numb1 != numb3 && numb3 != numb2)
		if(numb3>numb2 && numb2 > numb1 && numb3 > numb1)
		  {
		  write(1, &cara1, 1);
		  write(1, &cara2, 1);
		  write(1, &cara3, 1);
		  write(1, ", ", 2);
		  } 
	      numb3 = numb3 + 1;
	    }
	  numb3 = 0;
	  numb2 = numb2 + 1;
	}
      numb2 = 0;
      numb1 = numb1 + 1;
    }
  write(1, "\n", 1);
}
