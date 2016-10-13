#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	startc;
  int	endc;
  int	start;
  int	end;
  int	current;

  scanf("%d%d", &start, &end);
  scanf("%d", &input);
  current = 0;
  while (input--)
    {
      scanf("%d%d", &startc, &endc);
      if (startc <= end && endc >= start)
	current++;
    }
  printf("%d\n", current);
  ac = ac;
  av = av;
  return (0);
}
