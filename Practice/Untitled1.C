#include <stdio.h>
#include <conio.h>
void sw(int *);
int main ()
{
	int arr[5],i;
	printf ("\n Elements:");
	for (i=0;i<5;i++)
		scanf ("%d",&arr[i]);
	sw(&arr[0]);
	getch();
}
void sw(int *x)
{
	int i;
	printf ("\n Array is:\n");
	for (i=0;i<5;i++)
		printf ("%d",*(x+i));
}
