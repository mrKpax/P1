#include <stdio.h>
#include <stdlib.h>
#define NMAX 20

int riempimento (int A[], int n)
{
   int i;
   printf("Quanti valori vuoi inserire? ");
   scanf("%d", &n);
   
   for (i=0; i<=n-1; i++)
       {
        printf("Inserisci il valore: ");
        scanf("%d", &A[i]);
       }
       
   return n;
}

void checkcifre (int A[], int n)
{
   int i;
   for (i=0; i<=n-1; i++)
       { 
        if (!(A[i]>99 && A[i]<1000))
           {
            A[i]=0;
           }
        }
}

void checkarmstrong(int A[], int n)
{
   int i;
   for (i=0; i<=n-1; i++)
       {
        int u=A[i]%10;
        int d=(A[i]/10)%10;
        int c=A[i]/100;
        
        if (!((u*u*u) + (d*d*d) + (c*c*c) == A[i]))
           {
             A[i]=0;
           }
        }
}

void stampa(int A[], int n)
{
   int i;
   for (i=0; i<=n-1; i++)
       { 
         if (A[i]!=0)
           {printf("%d ", A[i]);}
       }
   printf("\n");
}

int main(void)
{
   int A[NMAX], n;
   
   n=riempimento(A, n);
   checkcifre(A, n);
   checkarmstrong(A, n);
   stampa(A, n);
   
   return 0;
}
