#include <stdio.h>
#define MAXDIM 20

void GetLista(int lista[], int n)
{
  for (int i=0; i<=n-1; i++)
      {
        printf("Inserisci il valore il valore in posizione %d: ", i+1);
        scanf("%d", &lista[i]);
      }
}

void GetC(int A[], int B[], int C[], int N)
{
  int i, j, k;
  for (i=0, j=0, k=0; i<=(2*N)-1, j<=N-1, k<=N-1; i++)
      {
        if (i%2==0)
           {
            C[i]=A[j];
            j++;
           }
        else if (i%2==1)
                {
                 C[i]=B[k];
                 k++;
                }
      }       
}

void stampa(int C[], int N)
{
  for (int i=0; i<=(2*N)-1; i++)
      {
        printf("%d ", C[i]);
      }
}

int main(void)
{
  int A[MAXDIM], B[MAXDIM], N, C[MAXDIM*2];
  
  printf("Quanti valori vuoi inserire in A e B? ");
  scanf("%d", &N);

  if (N<0)
     {
       printf("Errore!");
     }
   
  printf("Inserisci i valori di A:\n"); 
  GetLista(A, N);
  printf("Inserisci i valori di B:\n");
  GetLista(B, N);

  GetC(A, B, C, N);

  stampa(C, N);
  printf("\n");
  
  return 0;
}
