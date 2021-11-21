#include <stdio.h>
#define NUMEL 5

int GetLista(int lista[])
{
  for(int i=0; i<=NUMEL-1; i++)
     {
       printf("Inserisci il valore in posizione %d: ", i+1);
       scanf("%d", &lista[i]);
     }
}

int inserisci (int lista[], int n, int elem, int pos)
{
  if (pos<0 || pos>n)
     {
       return n;
     }
  for (int i=n; i>pos; i--)
     {
       lista[i] = lista[i-1];  //shift a destra
     }
  lista[pos] = elem;
  return n+1;
}

void stampa (int lista[], int n)
{
  for (int i=0; i<n; i++)
      {
        printf("%d ", lista[i]);
      }
}

int main(void)
{
  int lista[NUMEL], n;
  GetLista(lista);
  n = inserisci(lista, NUMEL, 33, 2);  //inserisce 33 in posizione 2
  stampa(lista, n);
  
  printf("\n");
  return 0;
}
