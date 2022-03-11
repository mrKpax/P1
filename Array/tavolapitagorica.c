#include <stdio.h>
#define righe 11
#define colonne 11

void stampatavola(int pit[righe][colonne], int nrighe, int ncolonne)
{
  printf("Tavola pitagorica:\n");

	for (int i=1; i<=nrighe-1; i++)
	{
		for (int j=1; j<=ncolonne-1; j++)
		{
			printf("%d\t", pit[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int pit[righe][colonne];
	
	for (int i=1; i<=righe-1; i++)
	{
		for (int j=1; j<=colonne-1; j++)
		{
			pit[i][j] = i*j;
		}
	}
	
	stampatavola(pit, righe, colonne);
	return 0;
}
