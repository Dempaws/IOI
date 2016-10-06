#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  ac = ac;
  av = av;
  deplacer(1, 2);
  deplacer(1, 3);
  deplacer(2, 3);
  deplacer(1, 2);
  deplacer(3, 1);
  deplacer(3, 2);
  deplacer(1, 2);
  deplacer(1, 3);
  deplacer(2, 3);
  deplacer(2, 1);
  deplacer(3, 1);
  deplacer(2, 3);
  deplacer(1, 2);
  deplacer(1, 3);
  deplacer(2, 3);
  return (0);
}
