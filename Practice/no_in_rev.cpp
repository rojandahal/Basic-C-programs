#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
int main ()
{
	int no[10],i,j=9,temp=0;
	system ("color 60");
	printf ("Enter the numbers: \n");
	for (i=0;i<10;i++)
	{
		scanf ("%d",&no[i]);
	}
	for (i=0;i<=4;i++)
	{
		temp=no[i];
		no[i]=no[j];
		no[j]=temp;
		j--;
	}
	for (i=0;i<10;i++)
	{
		printf ("\t%d",no[i]);
	}
	getch();
}
