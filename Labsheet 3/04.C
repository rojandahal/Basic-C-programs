#include <stdio.h>
#include <conio.h>
int main ()
{
	int age,max=0,min=999,i,sum=0;
	float avg;
	for (i=1;i<=15;i++)
	{
		printf ("\nEnter the age of the person: ");
		scanf("%d",&age);
		if (age>max)
			max=age;
		if (age <min)
			min=age;
		sum=sum+age;
	}
	avg=sum/15.0;
	
	printf ("\nThe maximum age is: %d",max);
	printf ("\nThe minimun age is: %d",min);
	printf ("\nThe average age is: %.2f",avg);
	getch();
}
