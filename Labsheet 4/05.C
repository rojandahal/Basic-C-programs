#include <stdio.h>
#include <conio.h>
int main ()
{
	int mat[5][5],sum=0,diag=0,i,j;
	printf ("\nEnter the matrix:\n");
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
		scanf ("%d",&mat[i][j]);
		sum=sum+mat[i][j];
		if (i==j)
			diag=diag+mat[i][j];
		}
	}
	printf ("\nThe sum of all elements is: %d",sum);
	printf ("\nThe sum of all diagonal elements is: %d",diag);
	getch();
}
