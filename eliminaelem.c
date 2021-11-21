#include <stdio.h>
#define NUMEL 5

void GetLista(int lista[])
{
  for (int i=0; i<=NUMEL-1; i++)
      {
         printf("Inserisci il valore in posizione %d: ", i+1);
         scanf("%d", &lista[i]); 
      }
}

int elimina(int lista[], int n, int pos)
{
  if (pos<0 || pos>=n)
     {
       return n;
     }
     
  for (int i=pos; i<=n-1; i++)
      {
        lista[i]=lista[i+1];  //shift a sinistra
      }
      return n-1;
}

void stampa(int lista[], int n)
{
  for (int i=0; i<=n-1; i++)
      {
        printf("%d ", lista[i]);
      }
}

int main(void)
{
  int lista[NUMEL], n;
  
  GetLista(lista);
  n=elimina(lista, NUMEL, 2);
  stampa(lista, n);
  
  printf("\n");
  return 0;
}
