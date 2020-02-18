#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	char word[30],temp[30];
	gets(word);
	strcpy(temp,word);
	strrev(word);
	if(strcmp(word,temp)==0)
		printf ("\nIt is a pallindrome");
	else 
		printf("\nIt is not a pallindrome");
	getch();
}
