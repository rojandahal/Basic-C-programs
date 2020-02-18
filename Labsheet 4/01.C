#include <stdio.h>
#include <conio.h>
int main ()
{
	int i,arr[10]={21,3,61,80,9,73,0,5,1,2},temp;
	printf ("\n The original array:\n");
	for (i=0;i<10;i++)
	{
		printf ("%d\t",arr[i]);
	}
	for (i=0;i<10;i+=2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	printf ("\nThe exchanged array is:\n");
	for (i=0;i<10;i++)
	{
		printf ("%d\t",arr[i]);
	}
	getch();
}
