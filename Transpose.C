#include <stdio.h>
#include <conio.h>
int main ()
{
	int mat[3][3],trans[3][3],i,j;
	printf ("Enter the element of the matrix:\n");
	for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
		scanf("%d",&mat[i][j]);
	}
		
	}
	
	printf ("\nYou have entered the following matrix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%2d",mat[i][j]);
		}
		printf ("\n");
	}
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			trans [i][j]=mat[j][i];
		}
	}
	printf ("\nThe transposed matrix is:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%2d",trans[i][j]);
		}
		printf ("\n");
	}
}
