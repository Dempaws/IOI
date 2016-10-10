#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	base;
  int	baseFin;
  int	nb;

  nb = 0;
  scanf("%d%d", &base, &baseFin);
  while (base >= baseFin)
    {
      nb += base * base;
      base--;
    }
  printf("%d\n", nb);
  ac = ac;
  av = av;
  return (0);
}
