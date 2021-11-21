#include <stdio.h>

int main(void)
{
  int n=1000;
  
  while (n>=7)
        {
          if (n%7==0)
             {
               printf("%d ", n);
             }
             n--;
        }
        printf("\n");
}
