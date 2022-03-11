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

int compatta(int lista[], int n)
{
  for(int i=0; i<=n-1;)
     {
       if (lista[i] == lista[i+1])
          {
            for (int j=i; j<=n-1; j++)
                {
                  lista[j]=lista[j+1];
                }
            n--;
          }
       else i++; 
     }
  return n;
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
  n=compatta(lista, NUMEL);
  stampa(lista, n);
  
  printf("\n");
  return 0;
}
