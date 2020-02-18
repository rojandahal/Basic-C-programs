#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int temp,o,d=0,p=0;
	printf ("\nEnter the octal number: ");
	scanf ("%d",&o);
	int n=o;
	while (n!=0)
	{
		temp=n%10;
		d=d+(temp*pow(8,p));
		n=n/10;
		p=p+1;
	}
	printf ("\n The decimal equivalent of octal %d= %d",o,d);
	getch();
}
