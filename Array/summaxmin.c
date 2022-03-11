#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10

void GetMatrice(int MXN[MAXROW][MAXCOL], int M, int N)
{
 for (int i=0; i<=M-1; i++)
     {
       for (int j=0; j<=N-1; j++)
           {
              printf("Inserisci il valore in posizione %d, %d: ", i+1, j+1);
              scanf("%d", &MXN[i][j]);
           }
     }
}

int Sum(int MXN[MAXROW][MAXCOL], int M, int N)
{
  int somma=0;
  for (int i=0; i<=M-1; i++)
      {
        for (int j=0; j<=N-1; j++)
            {
              somma = somma + MXN[i][j];  
            }  
      }  
   return somma;
}

int Min(int MXN[MAXROW][MAXCOL], int M, int N)
{
  int minimo=MXN[0][0];
  for (int i=0; i<=M-1; i++)
      {
        for (int j=0; j<=N-1; j++)
            {
               if(MXN[i][j]<minimo)
                 {
                   minimo = MXN[i][j];  
                 }
            }  
      }  
   return minimo;
}

int Max(int MXN[MAXROW][MAXCOL], int M, int N)
{
  int massimo=MXN[0][0];
  for (int i=0; i<=M-1; i++)
      {
        for (int j=0; j<=N-1; j++)
            {
               if(MXN[i][j]>massimo)
                 {
                   massimo = MXN[i][j];  
                 }
            }  
      }  
   return massimo;
}

void stampa(int MXN[MAXROW][MAXCOL], int M, int N)
{
  for (int i=0; i<=M-1; i++)
      {
        for (int j=0; j<=N-1; j++)
            {
               printf("%d\t", MXN[i][j]);
            }  
        printf("\n");
      }  
   printf("\n");
}

int main(void)
{
  int MXN[MAXROW][MAXCOL];
  int M, N, somma, minimo, massimo;

  printf("Quante righe avrà la matrice? ");
  scanf("%d", &M);  
  printf("Quante colonne avrà la matrice? ");
  scanf("%d", &N);

  GetMatrice(MXN, M, N);
  somma=Sum(MXN, M, N);
  minimo=Min(MXN, M, N);
  massimo=Max(MXN, M, N);

  stampa(MXN, M, N);
  
  printf("La somma degli elementi della matrice è %d\n", somma);
  printf("L'elemento minimo della matrice è %d\n", minimo);
  printf("L'elemento massimo della matrice è %d\n", massimo);

  return 0;
}
