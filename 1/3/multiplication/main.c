#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	j;
  
  i = 0;
  while (i++ < 20)
    {
      j = 0;
      while (j ++ < 19)
	printf("%d ", i * j);
      printf("%d\n", i * j);
    }
  ac = ac;
  av = av;
  return (0);
}
