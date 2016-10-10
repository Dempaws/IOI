#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input1;
  int	input2;

  scanf("%d%d", &input1, &input2);
  if (input1 * input2 > 105)
    printf("Surcharge !\n");
  ac = ac;
  av = av;
  return (0);
}
