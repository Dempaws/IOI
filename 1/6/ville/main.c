#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	nbCity;
  int	input;
  int	in2;
  
  nbCity = 0;
  scanf("%d", &input);
  while (input--)
    {
      scanf("%d", &in2);
      if (in2 > 10000)
	nbCity++;
    }
  printf("%d\n", nbCity);
  ac = ac;
  av = av;
  return (0);
}
