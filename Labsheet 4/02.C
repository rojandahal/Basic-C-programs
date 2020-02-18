#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	char wo[30];
	int i,j,cnt=0,len=0;
	printf ("\nEnter the word: ");
	gets (wo);
	for (i=0;wo[i]!='\0';i++)
		len++;
	i=0;
	j=len-1;
	while (i<len)
	{
		if (wo[i]!=wo[j])
		{
			cnt++;
			break;
		}
		i++;
		j--;
	}
	if (cnt==0)
		printf ("\nThe word is pallindrome.");
	else 
		printf ("\nThe word is not pallindrome.");
	getch ();
}
