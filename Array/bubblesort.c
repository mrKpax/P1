#include <stdio.h>
#define MAXLIST 50

int GetLista(int lista[], int max)
{
	int n=0, val;
	printf("Inserisci valori (0 per terminare): ");
	while (n < max)
	      {
		     scanf("%d", &val);
		     if (val == 0)
		        {
		         break;
		        }
		     else
		        {
		         lista[n] = val;
		         n++;
		        }
	      }
	return n;
}

void scambia(int lista[], int i, int j)
{
	int temp;
	temp = lista[i];
	lista[i] = lista[j];
	lista[j] = temp;
}

int scorri(int lista[], int n)
{
	int scambi=0;
	for (int i=0; i<=n-2; i++)
	    {
		   if (lista[i] > lista[i+1])
		      {
			     scambia(lista, i, i+1);
			     scambi = 1;
		      }
	    }
	return scambi;
}

void ordina(int lista[], int n)
{
	while (scorri(lista, n));
}

void stampaLista(int lista[], int n)
{
	for (int i=0; i<=n-1; i++)
	    {
		   printf("%d ", lista[i]);
	    }
	printf("\n");
}

int main(void)
{
	int n, lista[MAXLIST];
	n = GetLista(lista, MAXLIST);
	ordina(lista, n);
	stampaLista(lista, n);
	return 0;
}
