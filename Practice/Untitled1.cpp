//Return smallest value from an array of interger
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int smallest_value(int*,int);
int main ()
{
	int size,*arr,i;
	printf ("\nEnter the size of the array: ");
	scanf ("%d",&size);
	arr=(int *)malloc(size*sizeof(int));
	printf ("\n Enter the array:\n");
	for (i=0;i<size;i++)
	{
		scanf ("%d",(arr+i));
	}
	
	int res= smallest_value(arr,size);
	printf ("\n The minimum array is: %d",res);
}

int smallest_value(int *arr,int size)
{
	int min=*(arr+0),i;
	for (i=1;i<size;i++)
	{
		if (*(arr+i)<min)
			min=*(arr+i);
}
	return min;
}
