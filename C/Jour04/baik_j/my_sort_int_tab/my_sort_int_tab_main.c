/*
** my_sort_int_tab.c for my_sort_int_tab in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 10:06:31 2016 BAIK Jaehyun
** Last update Thu Mar 24 18:45:04 2016 BAIK Jaehyun
*/
void	my_putchar(char c);

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	temp;

  i = 0;
  j = 0;
  temp = 0;
  while (i < size)
    {
      while (j < size)
	{
	  if (tab[i] < tab[j])
	    {
	      temp = tab[i];
	      tab[i] = tab[j];
	      tab[j] = temp;
	    }
	  j++;
	}
      j = 0;
      i++;
    }   
}

int	main()
{
  int	tab[] = {1,2,3,4,-5,-1231231233,0,-1,-2,3,3,3,3,3,1,1,1,1,0,1,3,2};
  my_sort_int_tab(tab, 22);
  
  
  return (0);
}
