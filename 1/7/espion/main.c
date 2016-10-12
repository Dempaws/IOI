#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	in2;
  int	in3;
  int	in4;
  int	suspect;
  
  scanf("%d", &input);
  scanf("%d", &in2);
  scanf("%d", &in3);
  suspect = 0;
  while (in3--)
    {
      scanf("%d", &in4);
      if (in4 >= input && in4 <= in2)
	suspect++;
    }
  printf("%d\n", suspect);
  ac = ac;
  av = av;
  return (0);
}
