#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	in;
  int	in2;
  
  scanf("%d", &in);
  scanf("%d", &in2);
  if (in <= 5 && in2 >= 8)
    printf("Tinuviel\n");
  else if (in >= 10 && in2 >= 10)
    printf("Caelaelen\n");
  else if (in <= 8 && in2 <= 5)
    printf("Falarion\n");
  else if (in >= 12 && in2 <= 7)
    printf("Dorthonion\n");
  ac = ac;
  av = av;
  return (0);
}
