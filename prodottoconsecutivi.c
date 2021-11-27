#include <stdio.h>
#define NMAX 20

void GetLista(int sorg[], int n)
{
  for (int i=0; i<=n-1; i++)
      {
		printf("Inserire l'elemento in posizione %d: ", i+1);
		scanf("%d", &sorg[i]);  
	  }	
}

void CreaDest(int sorg[], int dest[], int n)
{
  int i, j;	
  for (i=0, j=0; i<=((n/2)-1), j<=n-1; i++)
      {
		dest[i]=(sorg[j]*sorg[j+1]);
		j=j+2;  
	  }	
}

void Stampa(int dest[], int n)
{
  for (int i=0; i<=((n/2)-1); i++)
      {
		printf("%d ", dest[i]);  
	  }	
}

int main(void)
{
  int sorg[NMAX], dest[NMAX/2], n;

  printf("Quanti elementi vuoi inserire in A? ");
  scanf("%d", &n);

  if (n%2!=0)
     {
		 printf("Errore! Inserire un numero pari.");
		 return 0;
	 }	

   GetLista(sorg, n);
   CreaDest(sorg, dest, n);
   Stampa(dest, n);

   return 0;
}
