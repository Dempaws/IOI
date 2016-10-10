#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input1;
  int	input2;

  scanf("%d%d", &input1, &input2);
  if (input1 - input2 > 10 || input2 - input1 > 10)
    {
      if (input1 > input2)
	printf("La famille Arignon a un champ trop grand\n");
      else
	printf("La famille Evaran a un champ trop grand\n");
    }
  ac = ac;
  av = av;
  return (0);
}
