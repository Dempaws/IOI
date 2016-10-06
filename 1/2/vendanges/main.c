#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  int i;
  int j;

  j = 0;
  ac = ac;
  av = av;
  ramasser();
  while (j++ < 20)
    {
      i = 0;
      while (i++ < 15)
	droite();
      deposer();
      while (i-- > 0)
	gauche();
    }
  return (0);
}
  
