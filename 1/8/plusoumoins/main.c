#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	mystery;
  int	try;
  
  scanf("%d", &mystery);
  input = mystery + 1;
  try = 0;
  while (input != mystery)
    {
      try++;
      scanf("%d", &input);
      if (input < mystery)
	printf("c'est plus\n");
      else if (input > mystery)
	printf("c'est moins\n");
      else
	printf("Nombre d'essais nécessaires :\n%d\n", try);
    }
  ac = ac;
  av = av;
  return (0);
}
