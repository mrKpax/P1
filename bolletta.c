#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int codice;
float kwhprec, kwhatt, canone, cunitario, costokwh, costobolletta;

printf("Inserire il codice dell'utente: ");
scanf("%d", &codice);
printf("Inserire il numero di KW/h della lettura precedente: ");
scanf("%g", &kwhprec);
printf("Inserire il numero di KW/h della lettura attuale: ");
scanf("%g", &kwhatt);
printf("Inserisci il canone: ");
scanf("%g", &canone);

cunitario= 0.06;
costokwh= (kwhatt - kwhprec)*cunitario;
costobolletta= costokwh + canone;

printf("Il totale della bolletta da pagare è di: %g€\n", costobolletta);

return 0;
}
