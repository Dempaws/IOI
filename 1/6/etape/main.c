#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	in2;
  int	max;
  
  scanf("%d", &input);
  max = 0;
  while (input--)
    {
      scanf("%d", &in2);
      if (max < in2)
	max = in2;
    }
  printf("%d\n", max);
  ac = ac;
  av = av;
  return (0);
}
