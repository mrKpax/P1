#include <stdio.h>

float quadrato(float n)
{
	float n2=n*n;
	
	return n2;
}

int main(void)
{
	float n;
	
	printf("Inserisci il valore di n: ");
	scanf("%f", &n);
	
	printf("Il quadrato di %g è %g\n", n, quadrato(n));
	
	return 0;
}
