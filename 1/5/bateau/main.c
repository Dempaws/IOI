#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input1;

  scanf("%d", &input1);
  if (input1 > 20)
    printf("Tarif plein\n");
  else
    printf("Tarif réduit\n");    
  ac = ac;
  av = av;
  return (0);
}
