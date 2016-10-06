#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  ac = ac;
  av = av;
  while (i < 17)
    {
      ramasser();
      droite();
      i++;
    }
  deposer();
  return (0);
}
