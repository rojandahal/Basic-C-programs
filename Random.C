#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int a,b,i,cnt=1;
	printf ("\nTen lucky numbers between [1,100]\n");
	for (i=1;i<=10;i++)
	{
	 int r=rand() % 100 + 1;
	printf ("\t %d",r);
	}
	getch();
}
