#include <stdio.h>
#include <conio.h>
void stat();
int main()
{
	int i;
	for (i=0;i<3;i++)
	{
		stat();
		getch();
	}
	
}
void stat ()
{
	static int x;
	x=x+1;
	printf ("\nThe x %d ",x);
}
