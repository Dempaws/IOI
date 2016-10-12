#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	nbCity;
  int	input;
  int	in2;
  int	count;
  
  scanf("%d", &input);
  scanf("%d", &nbCity);
  count = 0;
  while (nbCity--)
    {
      scanf("%d", &in2);
      if (input - in2 <= 50 && input - in2 >= -50)
	count++;
    }
  printf("%d\n", count);
  ac = ac;
  av = av;
  return (0);
}
