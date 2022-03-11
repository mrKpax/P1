#include <stdio.h>

void rettangolo (int altezza, int lunghezza)
    {
       int i, j, k;
       i=1;
       
       //stampa n righe
       while (i<=altezza)
       {
          //stampa una riga
          if (i==1 || i==altezza)
             {for (j=1; j<=lunghezza; j++)
              printf("*");
              j=j+1;
             }
             
           else
              for(k=1; k<=lunghezza; k++)
              if(k==1 || k==lunghezza)
                {printf("*");
                }
              else  
                {printf(" ");
             }
           printf("\n");
        i++;
       }
    }
    
    
    int main(void)
    {
       int altezza, lunghezza;
       printf("Altezza del rettangolo? ");
       scanf("%d", &altezza);

       printf("Lunghezza del rettangolo? ");
       scanf("%d", &lunghezza);
      
       rettangolo(altezza, lunghezza);
       return 0;
    }
