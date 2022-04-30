int main (void)
{
  int *A[MAX], i, n;
  
  for (i=0; i<MAX; i++)
  {
    printf(“lunghezza riga %d: “, i); 
    scanf( "%d”, &n);
    A[i] = xcalloc(n+1, sizeof(int));
    
    A[i][0] = n;
  }
          
  riempi(A, MAX); 
  return 0;
}

void riempi (int **A, int m) 
{
  int i, j;
  for (i=0; i<m; i++)
  {
    printf("\n inserire la riga %d\n”, i); 
    for (j=1; j<=A[i][0]; j++)
    {
      printf(“prossimo valore: “); 
      scanf( "%d”, &A[i][j]);
    }
  }
} 
