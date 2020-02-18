#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void temp(float);
float square(int);
void lucky();
int fact(int);
int main ()
{
while (1)
{
	int no,c,ch;
	printf ("\nMenu:\t\t\t\t\t\t Press\n");
	printf ("\na. C to F conversion:\t\t\t\t [1]");
	printf ("\nb. Square root of a number:\t\t\t [2]");
	printf ("\nc. 10 Lucky numbers between two numbers:\t [3]");
	printf ("\nd. Factorial of a given number:\t\t\t [4]");
	printf ("\ne. Exit from program:\t\t\t\t [9]");
	
	printf ("\n\t Enter your choice: ");
	fflush(stdin);
	scanf ("%d",&ch);
	switch (ch)
	{
		case 1: printf ("\nEnter the temperature in Celcius: ");
				scanf ("%d",&c);
				temp(c);
				getch();
				break;
		case 2: printf ("Enter a number: ");
				scanf ("%d",&no);
				printf ("\nThe square root is: %f\n",square(no));
				getch();
				break;
		case 3: lucky();
				getch();
				break;
				
		case 4: printf ("\nEnter a number for factorial: ");
				scanf ("%d",&no);
				printf ("\nThe factorial of number is: %d\n",fact(no));
				getch();
				break;
		case 9: exit(1);
		
		default: printf ("\n\tInvalid Choice\n");
				 continue;
	}
}
}

void temp(float x)
{
	float f;
	f=(x*(9/5.0))+32;
	printf ("\n The temperature in Fahrenheit is: %f\n",f);
}

float square(int x)
{
	float res;
	res=sqrt(x)*1.0;
	return res;
}

void lucky ()
{
	int i,n;
	printf("\nTen random numbers are:\n");
	for (i=1; i<=10; i++) 
	{
    n = rand() % 100 + 1;
    printf("%d\t", n);
	}
}

int fact (int n)
{
	if (n==1)
		return 1;
	if (n==0)
		return 1;
	return (n*fact(n-1));
}
