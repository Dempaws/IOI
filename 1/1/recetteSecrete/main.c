#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  ac = ac;
  av = av;
  remplir(3);
  transferer(3, 5);
  remplir(3);
  transferer(3, 5);
  vider(5);
  transferer(3, 5);
  remplir(3);
  transferer(3, 5);
  return (0);
}
