#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	xmin1;
  int	xmax1;
  int   ymin1;
  int	ymax1;
  int	xmin2;
  int	xmax2;
  int   ymin2;
  int	ymax2;
  int	input;
  
  scanf("%d", &input);
  while (input--)
    {
      scanf("%d%d%d%d", &xmin1, &xmax1, &ymin1, &ymax1);
      scanf("%d%d%d%d", &xmin2, &xmax2, &ymin2, &ymax2);
      if (xmax2 < xmin1 || xmax1 < xmin2)
	printf("NON\n");
      else if (ymax2 < ymin1 || ymax1 < ymin2)
	printf("NON\n");
      else if (xmin1 > xmin2 && xmax1 < xmax2 && ymin1 > ymin2 && ymax1 < ymax2)
	printf("NON\n");
      else if (xmin2 > xmin1 && xmax2 < xmax1 && ymin2 > ymin1 && ymax2 < ymax1)
	printf("NON\n");
      else
	printf("OUI\n");
    }
  ac = ac;
  av = av;
  return (0);
}
