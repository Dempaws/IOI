#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input1;

  scanf("%d", &input1);
  input1 *= 5;
  if (input1 > 53)
    input1 = 53;
  printf("%d\n", input1);
  ac = ac;
  av = av;
  return (0);
}
