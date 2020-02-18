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
	for (i=1;i<=3;i++)
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
	fclose(fp);
	
	//IF THE FILE IS TO BE CREATED AND READ IN THE SAME PROGRAM USE BELOW CODE
	
/*	int count=1,rslt,per;
	fp=fopen("student.dat","r");
	fread(&std,sizeof(std),1,fp);
	printf ("\nSn. ROll NO\tName\tResult\tPercentage");
	while (!feof(fp))
	{
		per=(std.m1+std.m2+std.m3)/3.0;
		if (std.m1<40 || std.m2<40 || std.m3<40)
			rslt='F';
		else 
			rslt='P';		
		printf ("\n%d\t%d\t%s\t  %c\t%.3f",count,std.roll_n,std.name,rslt,per);
		fread(&std,sizeof(std),1,fp);
		count++;
		
	}
	fclose (fp);*/
	getch();
}
