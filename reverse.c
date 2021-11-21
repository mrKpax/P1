#include <stdio.h>
#define NUMEL 10

int main(void)
{
  double valori[NUMEL];
  
  for(int i=0; i<=NUMEL-1; i++)
     {
       printf("Inserisci il valore in posizione %d: ", i+1);
       scanf("%lf", &valori[i]);
     }
  
  for(int j=NUMEL-1; j>=0; j--)
     {
       printf("%g ", valori[j]);
     }
     
   printf("\n");
   return 0;
}
