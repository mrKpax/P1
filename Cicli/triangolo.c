#include <stdio.h>

void triangolo(int n)
{
   int i, j, k;
   
   for (i=1; i<=n; i++)
      {
      for (j=1; j<=n-i; j++)
         printf(" ");
         
      for (k=1; k<=i*2-1; k++)
         printf("*");
         
      printf("\n");
      }
      
}

int main(void)
{
   int n;
   printf("Inserisci il numero di livelli del triangolo: ");
   scanf("%d", &n);
   if (n>0)
   triangolo(n);
   
   return 0;
}      
