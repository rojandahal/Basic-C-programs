#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int o,d,i,temp,tem;
	printf ("Enter the number in decimal: ");
	scanf ("%d",&d);
	tem=d;
	for (i=0;d!=0;i++)
	{
		temp=d%8;
		o=o+temp*pow(10,i);
		d=d/8;
	}
	printf ("The octal of the decimal is: %o %d",tem,o);
	getch();
}
