#include <stdio.h>
#include <conio.h>
int main ()
{
	int sum=50,unit,temp;
	printf ("\n Enter the units of electricity bill.");
	scanf ("%d",&unit);
	if (unit<=100)
	{
		sum=sum+(unit*40);
	}
	else if (unit<=200)
	{
		temp=sum+(100*40);
		unit=unit-100;
		sum=temp+(unit*50);
	}
	else 
	{
		temp=sum+(100*40)+(200*50);
		unit=unit-300;
		sum=temp+(unit*60);
	}
	printf ("\n The total charges of electricity is:%d",sum);
}
