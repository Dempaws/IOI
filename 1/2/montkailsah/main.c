#include <stdio.h>
#include <stdlib.h>
#include "robot.h"


int	main(int ac, char **av)
{
  int	i;
  int	j;
  
  ac = ac;
  av = av;
  i = 0;
  while (i++ < 108)
    {
      j = 0;
      while (j++ < 13)
	haut();
      j = 0;
      while (j++ < 13)
	droite();
      j = 0;
      while (j++ < 13)
	bas();
      j = 0;
      while (j++ < 13)
	gauche();
    }
  return (0);
}
