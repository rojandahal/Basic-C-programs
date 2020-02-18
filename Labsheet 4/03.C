#include <stdio.h>
#include <conio.h>
int main ()
{
	int mat1[3][4],mat2[3][4],sum[3][4],i,j;
	printf ("\nEnter first matrix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		scanf ("%d",&mat1[i][j]);
	}
	printf ("\nEnter the second matrix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		scanf ("%d",&mat2[i][j]);
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		sum[i][j]=mat1[i][j]+mat2[i][j];
	}
	printf ("\nThe sum of matrix is:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("%d\t",sum[i][j]);
		}
		printf ("\n");
	}
	getch();
}
