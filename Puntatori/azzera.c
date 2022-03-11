#include <stdio.h>

void azzera(int *n)
{
  *n=0;  
}

int main(void)
{
  int i=10;
  azzera(&i);
  
  printf("Valore di i: %d\n", i);

  return 0;  
}
