#include<stdio.h>
#include<conio.h>
int swap();
int main()
{
	int r,q;
	r=swap();
	printf("the sum is %d",r);
	q=swap();
	printf ("\nThe sum %d",q);
	getch();
}

int swap()
{
static int a=2,b=3,sum=0;
sum=a+b;
a++;b++;
return sum;
}
