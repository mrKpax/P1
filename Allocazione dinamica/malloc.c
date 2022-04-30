int *leggiNvalori (int numval)
{
  int *A, i;
  A = malloc(numval * sizeof(int));
  if(!A)
  {
    return NULL;
  }
  
  for (i=0; i<numval; i++)
  {
    printf(“Inserire valore (%d): “, i); 
    scanf( "%d”, &A[i]);
  }
  return A;
}
