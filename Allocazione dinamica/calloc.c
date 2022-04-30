int *leggiNvalori (int numval)
{
  int *A;
  A = calloc(numval, sizeof(int)); 
  if(!A)
  {  
    return NULL;
  }
  
  for (int i=0; i<numval; i++)
  {
    printf("Inserire valore (%d): ", i); 
    scanf("%d", &A[i]);
  }
  returnA;
}
