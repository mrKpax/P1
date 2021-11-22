#include <stdio.h>
#define NMAX 100

void GetListaA(int A[], int n)
{
  for (int i=0; i<=n-1; i++)
      {
        printf("Inserisci il valore in posizione A %d: ", i+1);
        scanf("%d", &A[i]);
      }
}

void GetListaB(int B[], int m)
{
  for (int i=0; i<=m-1; i++)
      {
        printf("Inserisci il valore in posizione B %d: ", i+1);
        scanf("%d", &B[i]);
      }
}

int sum(int A[], int B[], int n, int m, int somma[])
{
  int k=0;
  for (int i=0; i<=n-1; i++)
      {
        somma[k] = A[i] + B[i];
        k++;   
      } 
   return k;    
}

void stampa(int somma[NMAX], int l)
{
  for (int i=0; i<=l-1; i++)
      {
        printf("%d ", somma[i]);  
      }  
}

int main(void)
{
  int A[NMAX], B[NMAX], n, m, somma[NMAX], l;

  printf("Quanti valori vuoi inserire in A? ");
  scanf("%d", &n);

  printf("Quanti valori vuoi inserire in B? ");
  scanf("%d", &m);

  if(n != m)
    {
      printf("Errore! Array non comparabili!\n");
      return 0;  
    }
   GetListaA(A, n);
   GetListaB(B, m);
    
   l=sum(A, B, n, m, somma); 

   printf("L'array somma è: ");
   stampa(somma, l);

   return 0;
}
