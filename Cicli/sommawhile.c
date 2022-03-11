#include <stdio.h>

int main(void)
{
  int n, i, somma=0;
  
  printf("Quanti numeri pari vuoi sommare? ");
  scanf("%d", &n);
  
  i=1;
  
  while(i<=n)
       {
         somma+= 2*i;
         i++;
       }
  
  printf("La somma dei primi %d numeri pari è %d\n", n, somma);
  
  return 0;
}
