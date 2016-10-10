#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	input1;
  int	input2;
  int	i;
  int	poids1;
  int	poids2;
  
  scanf("%d", &i);
  poids1 = 0;
  poids2 = 0;
  while (i--)
    {
      scanf("%d%d", &input1, &input2);
      poids1 += input1;
      poids2 += input2;
    }
  if (poids1 > poids2)
    printf("L'équipe 1 a un aventage\nPoids total pour l'équipe 1 : %d\nPoids total pour l'équipe 2 : %d\n", poids1, poids2);
  else
    printf("L'équipe 2 a un aventage\nPoids total pour l'équipe 1 : %d\nPoids total pour l'équipe 2 : %d\n", poids1, poids2);
  ac = ac;
  av = av;
  return (0);
}
