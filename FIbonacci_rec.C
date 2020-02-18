#include <stdio.h>
#include <conio.h>
int fib(int);
int main ()
{
	int i,c,n;
	printf ("\nEnter the number of terms");
	scanf("%d",&n);
	printf("\nFibonnachi series is:\n");
	for (i=0;i<n;i++)
	{
		c=fib(i);
		printf ("\t%d",c);
	}
	getch();
}
int fib(int n)
{
	if(n==1||n==0)
	return (n);
	else 
	return (fib(n-1)+fib(n-2));
}

