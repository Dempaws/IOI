#include <stdio.h>

int remplir(int a)
{
  printf("Le tonneau %d est rempli\n", a);
  return (0);
}

int vider(int a)
{
  printf("Le tonneau %d est vidé\n", a);
  return (0);
}

int transferer(int a, int b)
{
  printf("Le tonneau %d à été vidé dans le tonneau %d\n",a, b);
  return (0);
}
