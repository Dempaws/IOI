#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	in2;
  int	max;
  int	current;
  
  scanf("%d", &input);
  input *= 2;
  max = 0;
  current = 0;
  while (input--)
    {
      scanf("%d", &in2);
      if (in2 > 0)
	current++;
      else
	current --;
      if (max < current)
	max = current;
    }
  printf("%d\n", max);
  ac = ac;
  av = av;
  return (0);
}
