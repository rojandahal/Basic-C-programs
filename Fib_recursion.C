#include <stdio.h>
#include <conio.h>
int fib(int);
int main ()
{
	int i,r;
	for(i=0;i<=10;i++)
	{
		r=fib(i);
		printf("\t%d",r);
	}
	getch();
}
int fib(int n)
{
	if(n==1||n==0)
		return 1;
	else 
		return (fib(n-1)+fib(n-2));
}
