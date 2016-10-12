#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	in2;
  int	pos;
  int	min;
  int	i;
  
  scanf("%d", &input);
  min = 1000000;
  i = 0;
  while (input--)
    {
      scanf("%d", &in2);
      i++;
      if (min >= in2)
	{
	  min = in2;
	  pos = i;
	}
    }
  printf("%d\n", pos);
  ac = ac;
  av = av;
  return (0);
}
