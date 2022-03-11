#include <stdio.h>

int main(void)
{
  int n, i, somma;
  
  printf("Quanti numeri pari vuoi sommare? ");
  scanf("%d", &n);
  
  for(somma=0, i=1; i<=n; i++)
     {
       somma += 2*i;
     }
  
  printf("La somma dei primi %d numeri pari è %d\n", n, somma);
  
  return 0;
}
