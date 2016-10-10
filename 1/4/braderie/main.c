#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	start;
  int	lenght;
  int	nb;
  int	i;

  i = 0;
  scanf("%d%d%d", &start, &lenght, &nb);
  start -= lenght;
  while (i++ <= nb)
    printf("%d\n", start += lenght);
  ac = ac;
  av = av;
  return (0);
}
