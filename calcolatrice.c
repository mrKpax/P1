#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float a, b, somma, differenza, prodotto, quoziente;
   
   printf("Questo programma effettua la somma, la differenza, il prodotto e il quoziente tra due numeri immessi dall'utente.\n");
   printf("Immettere il primo numero:");
   scanf("%f", &a);
   printf("Immettere il secondo numero:");
   scanf("%f", &b);
   
   somma= a+b;
   differenza= a-b;
   prodotto= a*b;
   quoziente= a/b;
   
   printf("La somma tra %g e %g è: %g\n", a, b, somma);
   printf("La differenza tra %g e %g è: %g\n", a, b, differenza);
   printf("Il prodotto tra %g e %g è: %g\n", a, b, prodotto);
   printf("Il quoziente tra %g e %g è: %g\n", a, b, quoziente);
   
   exit (0);
   
}
