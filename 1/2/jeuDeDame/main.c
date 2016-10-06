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
	printf("0X");
      printf("\n");
    }
  return (0);
}
