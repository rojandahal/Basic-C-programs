#include <stdio.h>
#include <conio.h>
int main ()
{
	int mat[10][10],i,j,m,n,sum=0;
	printf ("\nEnter the row of matrix: ");
	scanf("%d",&m);
	printf ("\nEnter the column of matrix");
	scanf("%d",&n);
	
	printf ("\nEnter the matrix elements:\n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i==j)
			sum=sum+mat[i][j];
		}
	printf ("\nThe sum of diagonal element of matrix is: %d",sum);
	getch();
		

}
