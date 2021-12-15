#include <stdio.h>

int main(void)
{
int *p; //dichiarazione puntatore
int i=10;

p=&i; //assegnamento a p dell'indirizzo di i, p punta ad indirizzo

    //si può dichiarare e inizializzare contemporaneamente int i, *p = &i;
    
    //con *p si accede al VALORE di i, è detto alias
    //con &i si ottiene l'INDIRIZZO di i
}
