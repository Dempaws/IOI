#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;

  i = 5 * 17 + 7 * 2 + 5 + 2 * 2;
  ac = ac;
  av = av;

  printf("%d\n", i * i);
  printf("%d\n", i * 2);
  return (0);
}
