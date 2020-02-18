#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
	int roll_n;
	char name[40];
	char add[40];
	int mark1,mark2,mark3;
};
int main ()
{
	int i;
	struct student std[20];
	for (i=0;i<20;i++)
	{
		printf ("\nEnter the roll no: ");
		scanf ("%d",&std[i].roll_n);
		printf ("\nEnter the name: ");
		fflush(stdin);
		gets(std[i].name);
		printf ("\nEnter the address: ");
		gets (std[i].add);
		printf ("\nEnter marks of three subjects: ");
		scanf ("%d%d%d",&std[i].mark1,&std[i].mark2,&std[i].mark3);
	}
	printf ("\n\t Failed Student Information:\n\n");
	printf ("\tRoll.No\t\tName\t\tAddress\t\tMarks1\tMarks2\tMarks3\t\n");
	
	for (i=0;i<20;i++)
	{
		if (std[i].mark1<40||std[i].mark2<40||std[i].mark3<40)
		{
	printf ("\t%d\t\t%s\t\t%s\t\t %d\t %d\t %d\n",std[i].roll_n,std[i].name,std[i].add,std[i].mark1,std[i].mark2,std[i].mark3);
		}
	}
	getch();
}
