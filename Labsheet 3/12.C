#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	long int x,sum,i;
	printf ("\nEnter the number for series: ");
	scanf("%d",&x);
	for (i=0;i<=999;i++)
	{
		if (i==4 || i==6)
			continue;
		sum=pow(x,i);
		printf ("%ld + ",sum);
		
	}
	getch();
}
