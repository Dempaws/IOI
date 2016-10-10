#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	somme;
  
  i = 0;
  somme = 0;
  while (i++ < 20)
    {
      scanf("%d", &ac);
      somme += ac;
    }
  printf("%d\n", somme);
  av = av;
  return (0);
}
