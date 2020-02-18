#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int *num,n,a,sum=0,n1,i;
	printf ("\n Enter the number of arrays: ");
	scanf ("%d",&n);
	num=(int *)malloc(sizeof(int)*n);
	for (i=0;i<n;i++)
	{
		printf ("\n Enter the %d element--> ",i+1);
		scanf ("%d",num+i);
	}
	printf ("\n The array is:\n");
	for (i=0;i<n;i++)
	{
		 printf ("%d  ",*(num+i));
	}
	printf ("\n Enter the number of elements to add: ");
	scanf ("%d",&n1);
	num=(int *)realloc(num,sizeof(int)*(n1+n));
	for (i=n;i<(n+n1);i++)
	{
		printf ("\nEnter the %d element--> ",i+1);
		scanf ("%d",num+i);
	}
	
	printf ("\n The array is:\n");
	for (i=0;i<(n1+n);i++)
	{
		 printf ("%d  ",*(num+i));
		 sum=sum+*(num+i);
	}
	printf ("\n The sum of numbers in array is: %d ",sum);
	
	getch();
}
