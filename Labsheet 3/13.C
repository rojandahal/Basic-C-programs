#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	float x,i,n,sum=0,div;
	printf ("\nEnter the number of series ");
	scanf("%f",&n);
	printf ("\nEnter the value for series: ");
	scanf ("%f",&x);
	printf ("%f ",x);
	sum=x;
	
	for (i=2;i<=n;i++)
	{
		div=i/pow(-x,i);
		printf (" %.2f ",div);
		sum=sum+div;
	}
	printf ("\nThe sum of the series is %f",sum);
getch();
}
