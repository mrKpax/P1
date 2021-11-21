#include <stdio.h>
#define NMAX 20

void GetLista(int A[], int n)
{
	for (int i=0; i<=n-1; i++)
	    {
	     printf("Inserisci il valore di A in posizione %d: ", i+1);
		   scanf("%d", &lista[i]);
	    }
}

int ricerca(int elem, int B[], int n1)
{
	for (int i = 0; i<=n1-1; i++)
	    {
		   if (elem == B[i])
		      {
			     return 1;
		      }
	    }
	return 0;
}

int compatta(int A[], int n, int B[], int n1)
{
	n1=0;
	for (int i=0; i<=n-1; i++)
	{
		if (ricerca(A[i], B, n1) == 0)
		   {
			  B[n1] = A[i];
			  n1++;
		   }
	}
	return n1;
}

void StampaLista(int B[], int n1)
{
	for (int i=0; i<=n1-1; i++)
	    {
		   printf("%d ", B[i]);
	    }
	printf("\n");
}

int main(void)
{
	int A[NMAX], B[NMAX], n, n1;
	
	printf("Quanti elementi ha A? ");
	scanf("%d", &n);
	
	GetLista(A, n);
	n1 = compatta(A, n, B, n1);
	printf("gli elementi di B sono: ");
	StampaLista(B, n1);
}
