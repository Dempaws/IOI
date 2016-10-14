#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	nbStone;
  int	height;
  int	fact;
  
  scanf("%d", &height);
  fact = 1;
  nbStone = 0;
  while (nbStone <= height)
    {
      if (nbStone + fact * fact > height)
	printf("%d\n%d\n", fact - 1, nbStone);
      nbStone += fact * fact;
      fact++;
    }
  ac = ac;
  av = av;
  return (0);
}
