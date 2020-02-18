#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
	int i,o,d=0,temp;
	printf ("Enter the number in octal: \n");
	scanf ("%d",&o);
	for (i=0;o!=0;i++)
	{
		temp=o%10;
		if (temp>7)
		{
			printf("The number is not an octal. \n");
			exit(1);
		}
		d=d+temp*pow(8,i);
		o=o/10;
	}
	printf ("The decimal number of the octal is: %d",d);
	getch();
	
}
