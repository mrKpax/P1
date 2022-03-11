#include <stdio.h>
#define NUMEL 10

void GetLista (int lista[])
{
  for(int i=0; i<=NUMEL-1; i++)
     {
       printf("Inserisci il valore in posizione %d: ", i+1);
       scanf("%d", &lista[i]);
     }
}

void Inversa (int lista[])
{
  for(int i=0; i<NUMEL/2; i++)
     {
       int temp=lista[i];
       lista[i]=lista[NUMEL-1-i];
       lista[NUMEL-1-i]=temp;
     }
}

void Stampa (int lista[])
{
  printf("La lista inversa è: ");
  
  for (int i=0; i<=NUMEL-1; i++)
      {
        printf("%d ", lista[i]);
      }
}

int main(void)
{
  int lista[NUMEL];
  
  GetLista(lista);
  Inversa(lista);
  Stampa(lista);
  
  printf("\n");
  return 0;
}
