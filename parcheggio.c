/* questo programma calcola il totale da pagare per un parcheggio in base al numero di ore, 
 * sapendo che le tariffe sono di 2$ la prima ora e 1$ per ogni ora successiva 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float ore, totcosto;
   
   printf("Inserire numero di ore di sosta: ");
   scanf("%g", &ore);
   
   totcosto= ((ore-(ore-1))*2)+ore-1;
   
   printf("Il costo totale del parcheggio è di $%g\n.", totcosto);
   
   return 0;
}
