#include <stdio.h>
#include <conio.h>
void swap (int*,int*);
int main ()
{
	int a,b;
	printf ("\nEnter two numbers: ");
	scanf ("%d%d",&a,&b);
	printf ("\n Numbers before swapping: ");
	printf ("\t %d\t %d",a,b);
	swap(&a,&b);
	printf ("\n Numbers after swapping: ");
	printf ("\t %d\t %d",a,b);
	getch();	
}

void swap (int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

