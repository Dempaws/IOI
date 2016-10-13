#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	x;
  int	y;
  int	input;
  
  scanf("%d", &input);
  while (input--)
    {
      scanf("%d%d", &x, &y);
      if (x < 0 || x > 90 || y < 0 || y > 70)
	printf("En dehors de la feuille\n");
      else if (x >= 15 && y >= 60)
	if ((x <= 45) || (x >= 60 && x <= 85))
	  printf("Dans une zone rouge\n");
	else
	  printf("Dans une zone jaune\n");
      else if (x >= 10 && x <= 85 && y >= 10 && y <= 55)
	if (x > 25 && x < 50 && y > 20 && y < 45)
	  printf("Dans une zone jaune\n");
	else
	  printf("Dans une zone bleue\n");
      else
	printf("Dans une zone jaune\n");
    }
  ac = ac;
  av = av;
  return (0);
}
