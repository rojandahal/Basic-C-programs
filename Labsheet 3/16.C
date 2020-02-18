#include <stdio.h>
#include <conio.h>
int main ()
{
	int pha,con=0,vow=0,sp=0;
	printf ("\n Enter the phrase: ");
	do 
	{
		scanf ("%c",&pha);
		if (pha=='a'||pha=='A'||pha=='e'||pha=='E'||pha=='i'||pha=='I'||pha=='o'||pha=='O'||pha=='u'||pha=='U')
			vow++;
		else if (pha==' ')
			sp++;
		else 
			con++;
		
	}while (pha!='\n');
	printf ("\nVowel=%d\nConsonant=%d\nSpace=%d",vow,con-1,sp);
	getch();
}
