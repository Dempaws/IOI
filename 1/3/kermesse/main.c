#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	nbCandy;
  
  ac = ac;
  av = av;
  i = 1;
  nbCandy = 0;
  while (i <= 50)
    printf("%d\n", nbCandy += (i++));
  return (0);
}
