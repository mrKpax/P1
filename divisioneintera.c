#include <stdio.h>

void divisioneintera(int dividendo, int divisore, int *quoziente, int *resto)
{
  *quoziente = dividendo / divisore;
  *resto = dividendo % divisore;  
}

int main(void)
{
  int quoziente, resto, dividendo, divisore;

  printf("Inserisci il numero da dividere: ");
  scanf("%d", &dividendo);

  printf("Inserisci il divisore: ");
  scanf("%d", &divisore);

  divisioneintera(dividendo, divisore, &quoziente, &resto);
  printf("%d diviso %d fa %d con resto %d", dividendo, divisore, quoziente, resto);

  return 0;  
}
