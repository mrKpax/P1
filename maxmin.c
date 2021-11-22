#include <stdio.h>
#define N 10

void maxmin(int a[], int n, int *max, int *min)
{
  *max= *min = a[0];

  for (int i=1; i<=n-1; i++)
      {
        if (a[i] > *max)
           {
             *max = a[i];  
           }  
        else if (a[i] < *min)
                {
                  *min = a[i];  
                }
      }  
}

int main(void)
{
  int b[N], massimo, minimo;

  printf("Inserisci %d numeri: \n", N);

  for(int i=0; i<=N-1; i++)
     {
       scanf("%d", &b[i]);  
     }

   maxmin(b, N, &massimo, &minimo);
   printf("massimo: %d\n", massimo);
   printf("minimo: %d\n", minimo);

   return 0;
}
