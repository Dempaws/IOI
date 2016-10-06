#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int	main(int ac, char **av)
{
  int i;
  
  i = 0;
  ac = ac;
  av = av;
  gauche();
  gauche();
  printf("Bonjour, laissez-moi vous aider\n");
  ramasser();
  while (i < 32)
    {
      droite();
      i++;
    }
  deposer();
  return (0);
}
