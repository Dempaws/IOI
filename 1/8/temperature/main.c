#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	tempmax;
  int	tempmin;
  int	t1;
  
  scanf("%d%d%d", &input, &tempmin, &tempmax);
  t1 = tempmin;
  while (t1 >= tempmin && t1 <= tempmax)
    {
      scanf("%d", &t1);
      if (t1 >= tempmin && t1 <= tempmax)
	printf("Rien à signaler\n");
      else
	printf("Alerte !!\n");
    }
  ac = ac;
  av = av;
  return (0);
}
