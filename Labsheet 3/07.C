#include <stdio.h>
#include <conio.h>
int main ()
{
	long a,sum=0,no,temp;
	printf ("\nEnter a number to find the sum of digit ");
	scanf("%d",&a);
	no=a;
	while (no!=0)
	{
		temp=no%10;
		sum=sum+temp;
		no=no/10;
	}
	printf ("\nThe sum of digits of %d = %d",a,sum);
	getch();
}
