#include <stdio.h>
#include <conio.h>
int main ()
{
	int age,i,bab=0,scl=0,adl=0;
	for (i=1;i<=15;i++)
	{
		printf ("\nEnter the age of the person: ");
		scanf ("%d",&age);
		if (age>=0 && age <=5)
			bab=bab+1;
		else if (age>5 && age <=17)
			scl=scl+1;
		else 
			adl=adl+1;
		
	}
	printf ("\nStill a baby= %d",bab);
	printf ("\nAttending School= %d",scl);
	printf ("\nAdult life= %d",adl);
	getch();
}
