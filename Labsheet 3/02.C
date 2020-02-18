#include <stdio.h>
#include <conio.h>
int main ()
{
	int a,i,mul;
	printf ("Enter a number: ");
	scanf("%d",&a);
	for (i=1;i<=10;i++)
	{
		mul=a*i;
		printf ("\n%d*%d = %d",a,i,mul);
	}
	getch();
}
