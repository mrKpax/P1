#include <stdio.h>

int main (void)
{
  int i=13;
  
  while(i<=37)
       {
         if (i%2==1)
            {
              printf("%d ", i);
              i +=2 ;
            }
       }
   printf("\n");
}
