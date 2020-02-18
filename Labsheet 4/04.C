#include <stdio.h>
#include <conio.h>
int main ()
{
	int mat[3][4],trans[4][3],i,j;
	printf ("\nEnter the matrix:\n");
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
			scanf ("%d",&mat[i][j]);
	}
	printf ("\nThe original matrix is :\n");
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("%d\t",mat[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\nThe transposed matrix is:\n ");
	for (i=0;i<4;i++)
	{
		for (j=0;j<3;j++)
		{
			trans[i][j]=mat[j][i];
			printf ("%d\t",trans[i][j]);
		}
		printf ("\n");
	}
		
		getch();
}
