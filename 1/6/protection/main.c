#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	in;
  int	inx;
  int	iny;
  int	xmin;
  int	xmax;
  int	ymin;
  int	ymax;
  
  scanf("%d", &in);
  xmin = 1000000;
  xmax = 0;
  ymin = 1000000;
  ymax = 0;
  while (in--)
    {
      scanf("%d%d", &inx, &iny);
      if (xmin > inx)
	xmin = inx;
      if (xmax < inx)
	xmax = inx;
      if (ymin > iny)
	ymin = iny;
      if (ymax < iny)
	ymax = iny;
    }
  printf("%d\n", (xmax - xmin) * 2 + (ymax - ymin) * 2);
  ac = ac;
  av = av;
  return (0);
}
