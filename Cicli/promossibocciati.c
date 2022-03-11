#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   //dichiarazione variabili
   int promossi, bocciati, voto, contatore; 
   
   //inizializzazione variabili
   promossi=0;
   bocciati=0;
   contatore=1;
   
   //avvio input e ciclo
   printf("Questo programma, in base ai voti immessi (max 10 studenti), calcola il numero di promossi e di bocciati e indica se le tasse dovranno subire un aumento\n");
   
    while (contatore<=10)
    { printf("Inserire il voto: ");
      scanf("%d", &voto);
      
         if (voto<=17) 
         {bocciati=bocciati+1;}
         else
         {if (voto>=17 && voto<=30)
          {promossi=promossi+1;}}
          
      contatore=contatore+1;
    }
    
    if(promossi>bocciati)
    {printf("Aumentare le tasse.\n");}
    else
       {if(bocciati>=promossi)
        {printf("Non aumentare le tasse.\n");}
       } 
}    
