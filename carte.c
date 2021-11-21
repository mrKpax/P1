#include <stdio.h>

int main(void)
{
  for (int carta=13; carta>=1; carta--)
      {
        switch(carta)
              {
                case 13: printf("Re "); break;
                case 12: printf("Regina "); break;
                case 11: printf("Jack "); break;
                case 1: printf("Asso "); break;
                default: printf("%d ", carta);
              }
      }
      
      printf("\n");
      return 0;
}
