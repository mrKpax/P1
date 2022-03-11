#include <stdio.h>

void quadrato(int n)
{
    int i, j, k;
    i=1;
       
    //stampa n righe
    while (i<=n)
          {
           //stampa una riga
           if (i==1 || i==n)
              {for (j=1; j<=n; j++)
                   printf("*");
                   j=j+1;
              }
           else
              {for(k=1; k<=n; k++)
                  if(k==1 || k==n)
                     printf("*");
                  else  
                     printf(" ");
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
