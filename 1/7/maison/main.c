#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	xmin;
  int	xmax;
  int   ymin;
  int	ymax;
  int	inx;
  int	iny;
  int	suspect;
  int	nbHouse;
  
  scanf("%d%d%d%d%d", &xmin, &xmax, &ymin, &ymax, &nbHouse);
  suspect = 0;
  while (nbHouse--)
    {
      scanf("%d%d", &inx, &iny);
      if (inx >= xmin && inx <= xmax && iny >= ymin && iny <= ymax)
	suspect++;
    }
  printf("%d\n", suspect);
  ac = ac;
  av = av;
  return (0);
}
