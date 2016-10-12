#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	xmin;
  int	xmax;
  int   ymin;
  int	ymax;
  
  scanf("%d%d%d%d", &xmin, &xmax, &ymin, &ymax);
  if ((ymin >= xmin && ymin <= xmax) || (ymax >= xmin && ymax <= xmax))
    printf("Amis\n");
  else
    printf("Pas amis\n");
  ac = ac;
  av = av;
  return (0);
}
