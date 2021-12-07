#include <stdio.h>
void divisioneintera(int dividendo, int divisore, int *ptr_quoziente, int *ptr_resto) 
{
	*ptr_quoziente = dividendo/divisore;
	*ptr_resto = dividendo%divisore;
}

int main(void)
{
	int quoziente, resto, dividendo, divisore;

	printf("inserisci il numero da dividere: ");
	scanf("%d", &dividendo);
	printf("inserisci il divisore: ");
	scanf("%d", &divisore);

	divisioneintera(dividendo, divisore, &quoziente, &resto);
	printf("%d diviso %d fa %d con resto %d\n", dividendo, divisore, quoziente, resto);
	return 0;
}
