// Same as labhsheet 4 no.11
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student 
{
	int roll_n;
	char name[30];
	char address[40];
	int m1,m2,m3;
};
int main ()
{
	struct student std;
	int i;
	FILE *fp;
	fp=fopen ("student.dat","w");
	for (i=0;i<5;i++)
	{
		printf ("\nEnter the Roll no: ");
		scanf ("%d",&std.roll_n);
		printf ("\nEnter name: ");
		scanf ("%s",std.name);
		printf ("\nEnter the address: ");
		fflush (stdin);
		gets (std.address);
		printf ("\nEnter the marks of three subjects: ");
		scanf ("%d%d%d",&std.m1,&std.m2,&std.m3);
		fwrite(&std,sizeof(std),1,fp);
		
	}
	fclose (fp);
	getch();
}
