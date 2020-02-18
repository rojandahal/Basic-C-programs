#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int i;
	for (i=1;i<=8;i++)
	{
		if (i==5 || i==7)
			continue;
		else 
			printf ("%d\t",i);
	}
	getch();
}
