#include <stdio.h>
#include <conio.h>
int recursive (int);
int main ()
{
	int num,sum=0,res;
	printf ("\n Enter the number of any digit: ");
	scanf ("%d",&num);
	res=recursive(num);
	printf ("\nThe sumof digits of the number is: %d ",res);
	getch();
}
int recursive (int x)
{
	if (x==0)
		return 0;
	return ((x%10)+recursive(x/10));
}
