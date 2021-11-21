int ricercaord(int lista[], int n, int elem)
{
  int i=0;
  int trovato=0;
  
  while(i<=n-1 && !trovato)  //visita finalizzata
       {
         if (lista[i] >= elem)
            {
               trovato = 1;  //permette di uscire dal ciclo
            }
         else
            {
              i++;
            }
       }
       
       if (i==n || lista[i]>elem)
          {
            return -1;
          }
          
          return (i);
}
