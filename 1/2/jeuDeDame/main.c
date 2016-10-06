#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	j;

  ac = ac;
  av = av;
  i = 0;
  while (i++ < 40)
    {
      j = 0;
      while (j++ < 20)
	if (i % 2)
	  printf("0X");
	else
	  printf("XO");
      printf("\n");
    }
  return (0);
}
