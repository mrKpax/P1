#include <stdio.h>
#define N 10

void maxmin(int b[], int n, int *ptr_massimo, int *ptr_minimo)
{
	*ptr_massimo = *ptr_minimo = b[0];

	for (int i=0; i<=n-1; i++)
	{
		if (b[i]>*ptr_massimo)
		{
			*ptr_massimo = b[i];
		}
		else if (b[i]<*ptr_minimo)
	    {
			*ptr_minimo = b[i];
	    }
	}

}

int main(void)
{
  int b[N], i, massimo, minimo;

  printf("Inserisci %d numeri: \n", N);
  for (i=0; i<=N-1; i++)
  {
	  scanf("%d", &b[i]);  
  }	

  maxmin(b, N, &massimo, &minimo);

  printf("massimo: %d\n", massimo);
  printf("minimo: %d\n", minimo);

  return 0;
}
