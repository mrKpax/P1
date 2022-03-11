#include <stdio.h>
#define MAXDIM 20

void GetA(int A[], int n)
{
  for (int i=0; i<=n-1; i++)
      {
        printf("Inserisci il valore in A%d: ", i+1);
        scanf("%d", &A[i]);
      }
}

void quadrato(int A[], int B[], int n)
{
  for (int i=0; i<=n-1; i++)
  {
    B[i] = A[i]*A[i];
  }
}

void cubo(int A[], int C[], int n)
{
  for (int i=0; i<=n-1; i++)
  {
    C[i] = A[i]*A[i]*A[i];
  }
}

void stampa(int lista[], int n)
{
  for (int i=0; i<=n-1; i++)
  {
    printf("%d ", lista[i]);
  }
 printf("\n");
}

int main(void)
{
  int A[MAXDIM], n, B[MAXDIM], C[MAXDIM];
  
  printf("Quanti elementi vuoi inserire in A? ");
  scanf("%d", &n);

  GetA(A, n);
  quadrato(A, B, n);
  cubo(A, C, n);
  
  printf("A, l'array iniziale:\n");
  stampa(A, n);
  printf("B, l'array con i numeri al quadrato:\n");
  stampa(B, n);
  printf("C, l'array con i numeri al cubo:\n");
  stampa(C, n);
  
  return 0;
}
