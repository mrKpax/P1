int ricerca(int lista[], int n, int elem)
{
  int i=0; //indice dell'array
  while (i<=n-1)  //visita finalizzata
        {
          if (lista[i]==elem)
             {
               break;  //esce dal ciclo se trova elem
             }
          else
             {
               i++;
             }
        }
   
   if (i==n)
      {
        return(-1);  //se non trovato restituisce -1
      }
   return(i);  //se trovato restituisce la posizione dell'elemento
}
