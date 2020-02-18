#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct dob
{
	int m;
	int d;
	int y;
	
};
struct student
{
	int roll;
	char nam[40];
	char ad[40];
	char fac[40];
	struct dob db;
};
int main ()
{
	struct student std;
	struct dob db;
	FILE *fp;
	fp=fopen("student.txt","w");
	int i;
	for (i=0;i<5;i++)
	{
		printf ("\nEnter roll: ");
		scanf ("%d",&std.roll);
		fflush(stdin);
		printf ("\nEnter name: ");
		gets(std.nam);
		printf ("\nEnter address: ");
		gets(std.ad);
		printf ("\nEnter faculty: ");
		gets(std.fac);
		printf ("\n Enter dob mm-dd-yy: ");
		scanf ("%d%d%d",&std.db.d,&std.db.m,&std.db.y);
		fwrite(&std,sizeof(std),1,fp);
	}
	getch();
	fclose(fp);
	char c[20]="kathmandu";
	fp=fopen("student.txt","r");
	printf ("RollNo.\t\tName\t\tAddress\t\tFaculty\t\tDate Of Birth\n");
	printf ("\t\t\t\t\t\t\t\tmm\tdd\tyy");
	fread(&std,sizeof(std),1,fp);
	while (!feof(fp))
	{
		if (strcmp(std.ad,c)==0)
		{
			printf ("\n  %d\t\t%s\t\t%s\t%s\t\t%d\t%d\t%d",std.roll,std.nam,std.ad,std.fac,std.db.m,std.db.d,std.db.y);
			
		}
		fread(&std,sizeof(std),1,fp);
	}	
}
