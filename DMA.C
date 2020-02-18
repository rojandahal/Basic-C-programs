#include <stdio.h>
#include <string.h>
#include <conio.h>
void strr();
int main ()
{
	strr();
}
void strr()
{
	char name[40],caste[30];
	int n;
	printf ("\nEnter your name: ");
	gets(name);
	strupr(name);
	puts(name);
	strlwr(name);
	puts(name);
	strcpy(caste,name);
	puts(caste);
	strcat(caste,name);
	puts(caste);
	if (strcmp(name,caste)>0)
		printf("mujhe c ne 14");
	else
		printf ("virgity never exist");
	n=strlen(name);
	printf ("\nThe number of character in our name is %d",n);
	getch();
	
	
}
