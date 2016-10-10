#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	nbFrog;
  
  ac = ac;
  av = av;
  i = 0;
  nbFrog = 1337;
  while (i++ < 12)
    nbFrog *= 2;
  printf("%d\n", nbFrog);
  return (0);
}
