#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	tempMin;
  int	tempMax;
  
  scanf("%d%d", &tempMin, &tempMax);
  ac = ac;
  av = av;
  while (tempMin <= tempMax)
    printf("%d\n", tempMin++);
  return (0);
}
