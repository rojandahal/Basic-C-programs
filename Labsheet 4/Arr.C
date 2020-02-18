// program to add a value to the array: question of assesment-018
#include <stdio.h>
#include <conio.h>
int main ()
{
	int tem,arr[6],i,po,v,j;
	printf ("\n Enter the values in array: ");
	for (i=0;i<5;i++)
	{
		scanf ("%d",&arr[i]);
	}
	printf ("\nThe values of array is:\n");
	for (i=0;i<5;i++)
	{
		printf ("%d\t",arr[i]);
	}				//From this line until next comment is for adding an array
	fflush(stdin);
	printf ("\nEnter the position to be entered from 0 to 5:");
	scanf ("%d",&po);
	printf ("\nEnter the value to be entered:");
	scanf ("%d",&v);
	 for (i=5;i>=po;i--)
	{
		arr[i+1]=arr[i];
	} 
	arr[po]=v; 
	tem=arr[4];		// This is to reverse the array
	for (j=1;j<=2;j++)
	for (i=4;i>=0;i--)
	{
		po=arr[j];
		arr[j]=arr[i];
		arr[i]=po;
	}
	arr[0]=tem;
	
	printf ("\n The new array is:\n");
	for (i=0;i<5;i++)				// For reversing the array put i<5 and adding array put i<6
	{
		printf ("%d\t",arr[i]);
	}
	
	
}
