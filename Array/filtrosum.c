#include <stdio.h>
#define NMAX 30

int GetLista(int lista[])
{
	int n, val;
	for (n=0; n<=NMAX-1; n++)
	    {
		   scanf("%d", &val);
		   if (val==-1)
		      {
		       break;
		      }
		   lista[n] = val;	
 	    }
	return n;
}

int filtrosum(int a[], int na, int b[], int nb, int c[], int nc)
{
	int j = 0;
	for (int i = 0; i < na; i++)
	    {
		   for (int k = 0; k < nb-1; k++)
		       {
			      if ( (b[k] + b[k+1]) == a[i])
			         {
				        c[j] = a[i];
				        j++;
			         }			
		       }
	    }
 return j;
}

void StampaLista(int lista[], int n)
{
	for (int i = 0; i < n; i++)
	    {
		   printf("%d ", lista[i]);
	    }
	printf("\n");
}

int main(void)
{
	int a[NMAX], b[NMAX], c[NMAX], na, nb, nc, elemcopiati;
	
  printf("Inserisci gli elementi dell'array A (-1 per terminare): \n");
	na = GetLista(a);
	
  printf("Inserisci gli elementi dell'array B (-1 per terminare): \n");
	nb = GetLista(b);
	
  nc = na; 
	
  elemcopiati = filtrosum(a, na, b, nb, c, nc);
	printf("Gli elementi copiati in C sono: %d\n", elemcopiati);
	printf("L'array C è: ");
	StampaLista(c, elemcopiati);
}
