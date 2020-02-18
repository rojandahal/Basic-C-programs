#include <stdio.h>
#include <conio.h>
int main ()
{
	int num,sum,i;
	i=2;
	printf ("Enter a number\n");
	scanf("%d",&num);
	while (i<=num-1)
	{
		if(num%i==0)
		{
			printf("Not a prime number\n");
			break;
		}
		i++;
	}
	if(i==num)
	printf("%d is a prime number.",num);
}
