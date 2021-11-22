#include <stdio.h>
#define NMAX 30

void GetLista(int lista[], int n)
{
  for (int i=0; i<=n-1; i++)
      {
       scanf("%d", &lista[i]);
      } 
}

int ricerca(int B[], int m, int elem)
{
  for(int i=0; i<=m-1; i++)
     {
       if (B[i]==elem)
          {
            return 1;  
          }  
     }  
   return 0;  
}

int intersezione(int A[], int B[], int n, int m, int C[])
{
  int k=0;
  for (int i=0; i<=n-1; i++)
      {
          if (ricerca(B, m, A[i])==1)
             {
               C[k]=A[i];
               k++;  
             }
      }     
    return k;   
}

void stampa(int C[], int l)
{
  for(int i=0; i<=l-1; i++)
     {
        printf("%d ", C[i]);
     }  
   printf("\n");
}

int main(void)
{
  int A[NMAX], B[NMAX], n, m, C[NMAX], l;
  printf("Quanti elementi vuoi inserire in A? (max 30) ");
  scanf("%d", &n);
  printf("Quanti elementi vuoi inserire in B? (max 30) ");
  scanf("%d", &m);

  printf("Inserisci gli elementi di A: ");
  GetLista(A, n);

  printf("Inserisci gli elementi di B: ");
  GetLista(B, m);

  l=intersezione(A, B, n, m, C);

  printf("Gli elementi comuni di A e B sono: ");
  stampa(C, l);
}
