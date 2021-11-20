#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float km, litri, kmxl;
    printf("Inserisci il numero di chilometri percorsi: ");
    scanf("%f", &km);
    printf("Inserisci il numero dei litri di benzina utilizzati: ");
    scanf("%f", &litri);
    
    kmxl= km/litri;
    
    printf("In base ai dati inseriti, con 1 litro di benzina hai percorso %gkm\n", kmxl);
    
    return 0;
}
