#include <stdio.h>
#include <conio.h>
int term (int);
int main ()
{
	int n,sum;
	printf ("\n Enter n natural number");
	scanf("%d",&n);
	sum=term (n);
	printf ("\nThe sum of %d natural number is %d",n,sum);
	getch();
}

int term (int x)
{
	if(x==1)
	return (1);
	
	else{
	return (x+term(x-1));
}
}
