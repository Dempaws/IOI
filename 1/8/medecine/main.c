#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	nbSick;
  int	j;
  
  scanf("%d", &input);
  j = 1;
  nbSick = 1;
  while (nbSick < input)
    {
      nbSick = nbSick + nbSick * 2;
      j++;
    }
  printf("%d\n", j);
  ac = ac;
  av = av;
  return (0);
}
