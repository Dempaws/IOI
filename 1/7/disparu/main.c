#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	in1;
  int	in2;
  int	in3;
  int	ishere;

  ishere = 0;
  scanf("%d%d", &in1, &in2);
  while (in2--)
    {
      scanf("%d", &in3);
      if (in3 == in1)
	ishere = 1;
    }
  if (ishere)
    printf("Sorti de la ville\n");
  else
    printf("Encore dans la ville\n");
  ac = ac;
  av = av;
  return (0);
}
