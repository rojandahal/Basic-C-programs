#include <stdio.h>
#include <conio.h>
int main ()
{
	long int a=0,b=1,c=0,i;
	for (i=1;i<=25;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf ("%ld\t",c);
	}
	getch();
}
