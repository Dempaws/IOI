#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  char	c;
  int	i;

  c = 'a' - 1;
  ac = ac;
  av = av;
  while (c++ < 'c')
    {
      i = 0;
      while (i++ < 30)
	printf("%c_", c);
      printf("\n");
    }
  return (0);
}
