#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input1;

  scanf("%d", &input1);
  if (input1 == 64741)
    printf("Bon festin !\n");
  else
    printf("Allez-vous en !\n");
  ac = ac;
  av = av;
  return (0);
}
