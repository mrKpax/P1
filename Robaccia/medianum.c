//questo programma calcola la media tra due numeri
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int a, b;
   float somma, media;
   
   printf("Calcolo della media di due numeri\n");
   printf("Inserisci il primo numero:");
   scanf("%d", &a);
   printf("Inserisci il secondo numero:");
   scanf("%d", &b);
   
   somma= a+b;
   media= somma/2;
   
   //soluzione alternativa: media=(a+b)/2
   
   printf("\n");
   printf("La media tra %d e %d è %f\n", a, b, media);
   
   exit(0);
}
