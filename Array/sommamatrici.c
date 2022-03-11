#include <stdio.h>
#define MAXROW 100
#define MAXCOL 100

void GetListaA(int A[][MAXCOL], int n, int m)
{
  for (int i=0; i<=n-1; i++)
      {
        for(int j=0; j<=m-1; j++)
           {
             printf("Inserisci il valore in posizione (%d;%d): ", i+1, j+1);
             scanf("%d", &A[i][j]);
           }
      }
}

void GetListaB(int B[][MAXCOL], int n1, int m1)
{
  for (int i=0; i<=n1-1; i++)
      {
        for(int j=0; j<=m1-1; j++)
           {
             printf("Inserisci il valore in posizione (%d;%d): ", i+1, j+1);
             scanf("%d", &B[i][j]);
           }
      }
}

void sum(int A[][MAXCOL], int B[][MAXCOL], int n, int m, int somma[][MAXCOL])     //riempimento array di somma
{
  for (int i=0; i<=n-1; i++)
      {
        for (int j=0; j<=m-1; j++)
            {
              somma[i][j] = A[i][j] + B[i][j];
            } 
      }
}

void stampa(int somma[][MAXCOL], int n, int m)
{
  for (int i=0; i<=n-1; i++)
      {
        for (int j=0; j<=m-1; j++)
            {
              printf("%d\t", somma[i][j]);
            } 
        printf("\n");
      }  
}

int main(void)
{
  int A[MAXROW][MAXCOL], B[MAXROW][MAXCOL], n, m, n1, m1, somma[MAXROW][MAXCOL];

  printf("Quante righe vuoi avere in A? ");
  scanf("%d", &n);
  printf("Quante colonne vuoi avere in A? ");
  scanf("%d", &m);

  printf("Quanti righe vuoi avere in B? ");
  scanf("%d", &n1);
  printf("Quanti colonne vuoi avere in B? ");
  scanf("%d", &m1);

  if((n != n1) || (m != m1))
    {
      printf("Errore! Array non comparabili!\n");
      return 0;  
    }
   GetListaA(A, n, m);
   GetListaB(B, n1, m1);
    
   sum(A, B, n, m, somma); 

   printf("L'array somma è:\n");
   stampa(somma, n, m);

   return 0;
}
