#include <stdio.h>
#include <conio.h>
int fact(int);
int main ()
{
	int n,sum;
	printf ("\n Enter the number to be factorial: ");
	scanf("%d",&n);
	sum=fact(n);
	printf ("\nThe factorial of %d is ""%d""",n,sum);
	getch();
}

int fact(int i)
{
	if (i==1)
		return (1);
	else if (i==0)
		return(1);
	else 
		{
			i=i*fact(i-1);
			return(i);
		}
}
