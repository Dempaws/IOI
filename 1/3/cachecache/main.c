#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;

  ac = ac;
  av = av;
  i = 1;
  while (i <= 100)
    printf("%d\n", i++);
  printf("J'arrive !");
  return (0);
}
