#include <stdio.h>
int main(void)
{
  int n, fatt=1;
  
  printf("Inserisci un numero intero >=0 (-1 per terminare): ");
  scanf("%d", &n);
    
  do
  {
     fatt=fatt*n;
     n--;
  }
  while(n>=1);
  
  printf("Il fattoriale è %d\n", fatt);
  
  return 0;
}
