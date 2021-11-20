#include <stdio.h>

int main(void)
{
	int prodotto=2;
	
	while(prodotto<=1000)
				prodotto = 2*prodotto;
	
	printf("La prima potenza di 2 maggiore di 1000 è %d\n", prodotto);
	
	return 0;
}
