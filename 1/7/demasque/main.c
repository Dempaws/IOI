#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input;
  int	lenght;
  int	age;
  int	weight;
  int	horse;
  int	brown;
  int	current;

  scanf("%d", &input);
  while (input--)
    {
      current = 0;
      scanf("%d%d%d%d%d", &lenght, &age, &weight, &horse, &brown);
      if (lenght >= 178 && lenght <= 182)
	current++;
      if (age >= 34)
	current++;
      if (weight < 70)
	current++;
      if (horse)
	current++;
      if (brown)
	current++;
      if (current == 5)
	printf("Très probable\n");
      else if (current >= 3)
	printf("Probable\n");
      else if (current > 2)
	printf("Peu probable\n");
      else
	printf("Impossible\n");
    }
  ac = ac;
  av = av;
  return (0);
}
