#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  int	i;
  int	j;

  i = 0;
  while (i++ < 10)
    {
      j = 0;
      while (j++ < i)
	droite();
      ramasser();
      while (j-- > 1)
	gauche();
      deposer();
    }
  ac = ac;
  av = av;
  return (0);
}
  
