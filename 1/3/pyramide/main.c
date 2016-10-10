#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	nbCube;
  
  i = 17;
  nbCube = 0;
  while (i > 0)
    {
      nbCube += i * i * i;
      i = i - 2;
    }
  printf("%d\n", nbCube);
  ac = ac;
  av = av;
  return (0);
}
