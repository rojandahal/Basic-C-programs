#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int c1,c2,i=0,c;
	printf ("\nEnter the first character: ");
	scanf ("%c",&c1);
	fflush(stdin);
	printf ("\nEnter the second character: ");
	scanf ("%c",&c2);
	fflush (stdin);
	for (c=c1;c<=c2;c++)
	{
		i++;
	}
	printf ("\nThe number of character between two letters are %d",i-2);
	getch();
}
