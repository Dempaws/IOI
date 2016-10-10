#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input1;
  int	input2;

  scanf("%d%d", &input1, &input2);
  if (input1 + input2 >= 10)
    printf("Taxe spéciale !\n36\n");
  else
    printf("Taxe régulière\n%d\n", (input2 + input1) * 2);
  ac = ac;
  av = av;
  return (0);
}
