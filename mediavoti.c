#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int nstudenti, contatore;
   float voto, somma, media;
   
   contatore=1;
   somma=0;
   
   printf("Inserire il numero degli studenti: "); //valore sentinella
   scanf("%d", &nstudenti);
   
   while (contatore<=nstudenti)
   {printf("Inserire il voto: ");
    scanf("%f", &voto);
    
    somma=somma+voto;
    contatore++;
   }
    
    media=somma/nstudenti;
    
    printf("La media dei voti degli studenti è %g.\n", media);
    
    return 0;
}
