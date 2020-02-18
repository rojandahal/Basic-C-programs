#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int *number,i,n;
	printf ("\nEnter the no of arrays");
	scanf("%d",&n);
	number=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf ("\nEnter the %d element-->",i+1);
		scanf("%d",number+i);	
	}	
	for(i=0;i<n;i++)
	{
		printf ("\n%d element--> %d",i+1,*(number+i));
	}
	getch();
}
