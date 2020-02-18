#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int i,a;
	for (i=1;i<=8;i++)
	{
		printf("\nEnter a number: ");
		scanf("%d",&a);
		if (i==3)
			break;
		else 
			printf ("%d\t\n",i);
	}
	printf ("\n HI00");
	getch();
}
