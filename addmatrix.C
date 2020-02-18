#include <stdio.h>
#include <conio.h>
int main ()
{
	int a[3][5]={{2,1,3,7,6},{8,13,4,0,1},{1,2,3,4,3}},b[3][5]={{0,1,2,3,4},{9,1,2,6,7},{4,0,3,7,1}},c[3][5],i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf ("\nThe sum of the matrix is\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
}
	
	
