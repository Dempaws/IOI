#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	in2;
  int	up;
  int	down;
  
  scanf("%d", &input);
  up = 0;
  down = 0;
  while (input--)
    {
      scanf("%d", &in2);
      if (in2 > 0)
	up += in2;
      else
	down += in2;
    }
  printf("%d\n%d\n", up, -down);
  ac = ac;
  av = av;
  return (0);
}
