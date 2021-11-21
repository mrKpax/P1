#include <stdio.h>
#define N 10
#define M 10

void GetListaA(int A[])
{
  for (int i=0; i<=N-1; i++)
      {
       printf("Inserisci il valore di A in posizione %d: ", i+1);
       scanf("%d", &A[i]);
      }
}

void GetListaB(int B[])
{
  for (int i=0; i<=M-1; i++)
      {
       printf("Inserisci il valore di B in posizione %d: ", i+1);
       scanf("%d", &B[i]);
      }
}

int ricerca(int A[], int x, int elem) 
{
  for (int i=0; i<x; i++)
      {
       if (A[i] == elem)
          {
           return(i);	
          }
      }
  return -1;
}

int elimina(int B[], int y, int pos)
{
  for (int i=pos; i<y-1; i++)
      {
       B[i] = B[i+1];  //shift a sinistra
      }
  return y-1;
}

int differenza(int A[], int B[], int n, int m) 
{
  int i=0;
  
  while (i < n)
        {
          if (ricerca(A, n, B[i]) == -1)
             {
              i++;
             }
          else
             {
              m = elimina(B, m, i);
             }
        }
  return m;
}

void StampaLista(int B[], int d)
{
  for (int i=0; i<d; i++)
      {
       printf("%d ", B[i]);
      }
}

int main(void)
{
  int A[N], B[M], d;

  GetListaA(A);
  GetListaB(B);
  d = differenza(A,B, N, M);
  StampaLista(B, d);
  
  printf("\n");
  return 0;
}
