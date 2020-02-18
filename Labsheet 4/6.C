// Labsheet 4 no.6
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char name[15][40],temp[40];
	int i;
	for (i=0;i<5;i++)
	{
		printf ("\nEnter your name: ");
		gets (name[i]);
	}
	printf ("\n\t Enter the name to display: ");
	gets (temp);
	for (i=0;i<15;i++)
	{
		if (strcmp(name[i],temp)==0)
		{
			printf ("\tYou may Enter, oh honored one!");
			getch();
			return 0;
		}
	}
	printf ("Guards! Remove this person!");
	getch();
}
