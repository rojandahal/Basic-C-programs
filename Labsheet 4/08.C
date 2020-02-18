#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int *age,n,i,sum;
	float avg;
	printf ("\n Enter the number of person: ");
	scanf ("%d",&n);
	age =(int *)malloc (sizeof(int)*n);
	for (i=0;i<n;i++)
	{
		printf ("\nEnter the age of %d person--> ",i+1);
		scanf ("%d",age+i);
		sum=sum+*(age+i);
	}
	avg=sum/n;
	printf ("\nThe average age is: %f",avg);
}
