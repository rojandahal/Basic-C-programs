#include <stdio.h>
#include <conio.h>
int main ()
{
	int n,fact=1;
	printf ("\nEnter the value of n: ");
	scanf ("%d",&n);
	fact=n;
	for (int i=1;i<n;i++)
	{
		fact=fact*(n-i);
	}
	printf ("\nThe factorial of %d! = %d",n,fact);
	getch();
}
