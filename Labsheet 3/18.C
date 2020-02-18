#include <stdio.h>
#include <conio.h>
int main ()
{
	int ch,m1,m2,m3,tot;
	float per;
	do 
	{
		printf ("\nEnter the marks in subject 1: ");
		scanf ("%d",&m1);
		printf ("\nEnter the marks in subject 2: ");
		scanf ("%d",&m2);
		printf ("\nEnter the marks in subject 3: ");
		scanf ("%d",&m3);
		tot=m1+m2+m3;
		per=tot/3.0;
		printf ("\n\tThe total marks is: %d",tot);
		printf ("\n\t The percentage is: %f",per);
		printf ("\nDo you want to continue?(y/n) ");
		fflush (stdin);
		scanf ("%c",&ch);
	}while (ch=='y'|| ch=='Y');
	getch ();
}
