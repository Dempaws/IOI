#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	nb;
  int	i;

  nb = 66;
  i = 0;
  scanf("%d", &input);
  while (i < input)
    printf("%d\n", nb *= 1 + i++);
  ac = ac;
  av = av;
  return (0);
}
