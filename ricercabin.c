int ricercabin(int A[], int n, int elem)
{
  int i, j, k;
  int trovato = 0;
  
  i=0;
  j=n-1;  //estremi dell'intervallo in cui cercare
  
  while(i<=j && !trovato)
       {
         k=(i+j)/2;  //posizione centrale
         if (a[k] == elem)
            {
              trovato=1;  //esce dal ciclo
            }
         else if (a[k]>elem)
                 {
                   i=k-1;  //la ricerca continua nella prima metà
                 }
              else 
                 {
                   i=k+1;  //la ricerca continua nella seconda metà
                 }
       }
  if (!trovato)
     {
       k=-1;
     }
   return (k);
}
