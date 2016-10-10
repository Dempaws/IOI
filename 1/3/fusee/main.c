#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;

  ac = ac;
  av = av;
  i = 100;
  while (i >= 0)
    printf("%d\n", i--);
  printf("Décollage !\n");
  return (0);
}
