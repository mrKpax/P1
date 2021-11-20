#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float importo, commissione;
    printf("Immetti l'ammontare della transazione: ");
    scanf("%f", &importo);
    
    if(importo<2500)
    {
        commissione=30+(importo/100*1.7);
        if(commissione<39) 
        commissione=39;
    }
    else
        if(importo>2500 && importo<6250)
           commissione=56+(importo/100*0.66);
        else
            if(importo>6250 && importo<20000)
               commissione=76+(importo/100*0.34);
            else
                if(importo>20000 && importo<50000)
                  commissione=100+(importo/100*0.22);
                else
                    if(importo>50000 && importo<500000)
                    commissione=155+(importo/100*0.11);
                    else 
                        if(importo>500000)
                        commissione=255+(importo/100*0.09);
                    
    printf("Commissione: %g$\n", commissione);
    
    return 0;
}    
