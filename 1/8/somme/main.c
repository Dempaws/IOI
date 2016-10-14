#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	somme;
  
  input = 0;
  somme = 0;
  while (input != -1)
    {
      scanf("%d", &input);
      if (input != -1)
	somme += input;
    }
  printf("%d\n", somme);
  ac = ac;
  av = av;
  return (0);
}
