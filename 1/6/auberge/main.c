#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	in;
  int	in2;
  int	prix;
  
  scanf("%d", &in);
  scanf("%d", &in2);
  if (in == 60)
    prix = 0;
  else if (in < 10)
    prix = 5;
  else if (in2 >= 20)
    prix = 40;
  else
    prix = 30;
  printf("%d\n", prix);
  ac = ac;
  av = av;
  return (0);
}
