#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  ac = ac;
  av = av;
  while (i < 21)
    {
      haut();
      droite();
      i++;
    }
  while (i > 0)
    {
      gauche();
      bas();
      i--;
    }
  return (0);
}
