//numero precedente e successivo
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int num, prec, suc;

   printf("Inserisci un numero:");
   scanf("%d", &num);
   
   prec= num-1;
   suc= num+1;
   
   printf("\n");
   printf("Il numero immesso è %d\n", num);
   printf("Il numero precedente a %d è %d\n", num, prec);
   printf("Il numero successivo a %d è %d\n", num, suc);
   
   exit(0);
 }
