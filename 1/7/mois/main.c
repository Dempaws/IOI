#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	nbmois;
  
  scanf("%d", &input);
  if ((input >= 1 && input <= 3) || (input >= 7 && input <= 9))
    nbmois = 30;
  else if (input == 11)
    nbmois = 29;
  else
    nbmois = 31;
  printf("%d\n", nbmois);
  ac = ac;
  av = av;
  return (0);
}
