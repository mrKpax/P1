#include <stdio.h>

void quadrato(int n)
{
   int i, j;
   i=1;
       
   //stampa n righe
   while (i<=n)
        {
          //stampa una riga
          j=1;
          while(j<=n)
               {
                printf("*");
                j=j+1;
               }
                
          printf("\n");
          i++;
       
       }
}
    
int main(void)
{
    int lato;
    printf("Lato del quadrato? ");
    scanf("%d", &lato);
    quadrato(lato);
    return 0;
}
