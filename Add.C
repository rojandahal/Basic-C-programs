#include <stdio.h>
#include <conio.h>
int main ()
{
	int mat[10];
	int i,n=5,po,no;
	for (i=0;i<n;i++)
	{
		scanf("%d",&mat[i]);
		
	}
	printf("\nEnter position to add");
	scanf("%d",&po);
	printf("\nEnter the num to edit\n");
	scanf("%d",&mat[po]);
	for (i=0;i<n;i++)
	printf("%d\t",mat[i]);
}
