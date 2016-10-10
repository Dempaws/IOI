#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	weight;
  int	length;
  int	width;
  
  scanf("%d", &i);
  while (i--)
    {
      scanf("%d%d%d%d", &weight, &ac, &length, &width);
      printf("%d\n", weight + length * width);
    }
  av = av;
  return (0);
}
