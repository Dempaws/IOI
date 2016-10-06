#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  int	i;
  int   j;
  
  i = 0;
  ac = ac;
  av = av;
  while (i++ < 10)
    {
      j = 0;
      while (j++ < 10)
	{
	  if (i%2)
	    droite();
	  else
	    gauche();
	}
      haut();
    }
  return (0);
}
