#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
	int no,i,temp,sum;
	for (i=100;i<=999;i++)
	{
		sum=0;
		no=i;
		while (no!=0)
		{
			temp=no%10;
			sum=sum+pow(temp,3);
			no=no/10;
		}
		if (i==sum)
			printf ("\nArmstrong number= %d",i);
	}
	getch();
}
