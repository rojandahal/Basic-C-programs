#include <stdio.h>
#include <conio.h>
int main ()
{
	int n,i,j=4,mul;
	printf ("\nEnter the number of terms: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
			mul=i*j;
			printf ("%d, ",mul);
			j=j+3;
	}
	getch();
}
