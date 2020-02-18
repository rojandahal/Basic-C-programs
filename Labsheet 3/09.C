#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int oct=0,dec,temp,p=0;
	printf ("\n Enter the decimal value: ");
	scanf ("%d",&dec);
	int d=dec;
	while (d!=0)
	{
		temp=d%8;
		oct=oct+temp*pow(10,p); /* Multiplied by ones,tens and hundred for the remainder 
									to display in number line format*/
		d=d/8;
		p++;
	}
	printf ("\n Decimal %d = Octal %d",dec,oct);
	getch();
}
