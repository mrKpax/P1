void input_array(int a[RMAX][CMAX], int nrighe, int ncolonne)
{
	for (int i=0; i<=nrighe-1; i++)
	    {
		   for (int j=0; j<=ncolonne-1; j++)
		       {
			      printf("a[%d][%d]: i, j);
			      scanf("%d", &a[i][j]);
		       }
	    }
}

void output_array(int a[RMAX][CMAX], int nrighe, int ncolonne)
{
	for (int i=0; i<=nrighe-1; i++)
	    {
		   for (int j=0; j<=ncolonne-1; j++)
		       {
		 	      printf("%d", a[i][j]);
		       }
		   printf("\n");
	    }
}
